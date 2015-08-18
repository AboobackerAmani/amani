<?php
/**
 * @file
 * amani_social_media.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function amani_social_media_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'social_media_feeds';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 999999;
  $quicktabs->title = 'Social Media Feeds';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_front_page_tweets-block',
      'hide_title' => 1,
      'title' => 'twitter',
      'weight' => '-100',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Social Media Feeds');
  t('twitter');

  $export['social_media_feeds'] = $quicktabs;

  return $export;
}
