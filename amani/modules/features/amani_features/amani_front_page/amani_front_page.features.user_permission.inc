<?php
/**
 * @file
 * amani_front_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_front_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: create front_page_box content.
  $permissions['create front_page_box content'] = array(
    'name' => 'create front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any front_page_box content.
  $permissions['delete any front_page_box content'] = array(
    'name' => 'delete any front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own front_page_box content.
  $permissions['delete own front_page_box content'] = array(
    'name' => 'delete own front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any front_page_box content.
  $permissions['edit any front_page_box content'] = array(
    'name' => 'edit any front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own front_page_box content.
  $permissions['edit own front_page_box content'] = array(
    'name' => 'edit own front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
