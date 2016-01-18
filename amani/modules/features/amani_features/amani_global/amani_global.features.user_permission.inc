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

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access amani administrator.
  $permissions['access amani administrator'] = array(
    'name' => 'access amani administrator',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'amani_administrator',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access bean overview.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'contributor',
      5 => 'editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'contributor',
      5 => 'editor',
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

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: access own authorizations.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: access own consumers.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'oauth_common',
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

  // Exported permission: access relations.
  $permissions['access relations'] = array(
    'name' => 'access relations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: access service links.
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'contributor',
      5 => 'editor',
    ),
    'module' => 'service_links',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
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
      1 => 'amani administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'contributor',
      5 => 'editor',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user contact forms.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'authenticated user',
      3 => 'contributor',
      4 => 'editor',
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

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media_internet',
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

  // Exported permission: administer CAPTCHA settings.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
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

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer bean settings.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      0 => 'administrator',
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
    ),
    'module' => 'bean',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
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

  // Exported permission: administer comment notify.
  $permissions['administer comment notify'] = array(
    'name' => 'administer comment notify',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer consumers.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'oauth_common',
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

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: administer css injection.
  $permissions['administer css injection'] = array(
    'name' => 'administer css injection',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'css_injector',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_group',
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
      2 => 'editor',
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

  // Exported permission: administer honeypot.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer imce.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer media galleries.
  $permissions['administer media galleries'] = array(
    'name' => 'administer media galleries',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
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

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer oauth.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer quicktabs.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'quicktabs',
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

  // Exported permission: administer relation types.
  $permissions['administer relation types'] = array(
    'name' => 'administer relation types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: administer relations.
  $permissions['administer relations'] = array(
    'name' => 'administer relations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
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

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
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

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
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

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer uuid.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: administer video styles.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: assign all roles.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign amani administrator role.
  $permissions['assign amani administrator role'] = array(
    'name' => 'assign amani administrator role',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign contributor role.
  $permissions['assign contributor role'] = array(
    'name' => 'assign contributor role',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign editor role.
  $permissions['assign editor role'] = array(
    'name' => 'assign editor role',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass file access.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: bypass honeypot protection.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: context ajax block access.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'context_ui',
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

  // Exported permission: create relations.
  $permissions['create relations'] = array(
    'name' => 'create relations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
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
      1 => 'amani administrator',
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
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
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

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
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

  // Exported permission: delete relations.
  $permissions['delete relations'] = array(
    'name' => 'delete relations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
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

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
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

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'comment',
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

  // Exported permission: edit relations.
  $permissions['edit relations'] = array(
    'name' => 'edit relations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: exclude from message filtering.
  $permissions['exclude from message filtering'] = array(
    'name' => 'exclude from message filtering',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: export relation types.
  $permissions['export relation types'] = array(
    'name' => 'export relation types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: geocoder_service_all_handlers.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_exif.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_google.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_gpx.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_json.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_kml.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_latlon.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_mapquest_nominatim.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_wkt.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_yahoo.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: geocoder_service_handler_yandex.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'geocoder',
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

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
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

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: oauth authorize any consumers.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: oauth register any consumers.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'authenticated user',
      3 => 'contributor',
      4 => 'editor',
    ),
    'module' => 'comment',
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

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
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

  // Exported permission: show format selection for bean.
  $permissions['show format selection for bean'] = array(
    'name' => 'show format selection for bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for comment.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for file.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for node.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for redhen_contact.
  $permissions['show format selection for redhen_contact'] = array(
    'name' => 'show format selection for redhen_contact',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for redhen_membership.
  $permissions['show format selection for redhen_membership'] = array(
    'name' => 'show format selection for redhen_membership',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for redhen_org.
  $permissions['show format selection for redhen_org'] = array(
    'name' => 'show format selection for redhen_org',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for relation.
  $permissions['show format selection for relation'] = array(
    'name' => 'show format selection for relation',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for taxonomy_term.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for user.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format tips.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show more format tips link.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: skip CAPTCHA.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'captcha',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: subscribe to comments.
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'contributor',
      5 => 'editor',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: translate admin strings.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: translate user-defined strings.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: use PHP for service visibility.
  $permissions['use PHP for service visibility'] = array(
    'name' => 'use PHP for service visibility',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'service_links',
  );

  // Exported permission: use PHP for settings.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: use PHP for title patterns.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'auto_nodetitle',
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
    ),
    'module' => 'search',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      0 => 'administrator',
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
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'authenticated user',
      3 => 'contributor',
      4 => 'editor',
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
      1 => 'amani administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'contributor',
      5 => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: view any summaries_block bean.
  $permissions['view any summaries_block bean'] = array(
    'name' => 'view any summaries_block bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'contributor',
      5 => 'editor',
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

  // Exported permission: view date repeats.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: view error messages.
  $permissions['view error messages'] = array(
    'name' => 'view error messages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'contributor',
      5 => 'editor',
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

  // Exported permission: view status messages.
  $permissions['view status messages'] = array(
    'name' => 'view status messages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: view warning messages.
  $permissions['view warning messages'] = array(
    'name' => 'view warning messages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  return $permissions;
}
