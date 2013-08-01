<?php
/**
 * @file
 * amani_global.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function amani_global_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_menu_1';
  $strongarm->value = 'menu-amani-main-menu:0';
  $export['superfish_menu_1'] = $strongarm;

  return $export;
}
