<?php
/**
 * @file
 * amani_social_media.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function amani_social_media_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-social-media.
  $menus['menu-social-media'] = array(
    'menu_name' => 'menu-social-media',
    'title' => 'Configure Social Media Menu',
    'description' => 'Social media widgets for the header',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Configure Social Media Menu');
  t('Social media widgets for the header');


  return $menus;
}
