<?php
/**
 * @file
 * peace_geeks_facts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function peace_geeks_facts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function peace_geeks_facts_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function peace_geeks_facts_node_info() {
  $items = array(
    'fact' => array(
      'name' => t('Fact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Number for this fact'),
      'help' => '',
    ),
  );
  return $items;
}