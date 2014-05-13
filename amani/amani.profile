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
    'display_name' => 'Set up roles and permissions',
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
function amani_setup_roles_and_permissions() {
  // Enable default permissions for system roles.
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access comments'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access comments', 'post comments', 'skip comment approval'));

  // Create a default role for site administrators, with all available permissions assigned.
  if (!$admin_role = user_role_load_by_name('administrator')) {
    $admin_role = new stdClass();
    $admin_role->name = 'administrator';
    user_role_save($admin_role);
  }
  user_role_grant_permissions($admin_role->rid, array_keys(module_invoke_all('permission')));
  // Set this as the administrator role.
  variable_set('user_admin_role', $admin_role->rid);

  // Assign user 1 the "administrator" role.
  db_insert('users_roles')
    ->fields(array('uid' => 1, 'rid' => $admin_role->rid))
    ->execute();

  // Create contributor role.
  $role = user_role_load_by_name('contributor');
  if (!$role) {
    $role = new stdClass();
    $role->name = 'contributor';
    user_role_save($role);
    $permissions = amani_get_permissions_by_role_name('contributor');
    user_role_grant_permissions($role->rid, $permissions);
  }

  // Create editor role.
  $role = user_role_load_by_name('editor');
  if (!$role) {
    $role = new stdClass();
    $role->name = 'editor';
    user_role_save($role);
    $permissions = amani_get_permissions_by_role_name('editor');
    user_role_grant_permissions($role->rid, $permissions);
  }

  // Create amani admin role.
  $role = user_role_load_by_name('amani administrator');
  if (!$role) {
    $role = new stdClass();
    $role->name = 'amani administrator';
    user_role_save($role);
    $permissions = amani_get_permissions_by_role_name('amani administrator');
    user_role_grant_permissions($role->rid, $permissions);
  }

}

/**
 * Get the permissions for a specified role.
 */
function amani_get_permissions_by_role_name($name) {
  // default permissions represent the lowest level of permission ie. the contributor role.
 $permissions = array(
   'access content overview',
   'access own webform submissions',
   'administer css injection',
   'cancel account',
   'change own username',
   'create about content',
   'create article content',
   'create blog content',
   'create event content',
   'create files',
   'create forum content',
   'create front_page_box content',
   'create get_involved content',
   'create media_gallery content',
   'create partner content',
   'create project content',
   'create resource content',
   'create slideshow content',
   'create team content',
   'create testimonial content',
   'create webform content',
   'delete own about content',
   'delete own article content',
   'delete own blog content',
   'delete own event content',
   'delete own files',
   'delete own forum content',
   'delete own front_page_box content',
   'delete own get_involved content',
   'delete own incident_report content',
   'delete own media_gallery content',
   'delete own partner content',
   'delete own project content',
   'delete own resource content',
   'delete own slideshow content',
   'delete own team content',
   'delete own testimonial content',
   'delete own webform content',
   'delete own webform submissions',
   'edit own about content',
   'edit own article content',
   'edit own blog content',
   'edit own comments',
   'edit own event content',
   'edit own files',
   'edit own forum content',
   'edit own front_page_box content',
   'edit own get_involved content',
   'edit own media_gallery content',
   'edit own partner content',
   'edit own project content',
   'edit own resource content',
   'edit own slideshow content',
   'edit own team content',
   'edit own testimonial content',
   'edit own webform content',
   'edit own webform submissions',
   'import media',
   'search content',
   'skip CAPTCHA',
   'use text format wysiwyg_public',
   'view date repeats',
   'view own files',
   'view own private files',
   'view own unpublished files',
 );


  if ($name == 'editor') {
    $permisssion = array_merge($permissions, get_contributor_editor_diff());
  }

  elseif ($name == 'amani administrator') {
    $permissions = array_merge($permissions, get_contributor_editor_diff());
    $permissions = array_merge($permissions, get_editor_admin_diff());
  }

  return $permissions;
}

/**
 * Get the permission diff between contributor and editor roles.
 */
function get_contributor_editor_diff() {
  return array(
   'access contextual links',
   'administer comments',
   'administer files',
   'administer media galleries',
   'bypass file access',
   'delete any page content',
   'delete own page content',
   'delete revisions',
   'edit any about content',
   'edit any article content',
   'edit any blog content',
   'edit any event content',
   'edit any forum content',
   'edit any front_page_box content',
   'edit any get_involved content',
   'edit any incident_report content',
   'edit any media_gallery content',
   'edit any page content',
   'edit any partner content',
   'edit any project content',
   'edit any resource content',
   'edit any slideshow content',
   'edit any team content',
   'edit any testimonial content',
   'edit any webform content',
   'edit own page content',
   'override flood control',
   'revert revisions',
   'skip comment approval',
   'view own unpublished content',
   'view revisions',
  );
}

/**
 * Get the permission diff between editor and amani admin roles.
 */
function get_editor_admin_diff() {
  return array(
    'access all webform results',
    'access own webform results',
    'access redhen',
    'access redhen contacts',
    'access redhen orgs',
    'access site reports',
    'add authenticated twitter accounts',
    'add twitter accounts',
    'administer advanced forum',
    'administer bean settings',
    'administer beans',
    'administer blocks',
    'administer contact forms',
    'administer forums',
    'administer google analytics',
    'administer map configuration',
    'administer menu',
    'administer redhen',
    'administer redhen contacts',
    'administer redhen membership types',
    'administer redhen orgs',
    'administer redhen_contact types',
    'administer redhen_org types',
    'administer site configuration',
    'administer site settings',
    'administer taxonomy',
    'administer twitter accounts',
    'administer users',
    'assign amani administrator role',
    'assign contributor role',
    'assign editor role',
    'assign node weight',
    'create any static_content bean',
    'create incident_report content',
    'create redhen contact memberships',
    'create redhen org memberships',
    'delete any about content',
    'delete any article content',
    'delete any blog content',
    'delete any event content',
    'delete any files',
    'delete any forum content',
    'delete any front_page_box content',
    'delete any get_involved content',
    'delete any incident_report content',
    'delete any media_gallery content',
    'delete any partner content',
    'delete any project content',
    'delete any resource content',
    'delete any slideshow content',
    'delete any team content',
    'delete any testimonial content',
    'delete any webform content',
    'edit all webform submissions',
    'edit any files',
    'edit any static_content bean',
    'edit any summaries_block bean',
    'edit any user follow links',
    'edit meta tags',
    'edit own incident_report content',
    'edit own redhen contact',
    'edit redhen contact connections',
    'edit redhen contact memberships',
    'edit redhen org connections',
    'edit redhen org memberships',
    'list redhen memberships',
    'manage redhen contacts',
    'manage redhen orgs',
    'post to twitter',
    'use advanced search',
    'view bean revisions',
    'view forum statistics',
    'view last edited notice',
    'view own redhen contact',
    'view redhen contact connections',
    'view redhen contact memberships',
    'view redhen org connections',
    'view redhen org memberships',
  );
}
