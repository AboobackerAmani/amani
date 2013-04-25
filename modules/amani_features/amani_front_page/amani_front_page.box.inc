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
  $box->delta = 'front_page_banner_first';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Front page banner first';
  $box->options = array(
    'body' => array(
      'value' => '<p>This is the first box that will appear to the right of the front page slideshow.</p>',
      'format' => 'wysiwyg_editor',
    ),
  );
  $export['front_page_banner_first'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_page_banner_second';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Front page banner second';
  $box->options = array(
    'body' => array(
      'value' => '<p>This is the second box that will appear to the right of the front page slideshow</p>',
      'format' => 'wysiwyg_editor',
    ),
  );
  $export['front_page_banner_second'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_page_center';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Front page center';
  $box->options = array(
    'body' => array(
      'value' => '<p>Static center box for front page</p>',
      'format' => 'wysiwyg_editor',
    ),
    'additional_classes' => '',
  );
  $export['front_page_center'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_page_left';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Front page left';
  $box->options = array(
    'body' => array(
      'value' => '<p>Front page static left box</p>',
      'format' => 'wysiwyg_editor',
    ),
    'additional_classes' => '',
  );
  $export['front_page_left'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_page_right';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Front page right';
  $box->options = array(
    'body' => array(
      'value' => '<p>Front page right static box</p>',
      'format' => 'wysiwyg_editor',
    ),
    'additional_classes' => '',
  );
  $export['front_page_right'] = $box;

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
