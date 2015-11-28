<?php
/**
 * Contains callbacks for amani_sms.
 */
require_once('amani_sms.helpers.inc');

/**
 * Process the message from SMSSync.
 * TODO
 */
function amani_sms_endpoint() {
  //$error = NULL;
  //$secret = NULL;
  //// Set success to false as the default success status
  //$success = TRUE;

  //$inputJSON = file_get_contents('php://input');
  //$decoded_message = json_decode($inputJSON);

  //$parsed_msg = amani_sms_support_sort_message($decoded_message->message);
  //foreach ($parsed_msg['messages'] as $code) {
  //  $success = $success && amani_sms_support_create_node($parsed_msg['organization'], $code, $decoded_message->from, $parsed_msg['date'], $decoded_message->secret, $decoded_message->message);
  //}

  //if (!$success) {
  //  $error = "The secret value sent from the device does not match the one on the server. The secret is: " . $secret;
  //  header("HTTP/1.1 403 The secret value sent from the device does not match the one on the server", true, 403);
  //}

  //$response = array(
  //  'payload' => array(
  //    'success' => $success,
  //    'error'   => $error,
  //    'message' => $decoded_message->message,
  //  )
  //);

  //return drupal_json_output($response);
}
