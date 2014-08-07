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

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: amani administrator.
  $roles['amani administrator'] = array(
    'name' => 'amani administrator',
    'weight' => '5',
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => '3',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '4',
  );

  return $roles;
}
