<?php
/**
 * @file
 * amani_global.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function amani_global_user_default_roles() {
  $roles = array();

  // Exported role: amani administrator.
  $roles['amani administrator'] = array(
    'name' => 'amani administrator',
    'weight' => '9',
  );

  return $roles;
}
