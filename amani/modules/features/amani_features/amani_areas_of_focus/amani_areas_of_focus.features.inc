<?php
/**
 * @file
 * amani_areas_of_focus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_areas_of_focus_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function amani_areas_of_focus_node_info() {
  $items = array(
    'areas_of_focus' => array(
      'name' => t('Areas of Focus'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
