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
    'link_title' => 'Configure Amani',
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
    'link_title' => 'Configure Main Menu Links',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Configure Amani');
  t('Configure Main Menu Links');
  t('Manage drop down lists');
  t('Manage users');
  t('My account');


  return $menu_links;
}
