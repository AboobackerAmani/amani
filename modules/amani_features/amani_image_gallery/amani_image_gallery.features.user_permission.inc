<?php
/**
 * @file
 * amani_image_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_image_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gallery_album content.
  $permissions['create gallery_album content'] = array(
    'name' => 'create gallery_album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create gallery_image content.
  $permissions['create gallery_image content'] = array(
    'name' => 'create gallery_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any gallery_album content.
  $permissions['delete any gallery_album content'] = array(
    'name' => 'delete any gallery_album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any gallery_image content.
  $permissions['delete any gallery_image content'] = array(
    'name' => 'delete any gallery_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own gallery_album content.
  $permissions['delete own gallery_album content'] = array(
    'name' => 'delete own gallery_album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own gallery_image content.
  $permissions['delete own gallery_image content'] = array(
    'name' => 'delete own gallery_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any gallery_album content.
  $permissions['edit any gallery_album content'] = array(
    'name' => 'edit any gallery_album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any gallery_image content.
  $permissions['edit any gallery_image content'] = array(
    'name' => 'edit any gallery_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own gallery_album content.
  $permissions['edit own gallery_album content'] = array(
    'name' => 'edit own gallery_album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own gallery_image content.
  $permissions['edit own gallery_image content'] = array(
    'name' => 'edit own gallery_image content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
