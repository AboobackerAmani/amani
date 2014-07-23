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

  // Exported menu link: menu-amani-admin-menu:admin/configure-amani
  $menu_links['menu-amani-admin-menu:admin/configure-amani'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/configure-amani',
    'router_path' => 'admin/configure-amani',
    'link_title' => 'Configure amani',
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
    'weight' => '-49',
  );
  // Exported menu link: menu-amani-admin-menu:admin/structure/menu/manage/menu-amani-main-menu
  $menu_links['menu-amani-admin-menu:admin/structure/menu/manage/menu-amani-main-menu'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'link_path' => 'admin/structure/menu/manage/menu-amani-main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Edit main menu',
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
    'weight' => '-46',
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
    'weight' => '-50',
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
    'weight' => '-49',
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
    'weight' => '-47',
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
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Configure amani');
  t('Edit main menu');
  t('Manage drop down lists');
  t('Manage users');
  t('My account');
  t('admin');
  t('home');
  t('login ');
  t('logout');


  return $menu_links;
}
