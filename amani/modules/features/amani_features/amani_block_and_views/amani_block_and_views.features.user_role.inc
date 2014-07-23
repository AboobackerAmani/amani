<?php
/**
 * @file
 * amani_block_and_views.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function amani_block_and_views_user_default_roles() {
  $roles = array();

  // Exported role: amani administrator.
  $roles['amani administrator'] = array(
    'name' => 'amani administrator',
    'weight' => '5',
  );

  return $roles;
}
