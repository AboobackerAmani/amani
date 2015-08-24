<?php
/**
 * @file
 * peace_geeks_facts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function peace_geeks_facts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'facts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Facts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Facts';
  $handler->display->display_options['css_class'] = 'facts-block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Sort criterion: Content: Display ranking (field_display_ranking) */
  $handler->display->display_options['sorts']['field_display_ranking_value']['id'] = 'field_display_ranking_value';
  $handler->display->display_options['sorts']['field_display_ranking_value']['table'] = 'field_data_field_display_ranking';
  $handler->display->display_options['sorts']['field_display_ranking_value']['field'] = 'field_display_ranking_value';
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
    'fact' => 'fact',
  );
  /* Filter criterion: Content: Fact Type (field_fact_type) */
  $handler->display->display_options['filters']['field_fact_type_tid']['id'] = 'field_fact_type_tid';
  $handler->display->display_options['filters']['field_fact_type_tid']['table'] = 'field_data_field_fact_type';
  $handler->display->display_options['filters']['field_fact_type_tid']['field'] = 'field_fact_type_tid';
  $handler->display->display_options['filters']['field_fact_type_tid']['value'] = array(
    34 => '34',
  );
  $handler->display->display_options['filters']['field_fact_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_fact_type_tid']['vocabulary'] = 'fact_type';

  /* Display: Quick Facts */
  $handler = $view->new_display('block', 'Quick Facts', 'quick_facts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Quick Facts';
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
    'fact' => 'fact',
  );
  /* Filter criterion: Content: Fact Type (field_fact_type) */
  $handler->display->display_options['filters']['field_fact_type_tid']['id'] = 'field_fact_type_tid';
  $handler->display->display_options['filters']['field_fact_type_tid']['table'] = 'field_data_field_fact_type';
  $handler->display->display_options['filters']['field_fact_type_tid']['field'] = 'field_fact_type_tid';
  $handler->display->display_options['filters']['field_fact_type_tid']['value'] = array(
    33 => '33',
  );
  $handler->display->display_options['filters']['field_fact_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_fact_type_tid']['vocabulary'] = 'fact_type';

  /* Display: PeaceGeeks Facts */
  $handler = $view->new_display('block', 'PeaceGeeks Facts', 'peacegeeks_facts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PeaceGeeks Facts';
  $translatables['facts'] = array(
    t('Master'),
    t('Facts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Quick Facts'),
    t('PeaceGeeks Facts'),
  );
  $export['facts'] = $view;

  return $export;
}
