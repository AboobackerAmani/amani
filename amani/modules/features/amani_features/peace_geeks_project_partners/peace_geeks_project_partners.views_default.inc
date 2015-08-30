<?php
/**
 * @file
 * peace_geeks_project_partners.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function peace_geeks_project_partners_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'peace_geeks_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Peace Geeks Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Peace Geeks Projects';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_proj_partners_image']['id'] = 'field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['table'] = 'field_data_field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['field'] = 'field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['label'] = '';
  $handler->display->display_options['fields']['field_proj_partners_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proj_partners_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_proj_partners_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['multi_type'] = 'ol';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'project_partners' => 'project_partners',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Peace Geeks Project Partners Cards';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_proj_partners_image']['id'] = 'field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['table'] = 'field_data_field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['field'] = 'field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['label'] = '';
  $handler->display->display_options['fields']['field_proj_partners_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proj_partners_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_proj_partners_image']['settings'] = array(
    'image_style' => 'project_card_image',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['multi_type'] = 'ol';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Display ranking (field_display_ranking) */
  $handler->display->display_options['sorts']['field_display_ranking_value']['id'] = 'field_display_ranking_value';
  $handler->display->display_options['sorts']['field_display_ranking_value']['table'] = 'field_data_field_display_ranking';
  $handler->display->display_options['sorts']['field_display_ranking_value']['field'] = 'field_display_ranking_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pastprojects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'fast';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a id="apply-today-button">Apply Today...</a><a id="donate-button">Donate</a>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
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
    'projects' => 'projects',
  );
  $handler->display->display_options['path'] = 'allprojects';

  /* Display: Project Partners Node Override */
  $handler = $view->new_display('block', 'Project Partners Node Override', 'project_partners_node_override');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Partners Node Override';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a id="apply-today-button" href="/volunteer">Apply Today...</a><a id="donate-button" href="/donate">Donate</a>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Crisis Overview */
  $handler->display->display_options['fields']['field_crisis_overview']['id'] = 'field_crisis_overview';
  $handler->display->display_options['fields']['field_crisis_overview']['table'] = 'field_data_field_crisis_overview';
  $handler->display->display_options['fields']['field_crisis_overview']['field'] = 'field_crisis_overview';
  $handler->display->display_options['fields']['field_crisis_overview']['element_label_colon'] = FALSE;
  /* Field: Content: What They Do */
  $handler->display->display_options['fields']['field_what_they_do']['id'] = 'field_what_they_do';
  $handler->display->display_options['fields']['field_what_they_do']['table'] = 'field_data_field_what_they_do';
  $handler->display->display_options['fields']['field_what_they_do']['field'] = 'field_what_they_do';
  $handler->display->display_options['fields']['field_what_they_do']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_proj_partners_image']['id'] = 'field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['table'] = 'field_data_field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['field'] = 'field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['label'] = '';
  $handler->display->display_options['fields']['field_proj_partners_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proj_partners_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_proj_partners_image']['settings'] = array(
    'image_style' => 'project_partners_page_image',
    'image_link' => '',
  );
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: PeaceGeeks Contributors */
  $handler->display->display_options['fields']['field_peacegeeks_contributions']['id'] = 'field_peacegeeks_contributions';
  $handler->display->display_options['fields']['field_peacegeeks_contributions']['table'] = 'field_data_field_peacegeeks_contributions';
  $handler->display->display_options['fields']['field_peacegeeks_contributions']['field'] = 'field_peacegeeks_contributions';
  $handler->display->display_options['fields']['field_peacegeeks_contributions']['label'] = '';
  $handler->display->display_options['fields']['field_peacegeeks_contributions']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_peacegeeks_contributions']['alter']['text'] = '<h3>PeaceGeeks Contributors</h3>
[field_peacegeeks_contributions]';
  $handler->display->display_options['fields']['field_peacegeeks_contributions']['element_label_colon'] = FALSE;
  /* Field: Content: Partner Contributors */
  $handler->display->display_options['fields']['field_partner_contributions']['id'] = 'field_partner_contributions';
  $handler->display->display_options['fields']['field_partner_contributions']['table'] = 'field_data_field_partner_contributions';
  $handler->display->display_options['fields']['field_partner_contributions']['field'] = 'field_partner_contributions';
  $handler->display->display_options['fields']['field_partner_contributions']['label'] = '';
  $handler->display->display_options['fields']['field_partner_contributions']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_partner_contributions']['alter']['text'] = '<h3>[title] Contributors</h3>
