<?php
/**
 * @file
 * amani_team.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amani_team_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Team';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_team_member_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_team_member_type' => 'field_team_member_type',
    'field_team_title' => 'field_team_title',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Team member type */
  $handler->display->display_options['fields']['field_team_member_type']['id'] = 'field_team_member_type';
  $handler->display->display_options['fields']['field_team_member_type']['table'] = 'field_data_field_team_member_type';
  $handler->display->display_options['fields']['field_team_member_type']['field'] = 'field_team_member_type';
  $handler->display->display_options['fields']['field_team_member_type']['label'] = '';
  $handler->display->display_options['fields']['field_team_member_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_member_type']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_team_member_type']['delta_offset'] = '0';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_team_image']['id'] = 'field_team_image';
  $handler->display->display_options['fields']['field_team_image']['table'] = 'field_data_field_team_image';
  $handler->display->display_options['fields']['field_team_image']['field'] = 'field_team_image';
  $handler->display->display_options['fields']['field_team_image']['label'] = '';
  $handler->display->display_options['fields']['field_team_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_team_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_team_title']['id'] = 'field_team_title';
  $handler->display->display_options['fields']['field_team_title']['table'] = 'field_data_field_team_title';
  $handler->display->display_options['fields']['field_team_title']['field'] = 'field_team_title';
  $handler->display->display_options['fields']['field_team_title']['label'] = '';
  $handler->display->display_options['fields']['field_team_title']['element_label_colon'] = FALSE;
  /* Field: Content: Bio */
  $handler->display->display_options['fields']['field_team_bio']['id'] = 'field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['table'] = 'field_data_field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['field'] = 'field_team_bio';
  $handler->display->display_options['fields']['field_team_bio']['label'] = '';
  $handler->display->display_options['fields']['field_team_bio']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_team_bio']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['field_team_bio']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_team_bio']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_team_bio']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_team_bio']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_team_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_bio']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Sort criterion: Content: Display ranking (field_display_ranking) */
  $handler->display->display_options['sorts']['field_display_ranking_value']['id'] = 'field_display_ranking_value';
  $handler->display->display_options['sorts']['field_display_ranking_value']['table'] = 'field_data_field_display_ranking';
  $handler->display->display_options['sorts']['field_display_ranking_value']['field'] = 'field_display_ranking_value';
  /* Sort criterion: Content: Name (field_name:family) */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
    'team' => 'team',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    10 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Team member type (field_team_member_type) */
  $handler->display->display_options['filters']['field_team_member_type_tid']['id'] = 'field_team_member_type_tid';
  $handler->display->display_options['filters']['field_team_member_type_tid']['table'] = 'field_data_field_team_member_type';
  $handler->display->display_options['filters']['field_team_member_type_tid']['field'] = 'field_team_member_type_tid';
  $handler->display->display_options['filters']['field_team_member_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['operator_id'] = 'field_team_member_type_tid_op';
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['label'] = 'Team member type (field_team_member_type)';
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['operator'] = 'field_team_member_type_tid_op';
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['identifier'] = 'field_team_member_type_tid';
  $handler->display->display_options['filters']['field_team_member_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_team_member_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_team_member_type_tid']['vocabulary'] = 'team_member_type';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'team';
  $translatables['team'] = array(
    t('Master'),
    t('Team'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Read more'),
    t('Search'),
    t('Team member type (field_team_member_type)'),
    t('Page'),
  );
  $export['team'] = $view;

  return $export;
}
