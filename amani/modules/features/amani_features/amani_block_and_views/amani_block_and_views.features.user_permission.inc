<?php
/**
 * @file
 * amani_block_and_views.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_block_and_views_user_default_permissions() {
  $permissions = array();

  // Exported permission: configure all block descriptions.
  $permissions['configure all block descriptions'] = array(
    'name' => 'configure all block descriptions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  return $permissions;
}
