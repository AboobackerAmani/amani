<?php
/**
 * @file
 * amani_global.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function amani_global_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-amani-admin-menu:admin/config/development/css-injector
  $menu_links['menu-amani-admin-menu:admin/config/development/css-injector'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/config/development/css-injector',
    'router_path' => 'admin/config/development/css-injector',
    'link_title' => 'Manage site css',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
  );
  // Exported menu link: menu-amani-admin-menu:admin/config/incident-reports
  $menu_links['menu-amani-admin-menu:admin/config/incident-reports'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/config/incident-reports',
    'router_path' => 'admin/config/incident-reports',
    'link_title' => 'Edit map settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-amani-admin-menu:admin/config/services/twitter/settings
  $menu_links['menu-amani-admin-menu:admin/config/services/twitter/settings'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/config/services/twitter/settings',
    'router_path' => 'admin/config/services/twitter/settings',
    'link_title' => 'Configure Twitter feed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-amani-admin-menu:admin/config/system/googleanalytics
  $menu_links['menu-amani-admin-menu:admin/config/system/googleanalytics'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/config/system/googleanalytics',
    'router_path' => 'admin/config/system/googleanalytics',
    'link_title' => 'Configure Google analytics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-amani-admin-menu:admin/people
  $menu_links['menu-amani-admin-menu:admin/people'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'Manage users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
  );
  // Exported menu link: menu-amani-admin-menu:admin/structure/block/manage/fb_likebox/0/configure
  $menu_links['menu-amani-admin-menu:admin/structure/block/manage/fb_likebox/0/configure'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/structure/block/manage/fb_likebox/0/configure',
    'router_path' => 'admin/structure/block/manage/%/%/configure',
    'link_title' => 'Configure Facebook feed',
    'options' => array(
      'query' => array(
        'destination' => 'home',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-amani-admin-menu:admin/structure/contact
  $menu_links['menu-amani-admin-menu:admin/structure/contact'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/structure/contact',
    'router_path' => 'admin/structure/contact',
    'link_title' => 'Configure Contact page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-amani-admin-menu:admin/structure/menu/manage/menu-amani-main-menu
  $menu_links['menu-amani-admin-menu:admin/structure/menu/manage/menu-amani-main-menu'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/structure/menu/manage/menu-amani-main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Edit main menu links',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-amani-admin-menu:admin/structure/menu/manage/menu-social-media/list
  $menu_links['menu-amani-admin-menu:admin/structure/menu/manage/menu-social-media/list'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/structure/menu/manage/menu-social-media/list',
    'router_path' => 'admin/structure/menu/manage/%/list',
    'link_title' => 'Configure Social media icons',
    'options' => array(
      'query' => array(
        'destination' => 'home',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-amani-admin-menu:admin/structure/taxonomy
  $menu_links['menu-amani-admin-menu:admin/structure/taxonomy'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Manage drop down lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-amani-admin-menu:amani/site-info
  $menu_links['menu-amani-admin-menu:amani/site-info'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'amani/site-info',
    'router_path' => 'amani/site-info',
    'link_title' => 'Manage logo, tagline & office details',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Exported menu link: menu-amani-admin-menu:block/front-page-second-sidebar-bottom/edit
  $menu_links['menu-amani-admin-menu:block/front-page-second-sidebar-bottom/edit'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'block/front-page-second-sidebar-bottom/edit',
    'router_path' => 'block/%/edit',
    'link_title' => 'Configure Newsletter link',
    'options' => array(
      'query' => array(
        'destination' => 'home',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-amani-admin-menu:redhen
  $menu_links['menu-amani-admin-menu:redhen'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'redhen',
    'router_path' => 'redhen',
    'link_title' => 'Configure RedHen CRM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-amani-admin-menu:user
  $menu_links['menu-amani-admin-menu:user'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
  );
  // Exported menu link: menu-meta:<front>
  $menu_links['menu-meta:<front>'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
  );
  // Exported menu link: menu-meta:amani/content-admin
  $menu_links['menu-meta:amani/content-admin'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => 'amani/content-admin',
    'router_path' => 'amani/content-admin',
    'link_title' => 'admin',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-meta:user/login
  $menu_links['menu-meta:user/login'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'login ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
  // Exported menu link: menu-meta:user/logout
  $menu_links['menu-meta:user/logout'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Configure Contact page');
  t('Configure Facebook feed');
  t('Configure Google analytics');
  t('Configure Newsletter link');
  t('Configure RedHen CRM');
  t('Configure Social media icons');
  t('Configure Twitter feed');
  t('Edit main menu links');
  t('Edit map settings');
  t('Manage drop down lists');
  t('Manage logo, tagline & office details');
  t('Manage site css');
  t('Manage users');
  t('My account');
  t('admin');
  t('home');
  t('login ');
  t('logout');


  return $menu_links;
}
