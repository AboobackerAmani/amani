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

  // Exported menu link: menu-amani-main-menu:contact
  $menu_links['menu-amani-main-menu:contact'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
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
    'weight' => '2',
  );
  // Exported menu link: menu-amani-main-menu:incident-reports
  $menu_links['menu-amani-main-menu:incident-reports'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'incident-reports',
    'router_path' => 'incident-reports',
    'link_title' => 'Map',
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
    'parent_path' => 'resources',
  );
  // Exported menu link: menu-amani-main-menu:news-and-events
  $menu_links['menu-amani-main-menu:news-and-events'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'news-and-events',
    'router_path' => 'news-and-events',
    'link_title' => 'News & Events',
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
    'weight' => '1',
  );
  // Exported menu link: menu-amani-main-menu:node/3
  $menu_links['menu-amani-main-menu:node/3'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'About',
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
    'weight' => '-3',
  );
  // Exported menu link: menu-amani-main-menu:node/4
  $menu_links['menu-amani-main-menu:node/4'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'programs',
    'router_path' => 'programs',
    'link_title' => 'Projects',
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
    'weight' => '-2',
  );
  // Exported menu link: menu-amani-main-menu:node/5
  $menu_links['menu-amani-main-menu:node/5'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Get Involved',
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
    'weight' => '-1',
  );
  // Exported menu link: menu-amani-main-menu:resources
  $menu_links['menu-amani-main-menu:resources'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
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
  // Exported menu link: menu-meta:node/1
  $menu_links['menu-meta:node/1'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'sitemap',
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
    'weight' => '0',
  );
  // Exported menu link: menu-meta:node/2
  $menu_links['menu-meta:node/2'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'other',
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
    'weight' => '1',
  );
  // Exported menu link: menu-social-media:http://facebook.com
  $menu_links['menu-social-media:http://facebook.com'] = array(
    'menu_name' => 'menu-social-media',
    'link_path' => 'http://facebook.com',
    'router_path' => '',
    'link_title' => 'Facebook',
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
    'weight' => '0',
  );
  // Exported menu link: menu-social-media:http://twitter.com
  $menu_links['menu-social-media:http://twitter.com'] = array(
    'menu_name' => 'menu-social-media',
    'link_path' => 'http://twitter.com',
    'router_path' => '',
    'link_title' => 'Twitter',
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
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Contact');
  t('Facebook');
  t('Get Involved');
  t('Map');
  t('News & Events');
  t('Projects');
  t('Resources');
  t('Twitter');
  t('home');
  t('other');
  t('sitemap');


  return $menu_links;
}
