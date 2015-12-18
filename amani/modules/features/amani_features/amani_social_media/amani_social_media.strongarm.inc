<?php
/**
 * @file
 * amani_social_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function amani_social_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_about_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'ical' => 0,
    'diff_standard' => 0,
    'media_gallery_block' => 0,
    'token' => 0,
  );
  $export['sharethis_about_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_activity_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'ical' => 0,
    'diff_standard' => 0,
    'media_gallery_block' => 0,
    'token' => 0,
  );
  $export['sharethis_activity_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_article_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'ical' => 0,
    'diff_standard' => 0,
    'media_gallery_block' => 0,
    'token' => 0,
  );
  $export['sharethis_article_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_blog_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'ical' => 0,
    'diff_standard' => 0,
    'media_gallery_block' => 0,
    'token' => 0,
  );
  $export['sharethis_blog_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_button_option';
  $strongarm->value = 'stbc_hcount';
  $export['sharethis_button_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_event_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'ical' => 0,
    'diff_standard' => 0,
    'media_gallery_block' => 0,
    'token' => 0,
  );
  $export['sharethis_event_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_location';
  $strongarm->value = 'content';
  $export['sharethis_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_node_types';
  $strongarm->value = array(
    'article' => 'article',
    'blog' => 'blog',
    'event' => 'event',
    'about' => 0,
    'activity' => 0,
    'forum' => 0,
    'front_page_box' => 0,
    'media_gallery' => 0,
    'get_involved' => 0,
    'image_behind_twitter_fb_cal_bloc' => 0,
    'incident_report' => 0,
    'page' => 0,
    'partner' => 0,
    'project' => 0,
    'resource' => 0,
    'slideshow' => 0,
    'team' => 0,
    'testimonial' => 0,
    'webform' => 0,
  );
  $export['sharethis_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_option_neworzero';
  $strongarm->value = 0;
  $export['sharethis_option_neworzero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_import';
  $strongarm->value = 1;
  $export['twitter_import'] = $strongarm;

  return $export;
}
