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
 * Setup amani base roles and permissions for those roles.
 */
function amani_setup_roles_and_permissions {
  // Enable editor role.
  if (!$editor_role = user_role_load_by_name('editor')) {
    $editor_role = new stdClass();
    $editor_role->name = 'editor';
    user_role_save($editor_role);
    user_role_grant_permissions($editor_role->rid, amani_get_permissions_by_role_name('editor'));
  }
}

/**
 * Get the permissions for a specified role.
 */
function amani_get_permissions_by_role_name($name) {
  // default permissions represent the lowest level of permission ie the editor role.
  $permissions = array(
    'skip CAPTCHA',
    'administer css injection'
  );
  switch ($name) {
    default:
      return $permissions;
  }
}
