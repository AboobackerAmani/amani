<?php
/**
 * @file
 * amani_incident_report.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amani_incident_report_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'incident_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Incident reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest incidents';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_incident_date']['id'] = 'field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['table'] = 'field_data_field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['field'] = 'field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['label'] = '';
  $handler->display->display_options['fields']['field_incident_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incident_date']['settings'] = array(
    'format_type' => 'event_day',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_incident_address']['id'] = 'field_incident_address';
  $handler->display->display_options['fields']['field_incident_address']['table'] = 'field_data_field_incident_address';
  $handler->display->display_options['fields']['field_incident_address']['field'] = 'field_incident_address';
  $handler->display->display_options['fields']['field_incident_address']['label'] = '';
  $handler->display->display_options['fields']['field_incident_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incident_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_incident_address']['type'] = 'amani_address_city';
  $handler->display->display_options['fields']['field_incident_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
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
    'incident_report' => 'incident_report',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Latest incidents */
  $handler = $view->new_display('block', 'Latest incidents', 'latest');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: All incidents */
  $handler = $view->new_display('page', 'All incidents', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'all-incidents';
  $translatables['incident_reports'] = array(
    t('Master'),
    t('Latest incidents'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All incidents'),
    t('<none>'),
  );
  $export['incident_reports'] = $view;

  $view = new view();
  $view->name = 'map_record_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Map Record Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map Record Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_incident_date' => 'field_incident_date',
    'field_incident_report_type' => 'field_incident_report_type',
    'field_incident_severity' => 'field_incident_severity',
    'field_map_filter_3' => 'field_map_filter_3',
    'field_map_filter_4' => 'field_map_filter_4',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incident_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incident_report_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incident_severity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_map_filter_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_map_filter_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Narrative';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_incident_date']['id'] = 'field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['table'] = 'field_data_field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['field'] = 'field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incident_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Map filter #1 */
  $handler->display->display_options['fields']['field_incident_report_type']['id'] = 'field_incident_report_type';
  $handler->display->display_options['fields']['field_incident_report_type']['table'] = 'field_data_field_incident_report_type';
  $handler->display->display_options['fields']['field_incident_report_type']['field'] = 'field_incident_report_type';
  $handler->display->display_options['fields']['field_incident_report_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incident_report_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Map filter #2 */
  $handler->display->display_options['fields']['field_incident_severity']['id'] = 'field_incident_severity';
  $handler->display->display_options['fields']['field_incident_severity']['table'] = 'field_data_field_incident_severity';
  $handler->display->display_options['fields']['field_incident_severity']['field'] = 'field_incident_severity';
  $handler->display->display_options['fields']['field_incident_severity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incident_severity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Map Filter #3 */
  $handler->display->display_options['fields']['field_map_filter_3']['id'] = 'field_map_filter_3';
  $handler->display->display_options['fields']['field_map_filter_3']['table'] = 'field_data_field_map_filter_3';
  $handler->display->display_options['fields']['field_map_filter_3']['field'] = 'field_map_filter_3';
  $handler->display->display_options['fields']['field_map_filter_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_filter_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Map Filter #4 */
  $handler->display->display_options['fields']['field_map_filter_4']['id'] = 'field_map_filter_4';
  $handler->display->display_options['fields']['field_map_filter_4']['table'] = 'field_data_field_map_filter_4';
  $handler->display->display_options['fields']['field_map_filter_4']['field'] = 'field_map_filter_4';
  $handler->display->display_options['fields']['field_map_filter_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'incident_report' => 'incident_report',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '0';
  $handler->display->display_options['filters']['status_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status_1']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status_1']['expose']['operator'] = 'status_1_op';
  $handler->display->display_options['filters']['status_1']['expose']['identifier'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Date (field_incident_date) */
  $handler->display->display_options['filters']['field_incident_date_value_1']['id'] = 'field_incident_date_value_1';
  $handler->display->display_options['filters']['field_incident_date_value_1']['table'] = 'field_data_field_incident_date';
  $handler->display->display_options['filters']['field_incident_date_value_1']['field'] = 'field_incident_date_value';
  $handler->display->display_options['filters']['field_incident_date_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_incident_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_incident_date_value_1']['expose']['operator_id'] = 'field_incident_date_value_1_op';
  $handler->display->display_options['filters']['field_incident_date_value_1']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_incident_date_value_1']['expose']['operator'] = 'field_incident_date_value_1_op';
  $handler->display->display_options['filters']['field_incident_date_value_1']['expose']['identifier'] = 'field_incident_date_value_1';
  $handler->display->display_options['filters']['field_incident_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'map-record-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'map_records.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['map_record_export'] = array(
    t('Master'),
    t('Map Record Export'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Narrative'),
    t('Date'),
    t('Map filter #1'),
    t('Map filter #2'),
    t('Map Filter #3'),
    t('Map Filter #4'),
    t('Published'),
    t('Page'),
    t('Data export'),
  );
  $export['map_record_export'] = $view;

  return $export;
}
