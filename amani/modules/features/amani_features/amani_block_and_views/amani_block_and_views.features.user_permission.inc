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

  // Exported permission: configure all block body fields.
  $permissions['configure all block body fields'] = array(
    'name' => 'configure all block body fields',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'block_access',
  );

  return $permissions;
}
