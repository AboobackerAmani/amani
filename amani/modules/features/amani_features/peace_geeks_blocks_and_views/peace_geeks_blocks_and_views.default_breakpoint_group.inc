<?php
/**
 * @file
 * peace_geeks_blocks_and_views.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function peace_geeks_blocks_and_views_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'pg_theme';
  $breakpoint_group->name = 'PG Theme';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.mobile',
    1 => 'custom.user.wide',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['pg_theme'] = $breakpoint_group;

  return $export;
}
