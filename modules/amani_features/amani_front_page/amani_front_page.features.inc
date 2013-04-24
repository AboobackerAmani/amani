<?php
/**
 * @file
 * amani_front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_front_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
