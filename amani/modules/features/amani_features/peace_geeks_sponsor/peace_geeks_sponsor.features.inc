<?php
/**
 * @file
 * peace_geeks_sponsor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function peace_geeks_sponsor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function peace_geeks_sponsor_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor_logo_small.
  $styles['sponsor_logo_small'] = array(
    'name' => 'sponsor_logo_small',
    'label' => 'Sponsor Logo Small',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '218',
          'height' => '',
          'upscale' => 0,
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
function peace_geeks_sponsor_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor OLD to be deleted'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Sponsor Name'),
      'help' => '',
    ),
  );
  return $items;
}
