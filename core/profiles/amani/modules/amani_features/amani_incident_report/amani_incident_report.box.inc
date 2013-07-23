<?php
/**
 * @file
 * amani_incident_report.box.inc
 */

/**
 * Implements hook_default_box().
 */
function amani_incident_report_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'amani_add_record';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Amani: Add Map Record';
  $box->options = array(
    'body' => array(
      'value' => '<?php echo l(t(\'Add record\'), \'node/add/incident-report\', array(\'attributes\' => array(\'class\' => \'button\'))); ?>',
      'format' => 'php_code',
    ),
  );
  $export['amani_add_record'] = $box;

  return $export;
}
