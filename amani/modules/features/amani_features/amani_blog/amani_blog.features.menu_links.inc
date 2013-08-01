<?php
/**
 * @file
 * amani_blog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function amani_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-amani-main-menu:blog
  $menu_links['menu-amani-main-menu:blog'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => 'View a listing of blog entries.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'news-and-events',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');


  return $menu_links;
}
