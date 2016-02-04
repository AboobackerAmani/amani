<?php
/**
 * @file
 * amani_service_advisor_source_provider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_service_advisor_source_provider_ctools_plugin_api() {
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
function amani_service_advisor_source_provider_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_service_advisor_source_provider_node_info() {
  $items = array(
    'service_location' => array(
      'name' => t('Service Location'),
      'base' => 'node_content',
      'description' => t('A Service Location for the Service Advisor'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_partner' => array(
      'name' => t('Service Partner'),
      'base' => 'node_content',
      'description' => t('A partner for a UNHCR service source'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_source' => array(
      'name' => t('Service Source'),
      'base' => 'node_content',
      'description' => t('To report a Source for a certain service where the Service-Advisor app will generate such service from this source '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
