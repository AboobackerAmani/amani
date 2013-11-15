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

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access bean overview.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access own webform results.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access own webform submissions.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: access redhen.
  $permissions['access redhen'] = array(
    'name' => 'access redhen',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen',
  );

  // Exported permission: access redhen contacts.
  $permissions['access redhen contacts'] = array(
    'name' => 'access redhen contacts',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: access redhen orgs.
  $permissions['access redhen orgs'] = array(
    'name' => 'access redhen orgs',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user contact forms.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: add authenticated twitter accounts.
  $permissions['add authenticated twitter accounts'] = array(
    'name' => 'add authenticated twitter accounts',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: add twitter accounts.
  $permissions['add twitter accounts'] = array(
    'name' => 'add twitter accounts',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: administer advanced forum.
  $permissions['administer advanced forum'] = array(
    'name' => 'administer advanced forum',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: administer bean settings.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: administer bean types.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: administer beans.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer boxes.
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: administer contact forms.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer css injection.
  $permissions['administer css injection'] = array(
    'name' => 'administer css injection',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'css_injector',
  );

  // Exported permission: administer file types.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer forums.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'forum',
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

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer map configuration.
  $permissions['administer map configuration'] = array(
    'name' => 'administer map configuration',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'incident_map',
  );

  // Exported permission: administer media galleries.
  $permissions['administer media galleries'] = array(
    'name' => 'administer media galleries',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media_gallery',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer redhen.
  $permissions['administer redhen'] = array(
    'name' => 'administer redhen',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen',
  );

  // Exported permission: administer redhen contacts.
  $permissions['administer redhen contacts'] = array(
    'name' => 'administer redhen contacts',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: administer redhen membership types.
  $permissions['administer redhen membership types'] = array(
    'name' => 'administer redhen membership types',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: administer redhen orgs.
  $permissions['administer redhen orgs'] = array(
    'name' => 'administer redhen orgs',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: administer redhen_contact types.
  $permissions['administer redhen_contact types'] = array(
    'name' => 'administer redhen_contact types',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: administer redhen_org types.
  $permissions['administer redhen_org types'] = array(
    'name' => 'administer redhen_org types',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer site settings.
  $permissions['administer site settings'] = array(
    'name' => 'administer site settings',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'amani_global',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer twitter accounts.
  $permissions['administer twitter accounts'] = array(
    'name' => 'administer twitter accounts',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer video styles.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: bypass file access.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: create any static_content bean.
  $permissions['create any static_content bean'] = array(
    'name' => 'create any static_content bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: create any summaries_block bean.
  $permissions['create any summaries_block bean'] = array(
    'name' => 'create any summaries_block bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: create forum content.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create front_page_box content.
  $permissions['create front_page_box content'] = array(
    'name' => 'create front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create redhen contact memberships.
  $permissions['create redhen contact memberships'] = array(
    'name' => 'create redhen contact memberships',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: create redhen org memberships.
  $permissions['create redhen org memberships'] = array(
    'name' => 'create redhen org memberships',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete all webform submissions.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete any files.
  $permissions['delete any files'] = array(
    'name' => 'delete any files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any forum content.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any front_page_box content.
  $permissions['delete any front_page_box content'] = array(
    'name' => 'delete any front_page_box content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any static_content bean.
  $permissions['delete any static_content bean'] = array(
    'name' => 'delete any static_content bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: delete any summaries_block bean.
  $permissions['delete any summaries_block bean'] = array(
    'name' => 'delete any summaries_block bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own files.
  $permissions['delete own files'] = array(
    'name' => 'delete own files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own forum content.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own front_page_box content.
  $permissions['delete own front_page_box content'] = array(
    'name' => 'delete own front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete redhen contact memberships.
  $permissions['delete redhen contact memberships'] = array(
    'name' => 'delete redhen contact memberships',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: delete redhen org memberships.
  $permissions['delete redhen org memberships'] = array(
    'name' => 'delete redhen org memberships',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit all webform submissions.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit any files.
  $permissions['edit any files'] = array(
    'name' => 'edit any files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any forum content.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any front_page_box content.
  $permissions['edit any front_page_box content'] = array(
    'name' => 'edit any front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any static_content bean.
  $permissions['edit any static_content bean'] = array(
    'name' => 'edit any static_content bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: edit any summaries_block bean.
  $permissions['edit any summaries_block bean'] = array(
    'name' => 'edit any summaries_block bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit bean view mode.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: edit boxes.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit own files.
  $permissions['edit own files'] = array(
    'name' => 'edit own files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own forum content.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own front_page_box content.
  $permissions['edit own front_page_box content'] = array(
    'name' => 'edit own front_page_box content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own redhen contact.
  $permissions['edit own redhen contact'] = array(
    'name' => 'edit own redhen contact',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform submissions.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit redhen contact connections.
  $permissions['edit redhen contact connections'] = array(
    'name' => 'edit redhen contact connections',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_relation',
  );

  // Exported permission: edit redhen contact memberships.
  $permissions['edit redhen contact memberships'] = array(
    'name' => 'edit redhen contact memberships',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: edit redhen org connections.
  $permissions['edit redhen org connections'] = array(
    'name' => 'edit redhen org connections',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_relation',
  );

  // Exported permission: edit redhen org memberships.
  $permissions['edit redhen org memberships'] = array(
    'name' => 'edit redhen org memberships',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'media',
  );

  // Exported permission: list redhen memberships.
  $permissions['list redhen memberships'] = array(
    'name' => 'list redhen memberships',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: manage redhen contacts.
  $permissions['manage redhen contacts'] = array(
    'name' => 'manage redhen contacts',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: manage redhen orgs.
  $permissions['manage redhen orgs'] = array(
    'name' => 'manage redhen orgs',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_org',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: post to twitter.
  $permissions['post to twitter'] = array(
    'name' => 'post to twitter',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'twitter_post',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'contributor',
      5 => 'editor',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: use PHP for tracking visibility.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'anonymous user',
    ),
    'module' => 'search',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format wysiwyg_advanced.
  $permissions['use text format wysiwyg_advanced'] = array(
    'name' => 'use text format wysiwyg_advanced',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format wysiwyg_public.
  $permissions['use text format wysiwyg_public'] = array(
    'name' => 'use text format wysiwyg_public',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: view advanced help index.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'advanced_help',
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

  // Exported permission: view any summaries_block bean.
  $permissions['view any summaries_block bean'] = array(
    'name' => 'view any summaries_block bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: view bean page.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: view bean revisions.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view forum statistics.
  $permissions['view forum statistics'] = array(
    'name' => 'view forum statistics',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: view last edited notice.
  $permissions['view last edited notice'] = array(
    'name' => 'view last edited notice',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own redhen contact.
  $permissions['view own redhen contact'] = array(
    'name' => 'view own redhen contact',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished files.
  $permissions['view own unpublished files'] = array(
    'name' => 'view own unpublished files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'file_admin',
  );

  // Exported permission: view redhen contact connections.
  $permissions['view redhen contact connections'] = array(
    'name' => 'view redhen contact connections',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_relation',
  );

  // Exported permission: view redhen contact memberships.
  $permissions['view redhen contact memberships'] = array(
    'name' => 'view redhen contact memberships',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: view redhen org connections.
  $permissions['view redhen org connections'] = array(
    'name' => 'view redhen org connections',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_relation',
  );

  // Exported permission: view redhen org memberships.
  $permissions['view redhen org memberships'] = array(
    'name' => 'view redhen org memberships',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'redhen_membership',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
