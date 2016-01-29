<?php
include_once('amani_sms.admin.inc');
/**
 * Contains helper code for amani_sms.
 */

/**
 * From a message create an associated Sms Submission (sms_submission) to record the sms
 * and from that attempt to create and associate a new Map Record (incident_report).
 * Submissions upon creation should reference their associated map record and set their
 * field_sms_sub_status to indicate if the map record creation was successful (1) or unsuccessful and
 * requires review (0). A failure is indicated by the inability to assign a necessary value outlined at admin/settings/amani-sms.
 */
function amani_sms_process_sms($inputJSON) {
  // Parse the json.
  if ($inputJSON && $parsed_message = amani_sms_parse_message($inputJSON)) {
    // If our secret is wrong.
    if (!isset($parsed_message['secret']) || $parsed_message['secret'] != variable_get('amani_sms_secret_value')) {
      return FALSE;
    }
    // Create sms submission.
    $submission = entity_create('node', array('type' => 'sms_submission'));
    $sub_wrapper = entity_metadata_wrapper('node', $submission);
    $title = date('dmY');
    if (isset($parsed_message['message']['amani_sms_reporter'])) {
      $title .= '-' . $parsed_message['message']['amani_sms_reporter'];
    }
    $sub_wrapper->title->set($title . ' (SMS Submission)');
    $sub_wrapper->field_sms_sub_message->set($inputJSON);
    $sub_wrapper->save();
    // Create our map record and associate it with the sms submission.
    amani_sms_add_map_record($parsed_message, $sub_wrapper);
    return TRUE;
  }

  return FALSE;
}

/**
 * Parse pertinent fields from sms message.
 */
function amani_sms_parse_message($inputJSON) {
  $parsed_message = array();
  $decoded_message = json_decode($inputJSON, TRUE);

  if (isset($decoded_message['message'])) {
    $msg_parts = explode(' ',$decoded_message['message']);
    // Our first 7 values we'll use later to map to a map record.
    $msg_parts_slice = array_slice($msg_parts, 0, 7);
    // Our remaining values are the text for the message.
    $msg_text = array_slice($msg_parts, 7);
    // See amani_sms.admin.inc - use our config variable names as keys for
    // easier mapping to map record later.
    $parsed_message['message']['amani_sms_date']     = isset($msg_parts_slice[0]) ? $msg_parts_slice[0] : NULL;
    $parsed_message['message']['amani_sms_reporter'] = isset($msg_parts_slice[1]) ? $msg_parts_slice[1] : NULL;
    $parsed_message['message']['amani_sms_location'] = isset($msg_parts_slice[2]) ? $msg_parts_slice[2] : NULL;
    $parsed_message['message']['amani_sms_filter_1'] = isset($msg_parts_slice[3]) ? $msg_parts_slice[3] : NULL;
    $parsed_message['message']['amani_sms_filter_2'] = isset($msg_parts_slice[4]) ? $msg_parts_slice[4] : NULL;
    $parsed_message['message']['amani_sms_filter_3'] = isset($msg_parts_slice[5]) ? $msg_parts_slice[5] : NULL;
    $parsed_message['message']['amani_sms_filter_4'] = isset($msg_parts_slice[6]) ? $msg_parts_slice[6] : NULL;
    $parsed_message['message']['amani_sms_description'] = !empty($msg_text) ? implode(' ', $msg_text) : NULL;
  }
  if (isset($decoded_message['secret'])) {
    $parsed_message['secret'] = $decoded_message['secret'];
  }


  return $parsed_message;
}

/**
 * Create and associate a map recored with an sms submission.
 */
