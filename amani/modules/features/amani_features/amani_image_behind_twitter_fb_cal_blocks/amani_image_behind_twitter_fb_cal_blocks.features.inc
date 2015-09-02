<?php
/**
 * @file
 * amani_image_behind_twitter_fb_cal_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_image_behind_twitter_fb_cal_blocks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_image_behind_twitter_fb_cal_blocks_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_image_behind_twitter_fb_cal_blocks_node_info() {
  $items = array(
    'image_behind_twitter_fb_cal_bloc' => array(
      'name' => t('Image Behind (twitter, fb & cal) blocks'),
      'base' => 'node_content',
      'description' => t('This is to change the image behind the twitter, facebook & calender blocks.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
