<?php
/**
 * @file
 * amani_resource.taxonomy_display.inc
 */

/**
 * Implements hook_taxonomy_display_default_displays().
 */
function amani_resource_taxonomy_display_default_displays() {
  $export = array();

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'resource_type';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerHidden';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerViews';
  $taxonomy_display->associated_display_options = array(
    'view' => 'resources',
    'display' => 'resource_taxonomy_type',
  );
  $taxonomy_display->add_feed = TRUE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerCore';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['resource_type'] = $taxonomy_display;

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'theme';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerHidden';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerViews';
  $taxonomy_display->associated_display_options = array(
    'view' => 'resources',
    'display' => 'resource_taxonomy_theme',
  );
  $taxonomy_display->add_feed = TRUE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerCore';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['theme'] = $taxonomy_display;

  return $export;
}
