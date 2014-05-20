<?php
/**
 * @file
 * amani_global.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_global_user_default_permissions() {
  $permissions = array();

  // Exported permission: access amani administrator.
  $permissions['access amani administrator'] = array(
    'name' => 'access amani administrator',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'amani_administrator',
  );

  return $permissions;
}
