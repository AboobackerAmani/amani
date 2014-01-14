<?php
/**
 * @file
 * amani_partners.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function amani_partners_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-amani-main-menu:partners
  $menu_links['menu-amani-main-menu:partners'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'partners',
    'router_path' => 'partners',
    'link_title' => 'Partners',
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
    'weight' => '42',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Partners');


  return $menu_links;
}
