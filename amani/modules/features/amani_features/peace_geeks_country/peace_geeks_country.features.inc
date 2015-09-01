<?php
/**
 * @file
 * peace_geeks_country.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function peace_geeks_country_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function peace_geeks_country_node_info() {
  $items = array(
    'country' => array(
      'name' => t('Country'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Country Name'),
      'help' => '',
    ),
  );
  return $items;
}
