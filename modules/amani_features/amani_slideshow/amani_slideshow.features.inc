<?php
/**
 * @file
 * amani_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_slideshow_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_slideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
