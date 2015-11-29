<?php
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
function amani_sms_create_sms_submission($message) {
  // Create an Entity.
  $submission = entity_create('node', array('type' => 'sms_submission'));
  // Specify the author. TODO figure out whether anonymous is adequate?
  // $submission->uid = $user->uid;
  // Create a Entity Wrapper of the new Entity. See https://www.drupal.org/documentation/entity-metadata-wrappers for more info.
  $submission_wrapper = entity_metadata_wrapper('node', $node);
  $submission_wrapper->body->set($message);
  //TODO
  //$map_record = amani_sms_create_map_record($message);
  //$submission_wrapper->field_sms_sub_map_record->set($map_record->nid);
}

/**
 * Attempt to create a map record.
 * TODO
 */
function amani_sms_create_map_record($message) {
  $parsed_values = amani_sms_parse_map_record_field_values($message);
}

/**
 * Parse the required values from the sms message, all settings should be drawn from
 * variables set at admin/settings/amani-sms (see amani_sms.admin.inc).
 * TODO
 */
function amani_sms_parse_map_record_field_values($message) {
}
