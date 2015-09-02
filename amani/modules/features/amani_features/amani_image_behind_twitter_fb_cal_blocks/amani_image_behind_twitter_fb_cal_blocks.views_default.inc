<?php
/**
 * @file
 * amani_image_behind_twitter_fb_cal_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amani_image_behind_twitter_fb_cal_blocks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'image_behind_twitter_fb_cal_blocks';
  $view->description = 'View-block for Image Behind (twitter, fb & cal) blocks';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image Behind (twitter, fb & cal) blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'fb-twit-cal-bgimage';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_blocks']['id'] = 'field_image_blocks';
  $handler->display->display_options['fields']['field_image_blocks']['table'] = 'field_data_field_image_blocks';
  $handler->display->display_options['fields']['field_image_blocks']['field'] = 'field_image_blocks';
  $handler->display->display_options['fields']['field_image_blocks']['label'] = '';
  $handler->display->display_options['fields']['field_image_blocks']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_blocks']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_blocks']['settings'] = array(
    'image_style' => 'front_page_slideshow',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_behind_twitter_fb_cal_bloc' => 'image_behind_twitter_fb_cal_bloc',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['image_behind_twitter_fb_cal_blocks'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['image_behind_twitter_fb_cal_blocks'] = $view;

  return $export;
}
