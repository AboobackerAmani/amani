<?php
/**
 * @file
 * amani_about.box.inc
 */

/**
 * Implements hook_default_box().
 */
function amani_about_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'amani_donate';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Donate';
  $box->options = array(
    'body' => array(
      'value' => '<a href="#"><?php echo t("Donate"); ?></a>',
      'format' => 'php_code',
    ),
  );
  $export['amani_donate'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'pilot_project';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Become a Pilot Project';
  $box->options = array(
    'body' => array(
      'value' => '<a href="#">become a <span>pilot project</span></a>',
      'format' => 'php_code',
    ),
  );
  $export['pilot_project'] = $box;

  return $export;
}
