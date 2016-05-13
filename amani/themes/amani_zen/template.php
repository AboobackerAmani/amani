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
	
	//Add language class to the body tag 
	if(isSet($variables['language'])){
		$variables['classes_array'][] = $variables['language']->language;
	}
	
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
  $sidebar = $variables['page']['sidebar_second'];
  if (array_key_exists('views_programs_campaigns-block', $sidebar)) {
    $final = $sidebar['views_programs_campaigns-block']['#markup'];
    preg_match_all("/views-field-title\">.{1,}<\/a>/", $sidebar['views_programs_campaigns-block']['#markup'], $output_array);
    $output = $output_array[0];
    $max_len = 38;
    foreach ($output as $string) {
      preg_match("/<a href.{1,}<\/a>/", $string, $arr);
      $temp = $arr[0];
      preg_match("/>.{1,}</", $temp, $arr);
      $title = str_replace('<', '', $arr[0]);
      $title = str_replace('>', '', $title);
      if (strlen($title) > $max_len) {
        $new_title = substr($title, 0, $max_len-3) . '...';
        $final = str_replace($title, $new_title, $final);
      }
    }
    $variables['page']['sidebar_second']['views_programs_campaigns-block']['#markup'] = $final;
  }
  $variables['page']['footer']['site_name'] = $variables['site_name'];
  if (!empty($variables['node']) && !empty($variables['node']->type)) {
    $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
  }

  if(isset($variables['node']) && $variables['node']->type == "partner") {
    drupal_set_title("Partners");    
  }
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
 * Use mini pager for all date views.
 */
function amani_zen_preprocess_date_views_pager(&$vars) {
  $datetime = DateTime::createFromFormat('F Y', $vars['nav_title']);
  $month = $datetime ? $datetime->format('F') : NULL;
  $year = $datetime ? $datetime->format('Y') : NULL;
  $vars['nav_title'] = "<span class='month'>$month</span> - $year";
  $vars['mini'] = TRUE;
}

/**
 * We use the mini calendar which doesn't by default include the year, do so here.
 */
function amani_zen_date_nav_title($params) {
  // Block 3 is our calendar block.
  if ($params['view']->current_display == 'block_3' && $params['granularity'] == 'month') {
    if ($date_info = $params['view']->date_info) {
      $month_num = $date_info->month;
      $date_obj = DateTime::createFromFormat('!m', $month_num);
      $month = $date_obj->format('F');
      $year = $date_info->year;
      return '<span class="month">' . $month . '</span> -' . $year;
    }
  }
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

/**
 * Sets the login/logout menu items based on user status.
 */
function amani_zen_menu_link_alter(&$link) {
  global $user;
  if ($link['link_title'] == 'Login') {
    if ($user->uid) {
      $link['hidden'] = 1;
    } else {
      $link['hidden'] = 0;
    }
  }

  if ($link['link_title'] == 'Logout') {
    if ($user->uid) {
      $link['hidden'] = 0;
    } else {
      $link['hidden'] = 1;
    }
  }

  if ($link['link_title'] == 'Admin') {
    if ($user->uid) {
      $link['hidden'] = 0;
    } else {
      $link['hidden'] = 1;
    }
  }
}

/**
 * Sets the login/logout menu items based on user status.
 * Have to check the translated menu links too.
 */
function amani_zen_translated_menu_link_alter(&$link) {
  global $user;
  if ($link['link_title'] == 'Login') {
    if ($user->uid) {
      $link['hidden'] = 1;
    } else {
      $link['hidden'] = 0;
    }
  }

  if ($link['link_title'] == 'Logout') {
    if ($user->uid) {
      $link['hidden'] = 0;
    } else {
      $link['hidden'] = 1;
    }
  }

  if ($link['link_title'] == 'Admin') {
    if ($user->uid) {
      $link['hidden'] = 0;
    } else {
      $link['hidden'] = 1;
    }
  }
}

/**
 * Implements hook_preprocess_views_view.
 * Fixes issue of title missing from week/day/year calendars.
 */
function amani_zen_preprocess_views_view(&$vars) {
  if ($vars['view']->name == 'calendar_of_events') {
    $header = $vars['header'];
    preg_match('/calendar-of-events\/[a-z]{0,5}[\/]{0,1}[W0-9-]{1,10}/', $header, $output);
    preg_match('/\/[a-z]{1,5}/', $output[0], $type_out);
    preg_match('/\/[W0-9-]{1,10}/', $output[0], $date_out);
    $type = str_replace('/', '', $type_out[0]);
    $date = str_replace('/', '', $date_out[0]);

    $header = str_replace('&laquo;', '&laquo;PREV&nbsp;', $header);
    $header = str_replace('&raquo;', '&nbsp;NEXT&raquo;', $header);

    switch($type) {
      case 'day':
        $date = date('Y-m-d', strtotime($date . ' +1 day'));
        $date = date('l, F d - Y', strtotime($date));
        $header_string = preg_replace("/<h3><span class='month'><\/span> - <\/h3>/", "<h3><span class='month'>" . $date . "</span></h3>", $header);
        $vars['header'] = $header_string;
        break;
      case 'week':
        if (strpos($date, 'W')) {
          $date = str_replace('-', '', $date);
        } else {
          $date = date('Y-m-d', strtotime($date . ' +7 days'));
        }
        $first_day = date('F d',strtotime($date));
        $last_day = date('F d', strtotime($first_day . ' +6 days'));
        $date = $first_day . ' to ' . $last_day . ' - ' . date('Y', strtotime($date));
        $header_string = preg_replace("/<h3><span class='month'><\/span> - <\/h3>/", "<h3><span class='month'>" . $date . "</span></h3>", $header);
        $vars['header'] = $header_string;
        break;
      case 'year':
        $date = $date + 1;
        $header_string = preg_replace("/<h3><span class='month'><\/span> - <\/h3>/", "<h3><span class='month'>" . $date . "</span></h3>", $header);
        $vars['header'] = $header_string;
        break;
      default:
      case '':
        $date = date('F - Y', strtotime($date . ' +1 month'));
        $header_string = preg_replace("/<h3><span class='month'><\/span> - <\/h3>/", "<h3><span class='month'>" . $date . "</span></h3>", $header);
        $vars['header'] = $header_string;
        break;
    }
  }
}

/**
* Gets the media link to add to a download button. 
*/
function amani_zen_preprocess_node(&$vars) {
  if ($vars['type'] == 'resource') {
    $field_media_download = $vars['content']['field_media']['#items'][0];
    $vars['field_media_download'] = file_create_url($field_media_download['uri']);
  }
  if ($vars['type'] == 'partner') {
    $vars['content']['title'] = $vars['title'];
    $vars['title'] = 'Partners';
  }
  if ($vars['type'] == 'team') {
    $vars['back_to_team'] = '<a href="/team">Back to team</a>';
  }
}
