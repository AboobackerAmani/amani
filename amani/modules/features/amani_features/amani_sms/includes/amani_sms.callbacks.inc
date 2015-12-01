<?php
/**
 * Contains callbacks for amani_sms.
 */
require_once('amani_sms.helpers.inc');

/**
 * Process the message from SMSSync.
 */
function amani_sms_endpoint() {
  $error = NULL;
  $inputJSON = file_get_contents('php://input');
  $success = amani_sms_process_sms($inputJSON);

  if (!$success) {
    $error = "The secret value sent from the device does not match the one on the server or the sms contained no 'message' value.";
  }

  $response = array(
    'payload' => array(
      'success' => $success,
      'error'   => $error,
    )
  );

  return drupal_json_output($response);
}
