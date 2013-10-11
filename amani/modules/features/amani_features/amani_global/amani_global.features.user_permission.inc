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

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer beans.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: administer google analytics.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: create front_page_box content.
  $permissions['create front_page_box content'] = array(
    'name' => 'create front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own front_page_box content.
  $permissions['delete own front_page_box content'] = array(
    'name' => 'delete own front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any front_page_box content.
  $permissions['edit any front_page_box content'] = array(
    'name' => 'edit any front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own front_page_box content.
  $permissions['edit own front_page_box content'] = array(
    'name' => 'edit own front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blogger',
      4 => 'contributor',
      5 => 'crm manager',
      6 => 'crm viewer',
      7 => 'editor',
      8 => 'member',
    ),
    'module' => 'search',
  );

  // Exported permission: view any static_content bean.
  $permissions['view any static_content bean'] = array(
    'name' => 'view any static_content bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
