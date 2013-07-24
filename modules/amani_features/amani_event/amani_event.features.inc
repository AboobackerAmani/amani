<?php
/**
 * @file
 * amani_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_event_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_field_default_fields_alter().
 */
function amani_event_field_default_fields_alter(&$data) {
  if (isset($data['node-event-body'])) {
    $data['node-event-body']['field_instance']['widget']['weight'] = '10'; /* WAS: '5' */
  }
  if (isset($data['node-event-field_event_type'])) {
    $data['node-event-field_event_type']['field_instance']['widget']['weight'] = '15'; /* WAS: '2' */
  }
  if (isset($data['node-event-field_tags'])) {
    $data['node-event-field_tags']['field_instance']['widget']['weight'] = '17'; /* WAS: '3' */
  }
}

/**
 * Implements hook_taxonomy_default_vocabularies_alter().
 */
function amani_event_taxonomy_default_vocabularies_alter(&$data) {
  if (isset($data['event_type'])) {
    unset($data['event_type']['metatags']);
  }
}
