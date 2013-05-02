<?php
/**
 * @file
 * amani_image_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_image_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function amani_image_gallery_node_info() {
  $items = array(
    'gallery_album' => array(
      'name' => t('Gallery album'),
      'base' => 'node_content',
      'description' => t('A collection of gallery images.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery_image' => array(
      'name' => t('Gallery image'),
      'base' => 'node_content',
      'description' => t('An image (picture) that can then be placed in a gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
