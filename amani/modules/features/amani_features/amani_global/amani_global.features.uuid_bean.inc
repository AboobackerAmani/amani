<?php
/**
 * @file
 * amani_global.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function amani_global_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Amani: Special Thanks',
    'description' => NULL,
    'title' => '',
    'type' => 'static_content',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'amani-special-thanks',
    'view_mode' => 'default',
    'created' => 1374818202,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '7ea64c8e-3953-4284-9751-74f2cdbcb001',
    'uuid' => 'c36642c7-9636-4712-8804-b5610cdce8a9',
    'field_bean_body' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="sponsor-logos"></div>',
          'format' => 'php_code',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $beans;
}
