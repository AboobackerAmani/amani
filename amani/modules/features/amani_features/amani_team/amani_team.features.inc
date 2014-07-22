<?php
/**
 * @file
 * amani_team.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_team_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_team_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_team_node_info() {
  $items = array(
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('A team member picture and bio for the team page'),
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
function amani_team_weight_features_default_settings() {
  $settings = array();

  $settings['team'] = array(
    'enabled' => '1',
    'range' => '20',
    'menu_weight' => '0',
    'default' => '0',
    'sync_translations' => '0',
  );

  return $settings;
}
