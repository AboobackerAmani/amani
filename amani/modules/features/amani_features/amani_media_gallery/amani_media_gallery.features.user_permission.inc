<?php
/**
 * @file
 * amani_media_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_media_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create media_gallery content.
  $permissions['create media_gallery content'] = array(
    'name' => 'create media_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any media_gallery content.
  $permissions['delete any media_gallery content'] = array(
    'name' => 'delete any media_gallery content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own media_gallery content.
  $permissions['delete own media_gallery content'] = array(
    'name' => 'delete own media_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any media_gallery content.
  $permissions['edit any media_gallery content'] = array(
    'name' => 'edit any media_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own media_gallery content.
  $permissions['edit own media_gallery content'] = array(
    'name' => 'edit own media_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
