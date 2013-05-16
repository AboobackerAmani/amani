<?php
/**
 * @file
 * amani_front_page.box.inc
 */

/**
 * Implements hook_default_box().
 */
function amani_front_page_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_second_sidebar_bottom';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Front page second sidebar bottom';
  $box->options = array(
    'body' => array(
      'value' => '<p>Static box for bottom of the second sidebar on bottom of front page&nbsp;</p>',
      'format' => 'wysiwyg_editor',
    ),
    'additional_classes' => '',
  );
  $export['front_second_sidebar_bottom'] = $box;

  return $export;
}
