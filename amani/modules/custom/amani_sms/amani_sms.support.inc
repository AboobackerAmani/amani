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

  if ($secret == "123456") {
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
 * Fetches the vid and tid of the respective field.
 */
function amani_sms_support_fetch_id($name, $field_machine_name) {
  $query = db_select();
}


