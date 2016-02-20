<?php
/**
 * @file
 * amani_service_advisor_source_provider.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function amani_service_advisor_source_provider_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['amani_service_advisor_source_provider-partner_navigation'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'partner_navigation',
    'module' => 'amani_service_advisor_source_provider',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'amani_zen' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'amani_zen',
        'weight' => '-50',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'peace' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'peace',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
