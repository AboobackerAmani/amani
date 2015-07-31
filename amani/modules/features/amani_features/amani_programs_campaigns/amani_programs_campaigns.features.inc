<?php
/**
 * @file
 * amani_programs_campaigns.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_programs_campaigns_ctools_plugin_api($module = NULL, $api = NULL) {
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
function amani_programs_campaigns_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_programs_campaigns_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Program'),
      'base' => 'node_content',
      'description' => t('A program or campaign by your organization'),
      'has_title' => '1',
      'title_label' => t('Program Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
