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
function amani_zen_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  amani_zen_preprocess_html($variables, $hook);
  amani_zen_preprocess_page($variables, $hook);
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
function amani_zen_preprocess_html(&$variables, $hook) {
  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
  global $base_url;

  // Adding favicons and app icons
  // $theme_path = $base_url . '/' . drupal_get_path('theme', 'amani_zen');
  $theme_path = drupal_get_path('theme',$GLOBALS['theme']);
  $app_icons_path = $base_url . '/' . $theme_path . '/app-icons/';

  $icons = array(
    array('rel' => 'apple-touch-icon', 'href' => $app_icons_path . 'apple-icon-57x57.png', 'sizes' => '57x57'),
    array('rel' => 'apple-touch-icon', 'href' => $app_icons_path . 'apple-icon-60x60.png', 'sizes' => '60x60'),
    array('rel' => 'apple-touch-icon', 'href' => $app_icons_path . 'apple-icon-72x72.png', 'sizes' => '72x72'),
    array('rel' => 'apple-touch-icon', 'href' => $app_icons_path . 'apple-icon-76x76.png', 'sizes' => '76x76'),
    array('rel' => 'apple-touch-icon', 'href' => $app_icons_path . 'apple-icon-114x114.png', 'sizes' => '114x114'),
    array('rel' => 'apple-touch-icon', 'href' => $app_icons_path . 'apple-icon-120x120.png', 'sizes' => '120x120'),
    array('rel' => 'apple-touch-icon', 'href' => $app_icons_path . 'apple-icon-144x144.png', 'sizes' => '144x144'),
    array('rel' => 'apple-touch-icon', 'href' => $app_icons_path . 'apple-icon-152x152.png', 'sizes' => '152x152'),
    array('rel' => 'apple-touch-icon', 'href' => $app_icons_path . 'apple-icon-180x180.png', 'sizes' => '180x180'),
    array('rel' => 'icon', 'href' => $app_icons_path . 'android-icon-192x192.png', 'sizes' => '192x192', 'type' => 'image/png'),
    array('rel' => 'icon', 'href' => $app_icons_path . 'favicon-16x16.png', 'sizes' => '16x16', 'type' => 'image/png'),
    array('rel' => 'icon', 'href' => $app_icons_path . 'favicon-32x32.png', 'sizes' => '32x32', 'type' => 'image/png'),
    array('rel' => 'icon', 'href' => $app_icons_path . 'favicon-96x96.png', 'sizes' => '96x96', 'type' => 'image/png'),
  );

  foreach ($icons as $icon) {
    drupal_add_html_head_link($icon);
  }

  drupal_add_html_head_link(array(
    'rel'  => 'manifest',
    'href' => $app_icons_path . 'manifest.json',
  ));

  //
  // Adding Fonts
  //

  // Google fonts
  drupal_add_css('//fonts.googleapis.com/css?family=Open+Sans:300italic,700,300,600,800,400', array('group' => CSS_THEME, 'every_page' => TRUE));
  // SS Social
  drupal_add_css($theme_path . '/fonts/ss-social/ss-social.css', array('group' => CSS_THEME, 'every_page' => TRUE));
  drupal_add_js($theme_path . '/fonts/ss-social/ss-social.js', array('type' => 'file', 'scope' => 'footer'));

  // masonary
  drupal_add_js('//cdnjs.cloudflare.com/ajax/libs/masonry/3.3.2/masonry.pkgd.min.js');
}



/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function amani_zen_preprocess_page(&$variables, $hook) {
  $variables['page']['footer']['site_name'] = $variables['site_name'];
    // die(var_dump($variables['page']['footer']['amani_site_name']));

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
function amani_zen_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // amani_zen_preprocess_node_page() or amani_zen_preprocess_node_story().
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
function amani_zen_preprocess_comment(&$variables, $hook) {
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
function amani_zen_preprocess_region(&$variables, $hook) {
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
function amani_zen_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

function amani_zen_form_alter(&$form, &$form_state, $form_id) {

  if ($form_id == 'search_block_form') {
    // add the magnifying glass icon
    $form['search_block_form']['#suffix'] = '<div class="search-icon amani-icon-search"></div>';
  }

}

/**
 * Customize the calendar pager
 */
function amani_zen_preprocess_date_views_pager(&$vars) {
  $datetime = DateTime::createFromFormat('l, F d, Y', $vars['nav_title']);
  $month = $datetime->format('F');
  $year = $datetime->format('Y');
  $vars['nav_title'] = "<span class='month'>$month</span> - $year";

  $vars['mini'] = TRUE;
}

/**
* Implements theme_menu_link().
* Adds menu description under main menu
*/
function amani_zen_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
  $element['#localized_options']['html'] = TRUE;

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  if ($element['#original_link']['menu_name'] == "menu-social-media" && isset($element['#localized_options']['attributes']['title'])){
    $social_media_name = strtolower($element['#title']);
    $element['#attributes']['class'][] = 'social-media-' . $social_media_name;
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
