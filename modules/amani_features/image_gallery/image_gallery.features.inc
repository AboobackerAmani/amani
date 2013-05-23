<?php
/**
 * @file
 * image_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function image_gallery_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_gallery_node_info() {
  $items = array(
    'node_gallery_gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('A gallery of images.'),
      'has_title' => '1',
      'title_label' => t('Gallery Name'),
      'help' => '',
    ),
    'node_gallery_item' => array(
      'name' => t('Gallery Item'),
      'base' => 'node_content',
      'description' => t('A gallery node item.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
