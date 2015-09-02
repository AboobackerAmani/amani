<?php
/**
 * @file
 * amani_areas_of_focus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function amani_areas_of_focus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_areas_of_focus';
  $strongarm->value = 0;
  $export['comment_anonymous_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_areas_of_focus';
  $strongarm->value = '0';
  $export['comment_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_areas_of_focus';
  $strongarm->value = 1;
  $export['comment_default_mode_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_areas_of_focus';
  $strongarm->value = '50';
  $export['comment_default_per_page_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_areas_of_focus';
  $strongarm->value = 1;
  $export['comment_form_location_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_areas_of_focus';
  $strongarm->value = '1';
  $export['comment_preview_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_areas_of_focus';
  $strongarm->value = 1;
  $export['comment_subject_field_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_areas_of_focus';
  $strongarm->value = '1';
  $export['i18n_node_extended_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_areas_of_focus';
  $strongarm->value = array(
    0 => 'current',
  );
  $export['i18n_node_options_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_areas_of_focus';
  $strongarm->value = '2';
  $export['language_content_type_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_areas_of_focus';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_areas_of_focus';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_areas_of_focus';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_areas_of_focus';
  $strongarm->value = '1';
  $export['node_preview_areas_of_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_areas_of_focus';
  $strongarm->value = 0;
  $export['node_submitted_areas_of_focus'] = $strongarm;

  return $export;
}