function amani_sms_add_map_record($parsed_message, $sub_wrapper) {
  $map_record = entity_create('node', array('type' => 'incident_report'));
  $mr_wrapper = entity_metadata_wrapper('node', $map_record);
  $errors = array();
  $title = '';
  // Incident Date
  if (!is_null($parsed_message['message']['amani_sms_date'])) {
    $message_date = $parsed_message['message']['amani_sms_date'];
    $day = substr($message_date, 0, 2);
    $month = substr($message_date, 2, 2);
    $yr = substr($message_date, 4, 4);
    if (checkdate($month, $day, $yr)) {
      $date = strtotime("{$month}/{$day}/{$yr}");
      $mr_wrapper->field_incident_date->set($date);
      $title .= $date;
    }
    else {
      // Add an error.
      $errors[] = 'There was a problem with the Date, ensure the format is DDMMYYYY or DDMMYY';
      // Unpublished map record.
      $mr_wrapper->status->set(0);
    }
  }
  // Title
  $title = date('dmY');
  if (!is_null($parsed_message['message']['amani_sms_reporter'])) {
    $title .= '-' . $parsed_message['message']['amani_sms_reporter'];
  }

  // If we've been able to create a title from the date & reporter, set it.
  if ($title) {
    $mr_wrapper->title->set($title);
  } else {
  // Otherwise just use 'now' as the date.
    $mr_wrapper->title->set(date('dmY'));
  }
  // Location
  if (!is_null($parsed_message['message']['amani_sms_location'])) {
    if ($term = amani_sms_token_to_term('amani_sms_location', $parsed_message['message']['amani_sms_location'])) {
      $mr_wrapper->field_incident_geolocation->set($term->field_sms_location[LANGUAGE_NONE][0]);
    } else {
      // Add an error.
      $errors[] = 'There was a problem with the Location - ensure the value exist in your sms configuration';
      // Unpublished map record.
      $mr_wrapper->status->set(0);
    }
  }
  // Filter 1
  if (!is_null($parsed_message['message']['amani_sms_filter_1'])) {
    if ($term = amani_sms_token_to_term('amani_sms_filter_1', $parsed_message['message']['amani_sms_filter_1'])) {
      $mr_wrapper->field_incident_report_type->set($term->tid);
    } else {
      // Add an error.
      $errors[] = 'There was a problem with Filter 1 - ensure the value exist in your sms configuration';
      // Unpublished map record.
      $mr_wrapper->status->set(0);
    }
  }
  // Filter 2
  if (!is_null($parsed_message['message']['amani_sms_filter_2'])) {
    if ($term = amani_sms_token_to_term('amani_sms_filter_2', $parsed_message['message']['amani_sms_filter_2'])) {
      $mr_wrapper->field_incident_severity->set($term->tid);
    } else {
      // Add an error.
      $errors[] = 'There was a problem with Filter 2 - ensure the value exist in your sms configuration';
      // Unpublished map record.
      $mr_wrapper->status->set(0);
    }
  }
  // Filter 3
  if (!is_null($parsed_message['message']['amani_sms_filter_3'])) {
    if ($term = amani_sms_token_to_term('amani_sms_filter_3', $parsed_message['message']['amani_sms_filter_3'])) {
      $mr_wrapper->field_map_filter_3->set($term->tid);
    } else {
      // Add an error.
      $errors[] = 'There was a problem with Filter 3 - ensure the value exist in your sms configuration';
      // Unpublished map record.
      $mr_wrapper->status->set(0);
    }
  }
  // Filter 4
  if (!is_null($parsed_message['message']['amani_sms_filter_4'])) {
    if ($term = amani_sms_token_to_term('amani_sms_filter_4', $parsed_message['message']['amani_sms_filter_4'])) {
      $mr_wrapper->field_map_filter_4->set($term->tid);
    } else {
      // Add an error.
      $errors[] = 'There was a problem with Filter 4 - ensure the value exist in your sms configuration';
      // Unpublished map record.
      $mr_wrapper->status->set(0);
    }
  }
  // Description
  if (!is_null($parsed_message['message']['amani_sms_description'])) {
    $mr_wrapper->field_description->set(array(
        'value' => $parsed_message['message']['amani_sms_description'],
      )
    );
  }

  // If the map record has been set to unpublished - set the needs review flag.
  if ($mr_wrapper->status->value() == 0) {
    // Set needs review field on submission.
    $sub_wrapper->field_sms_sub_status->set(0);
    // Log our errors to the error field.
    $sub_wrapper->field_sms_sub_errors->set(implode(', ', $errors));
  } else {
    $sub_wrapper->field_sms_sub_status->set(1);
    $sub_wrapper->field_sms_sub_errors->set('No errors recorded');
  }

  $mr_wrapper->save();
  $sub_wrapper->field_sms_sub_map_record->set($mr_wrapper->getIdentifier());
  $sub_wrapper->save();
}

/**
 * Loop over terms in corresponding token (a token is a parsed value from a text message position) vocab.
 * From each term load the corresponding drupal variable and check expected value matches.
 * If we have a match, return the term.
 */
function amani_sms_token_to_term($token, $val) {
  $token_vocab = array(
    'amani_sms_location' => amani_sms_get_terms_as_options(LOCATIONS_MACHINE_NAME),
    'amani_sms_filter_1' => amani_sms_get_terms_as_options(FILTER_1_MACHINE_NAME),
    'amani_sms_filter_2' => amani_sms_get_terms_as_options(FILTER_2_MACHINE_NAME),
    'amani_sms_filter_3' => amani_sms_get_terms_as_options(FILTER_3_MACHINE_NAME),
    'amani_sms_filter_4' => amani_sms_get_terms_as_options(FILTER_4_MACHINE_NAME),
  );
  $terms = isset($token_vocab[$token]) ? $token_vocab[$token] : NULL;
  if (!is_null($terms)) {
    foreach ($terms as $t) {
      $var = variable_get($token . '_' . $t->tid, NULL);
      // Convert to lower case for case insensitive 'comparison'.
      $var = strtolower($var);
      $exploded = explode(',', trim($var));
      // Convert our passed in value to lower and see if it exists in our
      // 'allowed values' array from configuration.
      if (!is_null($var) && (in_array(strtolower($val), $exploded))) {
        return taxonomy_term_load($t->tid);
      }
    }
  }

  return FALSE;
}