[field_partner_contributions] ';
  $handler->display->display_options['fields']['field_partner_contributions']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'PG Project Partners Node Override';

  /* Display: PG Partners Node Banner */
  $handler = $view->new_display('block', 'PG Partners Node Banner', 'project_partners_banner_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Peace Geeks Project Partners';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_projects_reference_target_id']['id'] = 'field_projects_reference_target_id';
  $handler->display->display_options['relationships']['field_projects_reference_target_id']['table'] = 'field_data_field_projects_reference';
  $handler->display->display_options['relationships']['field_projects_reference_target_id']['field'] = 'field_projects_reference_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Partner Profile: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Partner One Liner */
  $handler->display->display_options['fields']['field_partner_one_liner']['id'] = 'field_partner_one_liner';
  $handler->display->display_options['fields']['field_partner_one_liner']['table'] = 'field_data_field_partner_one_liner';
  $handler->display->display_options['fields']['field_partner_one_liner']['field'] = 'field_partner_one_liner';
  $handler->display->display_options['fields']['field_partner_one_liner']['label'] = '';
  $handler->display->display_options['fields']['field_partner_one_liner']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>Basic Facts</h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_proj_partners_location']['id'] = 'field_proj_partners_location';
  $handler->display->display_options['fields']['field_proj_partners_location']['table'] = 'field_data_field_proj_partners_location';
  $handler->display->display_options['fields']['field_proj_partners_location']['field'] = 'field_proj_partners_location';
  $handler->display->display_options['fields']['field_proj_partners_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_proj_partners_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Project Lead */
  $handler->display->display_options['fields']['field_project_lead']['id'] = 'field_project_lead';
  $handler->display->display_options['fields']['field_project_lead']['table'] = 'field_data_field_project_lead';
  $handler->display->display_options['fields']['field_project_lead']['field'] = 'field_project_lead';
  $handler->display->display_options['fields']['field_project_lead']['relationship'] = 'field_projects_reference_target_id';
  /* Field: Content: Partner Website */
  $handler->display->display_options['fields']['field_proj_partners_url']['id'] = 'field_proj_partners_url';
  $handler->display->display_options['fields']['field_proj_partners_url']['table'] = 'field_data_field_proj_partners_url';
  $handler->display->display_options['fields']['field_proj_partners_url']['field'] = 'field_proj_partners_url';
  $handler->display->display_options['fields']['field_proj_partners_url']['label'] = '';
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['text'] = 'Visit website';
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['path'] = '[field_proj_partners_url-url]';
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proj_partners_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_proj_partners_url']['type'] = 'link_plain';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['multi_type'] = 'ol';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'PG Project Partners Banner Block';

  /* Display: PG Project Node Banner */
  $handler = $view->new_display('block', 'PG Project Node Banner', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Peace Geeks Project';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['id'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['field'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Project: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Partner One Liner */
  $handler->display->display_options['fields']['field_partner_one_liner']['id'] = 'field_partner_one_liner';
  $handler->display->display_options['fields']['field_partner_one_liner']['table'] = 'field_data_field_partner_one_liner';
  $handler->display->display_options['fields']['field_partner_one_liner']['field'] = 'field_partner_one_liner';
  $handler->display->display_options['fields']['field_partner_one_liner']['relationship'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['fields']['field_partner_one_liner']['label'] = '';
  $handler->display->display_options['fields']['field_partner_one_liner']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>Basic Facts</h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project Partner';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_proj_partners_location']['id'] = 'field_proj_partners_location';
  $handler->display->display_options['fields']['field_proj_partners_location']['table'] = 'field_data_field_proj_partners_location';
  $handler->display->display_options['fields']['field_proj_partners_location']['field'] = 'field_proj_partners_location';
  $handler->display->display_options['fields']['field_proj_partners_location']['relationship'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['fields']['field_proj_partners_location']['label'] = 'Partner Location';
  $handler->display->display_options['fields']['field_proj_partners_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_proj_partners_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Project Lead */
  $handler->display->display_options['fields']['field_project_lead']['id'] = 'field_project_lead';
  $handler->display->display_options['fields']['field_project_lead']['table'] = 'field_data_field_project_lead';
  $handler->display->display_options['fields']['field_project_lead']['field'] = 'field_project_lead';
  $handler->display->display_options['fields']['field_project_lead']['relationship'] = 'field_projects_reference_target_id';
  /* Field: Content: Project Date */
  $handler->display->display_options['fields']['field_project_date']['id'] = 'field_project_date';
  $handler->display->display_options['fields']['field_project_date']['table'] = 'field_data_field_project_date';
  $handler->display->display_options['fields']['field_project_date']['field'] = 'field_project_date';
  $handler->display->display_options['fields']['field_project_date']['label'] = 'Project Dates';
  $handler->display->display_options['fields']['field_project_date']['settings'] = array(
    'format_type' => 'short_month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Partner Website */
  $handler->display->display_options['fields']['field_proj_partners_url']['id'] = 'field_proj_partners_url';
  $handler->display->display_options['fields']['field_proj_partners_url']['table'] = 'field_data_field_proj_partners_url';
  $handler->display->display_options['fields']['field_proj_partners_url']['field'] = 'field_proj_partners_url';
  $handler->display->display_options['fields']['field_proj_partners_url']['label'] = '';
  $handler->display->display_options['fields']['field_proj_partners_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['text'] = 'Visit website';
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['path'] = '[field_proj_partners_url-url]';
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proj_partners_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_proj_partners_url']['type'] = 'link_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'Find Out More About [title_1]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Find Out More About [title_1]';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['multi_type'] = 'ol';
  /* Field: Content: Project Tags */
  $handler->display->display_options['fields']['field_project_tags']['id'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['table'] = 'field_data_field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['field'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['label'] = '';
  $handler->display->display_options['fields']['field_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_tags']['multi_type'] = 'ol';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'projects' => 'projects',
  );
  $handler->display->display_options['block_description'] = 'PG Project Banner Block';

  /* Display: Project Node Override */
  $handler = $view->new_display('block', 'Project Node Override', 'project_node_override');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Node Override';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a id="apply-today-button" href="/volunteer">Apply Today...</a><a id="donate-button" href="/donate">Donate</a>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Project Problem';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Project Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'project_partners_page_image',
    'image_link' => '',
  );
  /* Field: Content: How We Helped */
  $handler->display->display_options['fields']['field_how_we_helped']['id'] = 'field_how_we_helped';
  $handler->display->display_options['fields']['field_how_we_helped']['table'] = 'field_data_field_how_we_helped';
  $handler->display->display_options['fields']['field_how_we_helped']['field'] = 'field_how_we_helped';
  $handler->display->display_options['fields']['field_how_we_helped']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'projects' => 'projects',
  );
  $handler->display->display_options['block_description'] = 'PG Project Node Override';
  $translatables['peace_geeks_projects'] = array(
    t('Master'),
    t('Peace Geeks Projects'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('Peace Geeks Project Partners Cards'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Load more'),
    t('Page'),
    t('<a id="apply-today-button">Apply Today...</a><a id="donate-button">Donate</a>'),
    t('Project Partners Node Override'),
    t('<a id="apply-today-button" href="/volunteer">Apply Today...</a><a id="donate-button" href="/donate">Donate</a>'),
    t('Crisis Overview'),
    t('What They Do'),
    t('<h3>PeaceGeeks Contributors</h3>
[field_peacegeeks_contributions]'),
    t('<h3>[title] Contributors</h3>
[field_partner_contributions] '),
    t('All'),
    t('PG Project Partners Node Override'),
    t('PG Partners Node Banner'),
    t('Peace Geeks Project Partners'),
    t('Content entity referenced from field_projects_reference'),
    t('Partner Profile: [title]'),
    t('<h3>Basic Facts</h3>'),
    t('Location'),
    t('Project Lead'),
    t('Visit website'),
    t('PG Project Partners Banner Block'),
    t('PG Project Node Banner'),
    t('Peace Geeks Project'),
    t('Content referencing Content from field_projects_reference'),
    t('Project: [title]'),
    t('Project Partner'),
    t('Partner Location'),
    t('Project Dates'),
    t('Find Out More About [title_1]'),
    t('PG Project Banner Block'),
    t('Project Node Override'),
    t('Project Problem'),
    t('How We Helped'),
    t('PG Project Node Override'),
  );
  $export['peace_geeks_projects'] = $view;

  return $export;
}
