<?php
/**
 * @file
 * peace_geeks_blocks_and_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function peace_geeks_blocks_and_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_just_time';
  $strongarm->value = 'g A';
  $export['date_format_just_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_month_day';
  $strongarm->value = 'F j';
  $export['date_format_month_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short_month_day_year';
  $strongarm->value = 'M j, Y';
  $export['date_format_short_month_day_year'] = $strongarm;

  return $export;
}
