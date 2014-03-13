<?php
/**
 * @file
 * amani_resource.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function amani_resource_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'resource_theme_term_path';
  $path_breadcrumb->name = 'Resource theme term path';
  $path_breadcrumb->path = 'taxonomy/term/%term';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Resources',
    ),
    'paths' => array(
      0 => 'resources',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'term' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => NULL,
          'vids' => array(
            13 => '13',
            1 => 0,
            9 => 0,
            6 => 0,
            3 => 0,
            5 => 0,
            4 => 0,
            10 => 0,
            17 => 0,
            11 => 0,
            8 => 0,
            7 => 0,
            12 => 0,
            2 => 0,
            15 => 0,
            14 => 0,
          ),
          'breadcrumb' => 0,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = -97;
  $export['resource_theme_term_path'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'resource_type_term_path';
  $path_breadcrumb->name = 'Resource type term path';
  $path_breadcrumb->path = 'taxonomy/term/%term';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Resources',
    ),
    'paths' => array(
      0 => 'resources',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'term' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'tid',
          'vids' => array(
            12 => '12',
            1 => 0,
            9 => 0,
            6 => 0,
            3 => 0,
            5 => 0,
            4 => 0,
            10 => 0,
            17 => 0,
            11 => 0,
            8 => 0,
            7 => 0,
            13 => 0,
            2 => 0,
            15 => 0,
            14 => 0,
          ),
          'breadcrumb' => 0,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = -96;
  $export['resource_type_term_path'] = $path_breadcrumb;

  return $export;
}
