<?php
/**
 * @file
 * peace_geeks_project_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function peace_geeks_project_partners_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function peace_geeks_project_partners_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function peace_geeks_project_partners_image_default_styles() {
  $styles = array();

  // Exported image style: project_card_image.
  $styles['project_card_image'] = array(
    'name' => 'project_card_image',
    'label' => 'Project Card Image (234 x 174)',
    'effects' => array(
      16 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '234',
          'height' => '174',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: project_partners_page_image.
  $styles['project_partners_page_image'] = array(
    'name' => 'project_partners_page_image',
    'label' => 'Project Partners Page Image (752 wide)',
    'effects' => array(
      17 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '752',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function peace_geeks_project_partners_node_info() {
  $items = array(
    'project_partners' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
