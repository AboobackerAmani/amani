<?php
/**
 * @file
 * peace_geeks_project_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function peace_geeks_project_partners_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function peace_geeks_project_partners_node_info() {
  $items = array(
    'project_partners' => array(
      'name' => t('Project Partners'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
