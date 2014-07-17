<?php

/**
 * Implements hook install tasks.
 *
 */
function amani_install_tasks() {
  $tasks['enable_image_file_display_task'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'enable_image_file_display',
  );

  $tasks['amani_setup_roles_and_permissions'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'amani_setup_roles_and_permissions',
  );

  $tasks['revert_amani_features_task'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'revert_amani_features',
  );

  return $tasks;
}

/**
 * Revert all features.
 */
function revert_amani_features() {
  features_revert();
}

/**
 * Setup admin/authenticated users.
 */
function amani_setup_roles_and_permissions() {
  // Enable default permissions for system roles.
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, amani_check_permissions(amani_get_permissions_by_role_name()));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, amani_check_permissions(amani_get_permissions_by_role_name('authenticated user')));

  // Create admin role.
  $role = user_role_load_by_name('administrator');
  if (!$role) {
    $role = new stdClass();
    $role->name = 'administrator';
    user_role_save($admin_role);
  }
  user_role_grant_permissions($role->rid, array_keys(module_invoke_all('permission')));
}
