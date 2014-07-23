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
  $strongarm->name = 'twitter_import';
  $strongarm->value = 1;
  $export['twitter_import'] = $strongarm;

  return $export;
}
