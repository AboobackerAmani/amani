<?php
/**
 * @file
 * amani_service_advisor_source_provider.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function amani_service_advisor_source_provider_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The add links for service partners page.';
  $fe_block_boxes->format = 'wysiwyg_advanced';
  $fe_block_boxes->machine_name = 'service_partner_controls';
  $fe_block_boxes->body = '<ul><li><a href="/node/add/service-source">Add a service</a></li><li><a href="/node/add/service-location">Add a location</a></li></ul>';

  $export['service_partner_controls'] = $fe_block_boxes;

  return $export;
}
