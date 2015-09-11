<?php
/**
 * @file
 * awp_redhen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function awp_redhen_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function awp_redhen_views_api() {
  return array("version" => "3.0");
}
