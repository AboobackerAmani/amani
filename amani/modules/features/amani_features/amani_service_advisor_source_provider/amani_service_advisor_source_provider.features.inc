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
