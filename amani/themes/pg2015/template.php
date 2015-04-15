<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function pg2015_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  pg2015_preprocess_html($variables, $hook);
  pg2015_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
function pg2015_preprocess_html(&$variables, $hook) {
  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));

  // Adding favicons and app icons
  $theme_path = $base_url . '/' . drupal_get_path('theme', 'pg2015') . '/';
  $icons = array(
    array('rel' => 'apple-touch-icon', 'href' => $theme_path . 'apple-icon-57x57.png', 'sizes' => '57x57'),
    array('rel' => 'apple-touch-icon', 'href' => $theme_path . 'apple-icon-60x60.png', 'sizes' => '60x60'),
    array('rel' => 'apple-touch-icon', 'href' => $theme_path . 'apple-icon-72x72.png', 'sizes' => '72x72'),
    array('rel' => 'apple-touch-icon', 'href' => $theme_path . 'apple-icon-76x76.png', 'sizes' => '76x76'),
    array('rel' => 'apple-touch-icon', 'href' => $theme_path . 'apple-icon-114x114.png', 'sizes' => '114x114'),
    array('rel' => 'apple-touch-icon', 'href' => $theme_path . 'apple-icon-120x120.png', 'sizes' => '120x120'),
    array('rel' => 'apple-touch-icon', 'href' => $theme_path . 'apple-icon-144x144.png', 'sizes' => '144x144'),
    array('rel' => 'apple-touch-icon', 'href' => $theme_path . 'apple-icon-152x152.png', 'sizes' => '152x152'),
    array('rel' => 'apple-touch-icon', 'href' => $theme_path . 'apple-icon-180x180.png', 'sizes' => '180x180'),
    array('rel' => 'icon', 'href' => $theme_path . 'android-icon-192x192.png', 'sizes' => '192x192', 'type' => 'image/png'),
    array('rel' => 'icon', 'href' => $theme_path . 'favicon-16x16.png', 'sizes' => '16x16', 'type' => 'image/png'),
    array('rel' => 'icon', 'href' => $theme_path . 'favicon-32x32.png', 'sizes' => '32x32', 'type' => 'image/png'),
    array('rel' => 'icon', 'href' => $theme_path . 'favicon-96x96.png', 'sizes' => '96x96', 'type' => 'image/png'),
  );

  foreach ($icons as $icon) {
    drupal_add_html_head_link($icon);
  }

  drupal_add_html_head_link(array(
    'rel'  => 'manifest',
    'href' => $theme_path . 'manifest.json',
  ));
}

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function pg2015_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function pg2015_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // pg2015_preprocess_node_page() or pg2015_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function pg2015_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function pg2015_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function pg2015_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */