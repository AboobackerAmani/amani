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
function amani_sms_support_create_node($message, $secret, $title = 'SMS Report') {
  global $user;
  
  $values = array(
    'type' => 'incident_report',
    'status' => 1,
    'comment' => 1,
    'promote' => 0, // promote is FALSE by default
  );
  
  $content = amani_sms_support_sort_message($message);
  
  $entity = entity_create('node', $values);
  $entity->title = $title;
  
  $entity->field_description = array(LANGUAGE_NONE => array(0 => array('value' => $decoded_message->message)));
  $entity->status = 0; // not published by default
  $entity->field_map_filter='sms';
  $entity->field_phone = array(LANGUAGE_NONE => array(0 => array('value' => $decoded_message->from)));
  $entity->field_incident_date = array(LANGUAGE_NONE => array(0 => array('value' => date('Y-m-d H:i:s'))));
  
  if ($secret == '123456') {
    entity_save('node', $entity);
    return TRUE;
  }
  
  else {
    return FALSE;
  }
}

/**
 * Sorts the message
 */
function amani_sms_support_sort_message($message) {
  /*
  Sample $message: CEPO-RB 120415 *FD10R*MH27I
  */
  
  $organization = NULL;
  $date = NULL;
  $report = array();
  
  $pos = strpos($message, ' ');
  $organization = strstr($message, ' ', TRUE);
  
  $message = substr($message, $pos + 1); 
  $date = strstr($message, ' ', TRUE);
  $message = substr($message, 7);
  
  $i = 0;
  
  while ($message) {
    if (strpos($message, '*')) {
      $report[$i] = strstr($message, '*', TRUE);
      $message = substr($message, 6);
      $i++;
    }
    
    // Only one report left
    else {
      $report[$i] = $message;
      $message = NULL;
    }
  }
  
  return array(
    'organization' => $organization,
    'date' => $date,
    'report' => $report,
  );
}

/**
 * Fetches the vid and tid of the respective field.
 */
function amani_sms_support_fetch_id($name, $field_machine_name) {
  $query = db_select();
}


