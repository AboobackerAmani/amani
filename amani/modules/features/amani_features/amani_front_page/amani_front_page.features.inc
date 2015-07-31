<?php
/**
 * @file
 * amani_front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_front_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_front_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_front_page_node_info() {
  $items = array(
    'front_page_box' => array(
      'name' => t('Front page box'),
      'base' => 'node_content',
      'description' => t('Content for one of the three boxes on the front page. In the event that there is more than one node for each box the newest one will be displayed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
