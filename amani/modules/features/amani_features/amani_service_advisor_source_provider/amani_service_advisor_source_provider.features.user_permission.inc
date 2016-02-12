<?php
/**
 * @file
 * amani_service_advisor_source_provider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_service_advisor_source_provider_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: create service_location content.
  $permissions['create service_location content'] = array(
    'name' => 'create service_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create service_partner content.
  $permissions['create service_partner content'] = array(
    'name' => 'create service_partner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create service_source content.
  $permissions['create service_source content'] = array(
    'name' => 'create service_source content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any service_location content.
  $permissions['delete any service_location content'] = array(
    'name' => 'delete any service_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any service_partner content.
  $permissions['delete any service_partner content'] = array(
    'name' => 'delete any service_partner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any service_source content.
  $permissions['delete any service_source content'] = array(
    'name' => 'delete any service_source content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own service_location content.
  $permissions['delete own service_location content'] = array(
    'name' => 'delete own service_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own service_partner content.
  $permissions['delete own service_partner content'] = array(
    'name' => 'delete own service_partner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own service_source content.
  $permissions['delete own service_source content'] = array(
    'name' => 'delete own service_source content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 19.
  $permissions['delete terms in 19'] = array(
    'name' => 'delete terms in 19',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 20.
  $permissions['delete terms in 20'] = array(
    'name' => 'delete terms in 20',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 22.
  $permissions['delete terms in 22'] = array(
    'name' => 'delete terms in 22',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 23.
  $permissions['delete terms in 23'] = array(
    'name' => 'delete terms in 23',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 24.
  $permissions['delete terms in 24'] = array(
    'name' => 'delete terms in 24',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 25.
  $permissions['delete terms in 25'] = array(
    'name' => 'delete terms in 25',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 26.
  $permissions['delete terms in 26'] = array(
    'name' => 'delete terms in 26',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 27.
  $permissions['delete terms in 27'] = array(
    'name' => 'delete terms in 27',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 30.
  $permissions['delete terms in 30'] = array(
    'name' => 'delete terms in 30',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 31.
  $permissions['delete terms in 31'] = array(
    'name' => 'delete terms in 31',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 32.
  $permissions['delete terms in 32'] = array(
    'name' => 'delete terms in 32',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 34.
  $permissions['delete terms in 34'] = array(
    'name' => 'delete terms in 34',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 35.
  $permissions['delete terms in 35'] = array(
    'name' => 'delete terms in 35',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 36.
  $permissions['delete terms in 36'] = array(
    'name' => 'delete terms in 36',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 38.
  $permissions['delete terms in 38'] = array(
    'name' => 'delete terms in 38',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any service_location content.
  $permissions['edit any service_location content'] = array(
    'name' => 'edit any service_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any service_partner content.
  $permissions['edit any service_partner content'] = array(
    'name' => 'edit any service_partner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any service_source content.
  $permissions['edit any service_source content'] = array(
    'name' => 'edit any service_source content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own service_location content.
  $permissions['edit own service_location content'] = array(
    'name' => 'edit own service_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own service_partner content.
  $permissions['edit own service_partner content'] = array(
    'name' => 'edit own service_partner content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own service_source content.
  $permissions['edit own service_source content'] = array(
    'name' => 'edit own service_source content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 19.
  $permissions['edit terms in 19'] = array(
    'name' => 'edit terms in 19',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 20.
  $permissions['edit terms in 20'] = array(
    'name' => 'edit terms in 20',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 22.
  $permissions['edit terms in 22'] = array(
    'name' => 'edit terms in 22',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 23.
  $permissions['edit terms in 23'] = array(
    'name' => 'edit terms in 23',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 24.
  $permissions['edit terms in 24'] = array(
    'name' => 'edit terms in 24',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 25.
  $permissions['edit terms in 25'] = array(
    'name' => 'edit terms in 25',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 26.
  $permissions['edit terms in 26'] = array(
    'name' => 'edit terms in 26',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 27.
  $permissions['edit terms in 27'] = array(
    'name' => 'edit terms in 27',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 30.
  $permissions['edit terms in 30'] = array(
    'name' => 'edit terms in 30',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 31.
  $permissions['edit terms in 31'] = array(
    'name' => 'edit terms in 31',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 32.
  $permissions['edit terms in 32'] = array(
    'name' => 'edit terms in 32',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 34.
  $permissions['edit terms in 34'] = array(
    'name' => 'edit terms in 34',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 35.
  $permissions['edit terms in 35'] = array(
    'name' => 'edit terms in 35',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 36.
  $permissions['edit terms in 36'] = array(
    'name' => 'edit terms in 36',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 38.
  $permissions['edit terms in 38'] = array(
    'name' => 'edit terms in 38',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: translate own content.
  $permissions['translate own content'] = array(
    'name' => 'translate own content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'translation_own_nodes',
  );

  return $permissions;
}
