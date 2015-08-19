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
  $view->name = 'peace_geeks_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Peace Geeks Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Peace Geeks Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'header';
  $handler->display->display_options['header']['area']['content'] = '<h3>Media Resources Download</h3>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg_advanced';
  /* Relationship: Content: Media (field_media:fid) */
  $handler->display->display_options['relationships']['field_media_fid']['id'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['table'] = 'field_data_field_media';
  $handler->display->display_options['relationships']['field_media_fid']['field'] = 'field_media_fid';
  /* Field: Content: Lead Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'media_resources_download',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_media_fid';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="file-download-line"><a href="[uri]" class="file-download">Download</a> | <a href="[uri]?width=500&height=500" class="file-viewonline colorbox">View Online</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'resource' => 'resource',
  );
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_tid']['id'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_tid']['field'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_type_tid']['vocabulary'] = 'resource_type';

  /* Display: Media Resources Download */
  $handler = $view->new_display('block', 'Media Resources Download', 'block');

  /* Display: Annual Report Download */
  $handler = $view->new_display('block', 'Annual Report Download', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'header';
  $handler->display->display_options['header']['area']['content'] = '<h3>Annual Report Download</h3>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg_advanced';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Lead Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'media_resources_download',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_media_fid';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="file-download-line"><a href="[uri]" class="file-download">Download</a> | <a href="[uri]?width=500&height=500" class="file-viewonline colorbox">View Online</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'resource' => 'resource',
  );
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_tid']['id'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_tid']['field'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_type_tid']['vocabulary'] = 'resource_type';
  $translatables['peace_geeks_resources'] = array(
    t('Master'),
    t('Peace Geeks Resources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('header'),
    t('<h3>Media Resources Download</h3>'),
    t('file from field_media'),
    t('<div class="file-download-line"><a href="[uri]" class="file-download">Download</a> | <a href="[uri]?width=500&height=500" class="file-viewonline colorbox">View Online</a></div>'),
    t('Media Resources Download'),
    t('Annual Report Download'),
    t('<h3>Annual Report Download</h3>'),
  );
  $export['peace_geeks_resources'] = $view;

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

  $view = new view();
  $view->name = 'sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Sponsor Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'sponsor_logo_small',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Short Sponsor Info */
  $handler->display->display_options['fields']['field_short_sponsor_info']['id'] = 'field_short_sponsor_info';
  $handler->display->display_options['fields']['field_short_sponsor_info']['table'] = 'field_data_field_short_sponsor_info';
  $handler->display->display_options['fields']['field_short_sponsor_info']['field'] = 'field_short_sponsor_info';
  $handler->display->display_options['fields']['field_short_sponsor_info']['label'] = '';
  $handler->display->display_options['fields']['field_short_sponsor_info']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Featured Sponsor (field_featured_sponsor) */
  $handler->display->display_options['filters']['field_featured_sponsor_value']['id'] = 'field_featured_sponsor_value';
  $handler->display->display_options['filters']['field_featured_sponsor_value']['table'] = 'field_data_field_featured_sponsor';
  $handler->display->display_options['filters']['field_featured_sponsor_value']['field'] = 'field_featured_sponsor_value';
  $handler->display->display_options['filters']['field_featured_sponsor_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'title';
  $handler->display->display_options['header']['area']['content'] = '<h3>Sponsors</h3>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg_advanced';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor Group (field_sponsor_group) */
  $handler->display->display_options['filters']['field_sponsor_group_tid']['id'] = 'field_sponsor_group_tid';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['table'] = 'field_data_field_sponsor_group';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['field'] = 'field_sponsor_group_tid';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sponsor_group_tid']['expose']['operator_id'] = 'field_sponsor_group_tid_op';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['expose']['label'] = 'Filter Your Search';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['expose']['operator'] = 'field_sponsor_group_tid_op';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['expose']['identifier'] = 'field_sponsor_group_tid';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_sponsor_group_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_sponsor_group_tid']['group_info']['label'] = 'Filter Your Search';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['group_info']['identifier'] = 'field_sponsor_group_tid';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Community',
      'operator' => 'or',
      'value' => array(
        8 => '8',
      ),
    ),
    2 => array(
      'title' => 'Founding',
      'operator' => 'or',
      'value' => array(
        6 => '6',
      ),
    ),
    3 => array(
      'title' => 'Presenting',
      'operator' => 'or',
      'value' => array(
        10 => '10',
      ),
    ),
    4 => array(
      'title' => 'Sustaining',
      'operator' => 'or',
      'value' => array(
        9 => '9',
      ),
    ),
    5 => array(
      'title' => 'Technology',
      'operator' => 'or',
      'value' => array(
        7 => '7',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_sponsor_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['vocabulary'] = 'sponsor_group';
  $handler->display->display_options['path'] = 'supportersView';

  /* Display: Featured Sponsors */
  $handler = $view->new_display('block', 'Featured Sponsors', 'block_1');

  /* Display: All Sponsors */
  $handler = $view->new_display('block', 'All Sponsors', 'block_2');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Sponsor Group (field_sponsor_group) */
  $handler->display->display_options['filters']['field_sponsor_group_tid']['id'] = 'field_sponsor_group_tid';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['table'] = 'field_data_field_sponsor_group';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['field'] = 'field_sponsor_group_tid';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sponsor_group_tid']['expose']['operator_id'] = 'field_sponsor_group_tid_op';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['expose']['label'] = 'Sponsor Group (field_sponsor_group)';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['expose']['operator'] = 'field_sponsor_group_tid_op';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['expose']['identifier'] = 'field_sponsor_group_tid';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_sponsor_group_tid']['group_info']['label'] = 'Sponsor Group (field_sponsor_group)';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['group_info']['identifier'] = 'field_sponsor_group_tid';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Community',
      'operator' => 'or',
      'value' => array(
        8 => '8',
      ),
    ),
    2 => array(
      'title' => 'Founding',
      'operator' => 'or',
      'value' => array(
        6 => '6',
      ),
    ),
    3 => array(
      'title' => 'Presenting',
      'operator' => 'or',
      'value' => array(
        10 => '10',
      ),
    ),
    4 => array(
      'title' => 'Sustaining',
      'operator' => 'or',
      'value' => array(
        9 => '9',
      ),
    ),
    5 => array(
      'title' => 'Technology',
      'operator' => 'or',
      'value' => array(
        7 => '7',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_sponsor_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_group_tid']['vocabulary'] = 'sponsor_group';

  /* Display: Highlighted Sponsor */
  $handler = $view->new_display('block', 'Highlighted Sponsor', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Highlighted Sponsor:';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'header text';
  $handler->display->display_options['header']['area']['content'] = '<h3>Highlighted Sponsor:</h3>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg_advanced';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sponsor Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'sponsor_logo_small',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Highlighted Sponsor (field_highlighted_sponsor) */
  $handler->display->display_options['filters']['field_highlighted_sponsor_value']['id'] = 'field_highlighted_sponsor_value';
  $handler->display->display_options['filters']['field_highlighted_sponsor_value']['table'] = 'field_data_field_highlighted_sponsor';
  $handler->display->display_options['filters']['field_highlighted_sponsor_value']['field'] = 'field_highlighted_sponsor_value';
  $handler->display->display_options['filters']['field_highlighted_sponsor_value']['value'] = array(
    1 => '1',
  );
  $translatables['sponsors'] = array(
    t('Master'),
    t('Sponsors'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('title'),
    t('<h3>Sponsors</h3>'),
    t('Filter Your Search'),
    t('Featured Sponsors'),
    t('All Sponsors'),
    t('Sponsor Group (field_sponsor_group)'),
    t('Highlighted Sponsor'),
    t('Highlighted Sponsor:'),
    t('header text'),
    t('<h3>Highlighted Sponsor:</h3>'),
  );
  $export['sponsors'] = $view;

  return $export;
}
