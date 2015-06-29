<?php
/**
 * @file
 * amani_front_page.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function amani_front_page_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'hero_banner';
  $bean_type->label = 'hero-banner';
  $bean_type->options = '';
  $bean_type->description = 'Hero banner.';
  $export['hero_banner'] = $bean_type;

  return $export;
}
