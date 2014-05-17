<?php
/**
 * @file
 * amani_activity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_activity_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_activity_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_activity_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Activity'),
      'base' => 'node_content',
      'description' => t('An activity within a program.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
