<?php
/**
 * @file
 * peace_geeks_blocks_and_views.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function peace_geeks_blocks_and_views_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'banner';
  $bean_type->label = 'Banner';
  $bean_type->options = '';
  $bean_type->description = 'Block type for banner image and text at top of pages.';
  $export['banner'] = $bean_type;

  return $export;
}
