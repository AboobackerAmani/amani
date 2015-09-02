<?php
/**
 * @file
 * amani_image_behind_twitter_fb_cal_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function amani_image_behind_twitter_fb_cal_blocks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = 0;
  $export['comment_anonymous_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = 0;
  $export['comment_default_mode_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = '50';
  $export['comment_default_per_page_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = 0;
  $export['comment_form_location_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = '1';
  $export['comment_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = '0';
  $export['comment_preview_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = 0;
  $export['comment_subject_field_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__image_behind_twitter_fb_cal_bloc';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = '0';
  $export['language_content_type_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = array();
  $export['menu_options_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = '1';
  $export['node_preview_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_image_behind_twitter_fb_cal_bloc';
  $strongarm->value = 0;
  $export['node_submitted_image_behind_twitter_fb_cal_bloc'] = $strongarm;

  return $export;
}
