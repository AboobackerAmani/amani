<?php
/**
 * @file
 * amani_front_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function amani_front_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-img1'] = array(
    'cache' => 1,
    'custom' => '0',
    'delta' => 'img1',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'amani_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'amani_zen',
        'weight' => '0',
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

  $export['bean-img2'] = array(
    'cache' => 1,
    'custom' => '0',
    'delta' => 'img2',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'amani_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'amani_zen',
        'weight' => '0',
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
