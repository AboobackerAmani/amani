<?php
/**
 * @file
 * amani_incident_report.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_incident_report_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function amani_incident_report_node_info() {
  $items = array(
    'incident_report' => array(
      'name' => t('Incident report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
