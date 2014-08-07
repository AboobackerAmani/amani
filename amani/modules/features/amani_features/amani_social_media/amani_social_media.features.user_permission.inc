<?php
/**
 * @file
 * amani_social_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_social_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer menu-social-media menu items.
  $permissions['administer menu-social-media menu items'] = array(
    'name' => 'administer menu-social-media menu items',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  return $permissions;
}
