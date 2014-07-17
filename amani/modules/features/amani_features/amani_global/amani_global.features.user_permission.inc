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

  // Exported permission: exclude from message filtering.
  $permissions['exclude from message filtering'] = array(
    'name' => 'exclude from message filtering',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view error messages.
  $permissions['view error messages'] = array(
    'name' => 'view error messages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view status messages.
  $permissions['view status messages'] = array(
    'name' => 'view status messages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view warning messages.
  $permissions['view warning messages'] = array(
    'name' => 'view warning messages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  return $permissions;
}
