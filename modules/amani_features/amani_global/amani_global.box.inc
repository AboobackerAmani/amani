<?php
/**
 * @file
 * amani_global.box.inc
 */

/**
 * Implements hook_default_box().
 */
function amani_global_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'amani_powered_by';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Amani: Powered by';
  $box->options = array(
    'body' => array(
      'value' => '<img src="<?php echo base_path() . path_to_theme() . \'/images/icons/powered_by_amani.png\'; ?>" />',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['amani_powered_by'] = $box;

  return $export;
}
