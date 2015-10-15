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
function amani_sms_support_create_node($content, $title, $secret) {
  global $user;
  
  $values = array(
    'type' => 'incident_report',
    'status' => 1,
    'comment' => 1,
    'promote' => 0, // promote is FALSE by default
  );
  
  $entity = entity_create('node', $values);
  $ewrapper = entity_metadata_wrapper('node', $entity);
  $ewrapper->title->set($title);
  
  if ($secret == '123456') {
    entity_save('node', $entity);
    $ewrapper->save();
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
    }
    
    
    
    $message = substr($message, 6);
  }
  
  
  return array(
    'organization' => $organization,
    'date' => $date,
    'report' => $report,
  );
}

/*

CEPO-RB 120415 *FD10R*MH27I

*/

