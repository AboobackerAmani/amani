<?php
/**
 * @file
 * amani_sms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_sms_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function amani_sms_node_info() {
  $items = array(
    'sms_submission' => array(
      'name' => t('Sms Submission'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
