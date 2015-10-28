<?php
/**
 * @file
 * Supporting file
 */

/**
  * Creates the node
  *
  * Returns TRUE when the node is successfully created.
  */
function amani_sms_support_create_node($title, $msg_code, $msg_from, $msg_date, $secret, $raw_message) {
  $entity = entity_create('node', array('type' =>'incident_report'));
  $entity->title = $title;
  
  $entity->field_description = array(LANGUAGE_NONE => array(0 => array('value' => $raw_message)));
  $entity->status = 0; // not published by default
  $entity->field_map_filter='sms';
  $entity->field_phone = array(LANGUAGE_NONE => array(0 => array('value' => $msg_from)));

  $entity->field_incident_date = array(LANGUAGE_NONE => array(0 => array('value' => date('Y-m-d H:i:s', $msg_date))));

  // Not sure why we have three secrets?
  // This uses the 'original secret' variable.
  $system_secret = variable_get('amani_sms_ori_secret', NULL);
  if ($system_secret && $secret == $system_secret) {
    entity_save('node', $entity);
    return TRUE;
  }

  return FALSE;
}

/**
 * Sorts the message
 */
function amani_sms_support_sort_message($message) {
  // Sample $message: CEPO-RB 120415 *FD10R*MH27I

  $parsed_message = array();

  $message_split = explode(' ', $message);

  // parse out the message code
  $code_messages = explode('*', $message_split[2]);

  $parsed_message['organization'] = $message_split[0];
  $parsed_message['date'] = DateTime::createFromFormat('d-m-y', implode('-', str_split($message_split[1], 2)))->getTimestamp();
  $parsed_message['messages'] = array_filter($code_messages);

  return $parsed_message;
}

/**
 * Parses the report and assigns it with appropriate tids
 */
function amani_sms_support_assign_tid($report) {
  $output = array();
  
  if (!($report[4])) {
    return $output;
  }
  
  $report_array = array(
    $report[0],
    $report[1],
    $report[2] . $report[3],
    $report[4],
  );
  
  for ($i = 0; $i < 4; $i++) {
    $map_filter = "Map Filter #$i";
    $vid = amani_sms_fetch_vid($map_filter);
    $tid = amani_sms_support_fetch_tid($report_array[$i], $vid);
    
    $output[$map_filter] = $tid;
  }

  return $output;
}

/**
 * Fetches the tid of the respective term.
 */
function amani_sms_support_fetch_tid($name, $filter_vid) {
  $query = db_select('', 't')
    ->condition('t.name', $name)
    ->condition('t.vid', $filter_vid)
    ->fields('t', array('tid'))
    ->execute();
  
  $output = $query->fetchField();
  
  return $output;
}

/**
 * Fetches the vid of the respective field.
 */
function amani_sms_support_fetch_vid($filter_name) {
  $query = db_select('taxonomy_vocabulary', 'v')
    ->condition('v.name', $filter_name)
    ->condition('v.module', 'taxonomy')
    ->fields('v', array('vid'))
    ->execute();
  
  $output = $query->fetchField();
  
  return $output;
}
