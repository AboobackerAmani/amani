<?php
/**
 * @file
 * amani_about.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_about_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_about_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_about_node_info() {
  $items = array(
    'about' => array(
      'name' => t('About'),
      'base' => 'node_content',
      'description' => t('Items for the about page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function amani_about_weight_features_default_settings() {
  $settings = array();

  $settings['about'] = array(
    'enabled' => '0',
    'range' => '20',
    'menu_weight' => '0',
    'default' => '0',
    'sync_translations' => '0',
  );

  return $settings;
}
