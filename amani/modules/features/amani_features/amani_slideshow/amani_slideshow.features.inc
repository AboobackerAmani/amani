<?php
/**
 * @file
 * amani_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function amani_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: front_page_slideshow.
  $styles['front_page_slideshow'] = array(
    'label' => 'front_page_slideshow',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1440,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 1440,
          'height' => 450,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function amani_slideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow slide'),
      'base' => 'node_content',
      'description' => t('An image and link for the front page rotating slideshow'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
