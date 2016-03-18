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
  // Exported menu link: menu-amani-main-menu:about
  $menu_links['menu-amani-main-menu:about'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
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
    'expanded' => '1',
    'weight' => '-43',
  );
  // Exported menu link: menu-amani-main-menu:get-involved
  $menu_links['menu-amani-main-menu:get-involved'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'get-involved',
    'router_path' => 'get-involved',
    'link_title' => 'Get Involved',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-44',
  );
  // Exported menu link: menu-amani-main-menu:programs
  $menu_links['menu-amani-main-menu:programs'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'programs',
    'router_path' => 'programs',
    'link_title' => 'Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
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
    'expanded' => '1',
    'weight' => '-45',
  );
  // Exported menu link: menu-configure-footer-links:<front>
  $menu_links['menu-configure-footer-links:<front>'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-configure-footer-links:about
  $menu_links['menu-configure-footer-links:about'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Exported menu link: menu-configure-footer-links:blog
  $menu_links['menu-configure-footer-links:blog'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'news-and-events',
  );
  // Exported menu link: menu-configure-footer-links:contact
  $menu_links['menu-configure-footer-links:contact'] = array(
    'menu_name' => 'menu-configure-footer-links',
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
    'weight' => '-44',
  );
  // Exported menu link: menu-configure-footer-links:gallery
  $menu_links['menu-configure-footer-links:gallery'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Image Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'about',
  );
  // Exported menu link: menu-configure-footer-links:get-involved
  $menu_links['menu-configure-footer-links:get-involved'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'get-involved',
    'router_path' => 'get-involved',
    'link_title' => 'Get Involved',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Exported menu link: menu-configure-footer-links:incident-reports
  $menu_links['menu-configure-footer-links:incident-reports'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'incident-reports',
    'router_path' => 'incident-reports',
    'link_title' => 'Map',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'resources',
  );
  // Exported menu link: menu-configure-footer-links:news-and-events
  $menu_links['menu-configure-footer-links:news-and-events'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'news-and-events',
    'router_path' => 'news-and-events',
    'link_title' => 'News & Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-45',
  );
  // Exported menu link: menu-configure-footer-links:partners
  $menu_links['menu-configure-footer-links:partners'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'partners',
    'router_path' => 'partners',
    'link_title' => 'Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'about',
  );
  // Exported menu link: menu-configure-footer-links:programs
  $menu_links['menu-configure-footer-links:programs'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'programs',
    'router_path' => 'programs',
    'link_title' => 'Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
  );
  // Exported menu link: menu-configure-footer-links:resources
  $menu_links['menu-configure-footer-links:resources'] = array(
    'menu_name' => 'menu-configure-footer-links',
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
    'expanded' => '1',
    'weight' => '-46',
  );
  // Exported menu link: menu-configure-footer-links:team
  $menu_links['menu-configure-footer-links:team'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'team',
    'router_path' => 'team',
    'link_title' => 'Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'about',
  );
  // Exported menu link: menu-configure-footer-links:user
  $menu_links['menu-configure-footer-links:user'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-configure-footer-links:user/logout
  $menu_links['menu-configure-footer-links:user/logout'] = array(
    'menu_name' => 'menu-configure-footer-links',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Blog');
  t('Configure Amani');
  t('Configure Main Menu Links');
  t('Contact');
  t('Get Involved');
  t('Home');
  t('Image Gallery');
  t('Login');
  t('Logout');
  t('Manage drop down lists');
  t('Manage users');
  t('Map');
  t('My account');
  t('News & Events');
  t('Partners');
  t('Programs');
  t('Resources');
  t('Team');


  return $menu_links;
}
