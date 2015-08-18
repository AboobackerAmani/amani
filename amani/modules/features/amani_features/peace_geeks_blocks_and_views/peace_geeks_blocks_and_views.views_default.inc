<?php
/**
 * @file
 * peace_geeks_blocks_and_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function peace_geeks_blocks_and_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'peace_geeks_team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Peace Geeks Team';
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
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_team_member_type' => 'field_team_member_type',
    'field_team_title' => 'field_team_title',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'header text';
  $handler->display->display_options['header']['area']['content'] = '<h2>We are a team made up of skilled individuals from a variety of backgrounds, including: law, design, accounting, marketing and more. Meet our team.</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg_advanced';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'team_member_type' => 'team_member_type',
    'forums' => 0,
    'activity_status' => 0,
    'article_type' => 0,
    'categories' => 0,
    'event_type' => 0,
    'gallery_collections' => 0,
    'report_type' => 0,
    'incident_severity' => 0,
    'partner_type' => 0,
    'project_location' => 0,
    'project_status' => 0,
    'theme' => 0,
    'resource_type' => 0,
    'tags' => 0,
    'contributor_type' => 0,
  );
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_team_image']['id'] = 'field_team_image';
  $handler->display->display_options['fields']['field_team_image']['table'] = 'field_data_field_team_image';
  $handler->display->display_options['fields']['field_team_image']['field'] = 'field_team_image';
  $handler->display->display_options['fields']['field_team_image']['label'] = '';
  $handler->display->display_options['fields']['field_team_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_team_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_image']['settings'] = array(
    'image_style' => 'team_profile_photo',
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
  $handler->display->display_options['fields']['field_team_bio']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_team_bio']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_team_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_bio']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_team_bio']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
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
  $handler->display->display_options['filters']['field_team_member_type_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_team_member_type_tid']['group_info']['label'] = 'Filter Your Search';
  $handler->display->display_options['filters']['field_team_member_type_tid']['group_info']['identifier'] = 'field_team_member_type_tid';
  $handler->display->display_options['filters']['field_team_member_type_tid']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_team_member_type_tid']['group_info']['group_items'] = array(
    2 => array(
      'title' => 'Board Members',
      'operator' => 'or',
      'value' => array(
        3 => '3',
      ),
    ),
    3 => array(
      'title' => 'Executives',
      'operator' => 'or',
      'value' => array(
        4 => '4',
      ),
    ),
    4 => array(
      'title' => 'Team Leads',
      'operator' => 'or',
      'value' => array(
        5 => '5',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_team_member_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_team_member_type_tid']['vocabulary'] = 'team_member_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'team';
  $translatables['peace_geeks_team'] = array(
    t('Master'),
    t('Team'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('header text'),
    t('<h2>We are a team made up of skilled individuals from a variety of backgrounds, including: law, design, accounting, marketing and more. Meet our team.</h2>'),
    t('term'),
    t('Read more'),
    t('Team member type (field_team_member_type)'),
    t('Filter Your Search'),
    t('Page'),
  );
  $export['peace_geeks_team'] = $view;

  return $export;
}
