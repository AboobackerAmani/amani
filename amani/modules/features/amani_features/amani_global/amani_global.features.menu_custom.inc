<?php
/**
 * @file
 * amani_global.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function amani_global_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-amani-admin-menu.
  $menus['menu-amani-admin-menu'] = array(
    'menu_name' => 'menu-amani-admin-menu',
    'title' => 'Amani admin menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-amani-main-menu.
  $menus['menu-amani-main-menu'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'title' => 'Configure Main Menu Links',
    'description' => 'The main menu for Amani - displayed in the header.',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-configure-footer-links.
  $menus['menu-configure-footer-links'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'title' => 'Configure Footer Links',
    'description' => 'These are the links that are displayed in the footer. Needed a separate one from the main menu, as there were some differences from the header and footer links needed.',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-donate.
  $menus['menu-donate'] = array(
    'menu_name' => 'menu-donate',
    'title' => 'Configure Donate Button',
    'description' => 'Donation fly-out. sitewide.',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-meta.
  $menus['menu-meta'] = array(
    'menu_name' => 'menu-meta',
    'title' => 'meta',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Amani admin menu');
  t('Configure Donate Button');
  t('Configure Footer Links');
  t('Configure Main Menu Links');
  t('Donation fly-out. sitewide.');
  t('The main menu for Amani - displayed in the header.');
  t('These are the links that are displayed in the footer. Needed a separate one from the main menu, as there were some differences from the header and footer links needed.');
  t('meta');


  return $menus;
}
