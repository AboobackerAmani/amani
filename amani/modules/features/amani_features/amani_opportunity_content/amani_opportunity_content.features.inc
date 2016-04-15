<?php
/**
 * @file
 * amani_opportunity_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_opportunity_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_opportunity_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_opportunity_content_node_info() {
  $items = array(
    'opportunity' => array(
      'name' => t('Opportunity'),
      'base' => 'node_content',
      'description' => t('This content type allows to create opportunities'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
