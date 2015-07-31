<?php
/**
 * @file
 * amani_get_involved.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_get_involved_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_get_involved_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function amani_get_involved_image_default_styles() {
  $styles = array();

  // Exported image style: get_involved__207x160_.
  $styles['get_involved__207x160_'] = array(
    'label' => 'Get Involved (207x160)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 207,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function amani_get_involved_node_info() {
  $items = array(
    'get_involved' => array(
      'name' => t('Get involved'),
      'base' => 'node_content',
      'description' => t('An action item to show in Get Involved sections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
