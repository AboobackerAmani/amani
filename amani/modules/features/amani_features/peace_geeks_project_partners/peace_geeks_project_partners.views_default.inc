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
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  $handler = $view->new_display('page', 'Page', 'all_projects_page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pastprojects';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Filter Your Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_project_tags_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg_advanced';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'fast';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_project_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View (Views field view) */
  $handler->display->display_options['header']['view_field']['id'] = 'view_field';
  $handler->display->display_options['header']['view_field']['table'] = 'views';
  $handler->display->display_options['header']['view_field']['field'] = 'view_field';
  $handler->display->display_options['header']['view_field']['label'] = '';
  $handler->display->display_options['header']['view_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['header']['view_field']['view'] = 'peace_geeks_projects';
  $handler->display->display_options['header']['view_field']['display'] = 'random_partner_quotes';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a id="apply-today-button" href="/generalapplication">Apply Today<span>and become a PeaceGeek</span></a><a id="faq-button" href="/faq">F.A.Q</a>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Project Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
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
  /* Field: Content: Project Tags */
  $handler->display->display_options['fields']['field_project_tags']['id'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['table'] = 'field_data_field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['field'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['label'] = '';
  $handler->display->display_options['fields']['field_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_tags']['multi_type'] = 'ol';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
  /* Filter criterion: Content: Project Tags (field_project_tags) */
  $handler->display->display_options['filters']['field_project_tags_tid']['id'] = 'field_project_tags_tid';
  $handler->display->display_options['filters']['field_project_tags_tid']['table'] = 'field_data_field_project_tags';
  $handler->display->display_options['filters']['field_project_tags_tid']['field'] = 'field_project_tags_tid';
  $handler->display->display_options['filters']['field_project_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_tags_tid']['expose']['operator_id'] = 'field_project_tags_tid_op';
  $handler->display->display_options['filters']['field_project_tags_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_project_tags_tid']['expose']['operator'] = 'field_project_tags_tid_op';
  $handler->display->display_options['filters']['field_project_tags_tid']['expose']['identifier'] = 'field_project_tags_tid';
  $handler->display->display_options['filters']['field_project_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_project_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_project_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'projectsOldTest';

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
  /* Field: Content: Our Impact */
  $handler->display->display_options['fields']['field_our_impact']['id'] = 'field_our_impact';
  $handler->display->display_options['fields']['field_our_impact']['table'] = 'field_data_field_our_impact';
  $handler->display->display_options['fields']['field_our_impact']['field'] = 'field_our_impact';
  $handler->display->display_options['fields']['field_our_impact']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_proj_partners_image']['id'] = 'field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['table'] = 'field_data_field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['field'] = 'field_proj_partners_image';
  $handler->display->display_options['fields']['field_proj_partners_image']['label'] = '';
  $handler->display->display_options['fields']['field_proj_partners_image']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['empty_zero'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Services Provided by PeaceGeeks';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['view'] = 'peace_geeks_projects';
  $handler->display->display_options['fields']['view_1']['display'] = 'projects_categories_list';
  $handler->display->display_options['fields']['view_1']['arguments'] = '!1 ';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Completed Projects';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'peace_geeks_projects';
  $handler->display->display_options['fields']['view']['display'] = 'block_2';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Field: Content: Testimonial Author */
  $handler->display->display_options['fields']['field_testimonial_author']['id'] = 'field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['table'] = 'field_data_field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['field'] = 'field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_testimonial_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_testimonial_author']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Testimonial */
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['id'] = 'field_proj_partners_testimonial';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['table'] = 'field_data_field_proj_partners_testimonial';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['field'] = 'field_proj_partners_testimonial';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['label'] = '';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['alter']['text'] = '[field_proj_partners_testimonial]
<div id="proj-testimonial-author">[field_testimonial_author]</div>';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['empty_zero'] = TRUE;
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
  /* Field: Content: Deliverables Summary */
  $handler->display->display_options['fields']['field_deliverables_summary']['id'] = 'field_deliverables_summary';
  $handler->display->display_options['fields']['field_deliverables_summary']['table'] = 'field_data_field_deliverables_summary';
  $handler->display->display_options['fields']['field_deliverables_summary']['field'] = 'field_deliverables_summary';
  $handler->display->display_options['fields']['field_deliverables_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deliverables_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_deliverables_summary']['empty_zero'] = TRUE;
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
  $handler->display->display_options['block_description'] = 'PG Project Partners Node Override';

  /* Display: PG Partners Node Banner */
  $handler = $view->new_display('block', 'PG Partners Node Banner', 'project_partners_banner_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Peace Geeks Project Partners';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_projects_reference_target_id']['id'] = 'field_projects_reference_target_id';
  $handler->display->display_options['relationships']['field_projects_reference_target_id']['table'] = 'field_data_field_projects_reference';
  $handler->display->display_options['relationships']['field_projects_reference_target_id']['field'] = 'field_projects_reference_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Partner One Liner */
  $handler->display->display_options['fields']['field_partner_one_liner']['id'] = 'field_partner_one_liner';
  $handler->display->display_options['fields']['field_partner_one_liner']['table'] = 'field_data_field_partner_one_liner';
  $handler->display->display_options['fields']['field_partner_one_liner']['field'] = 'field_partner_one_liner';
  $handler->display->display_options['fields']['field_partner_one_liner']['label'] = '';
  $handler->display->display_options['fields']['field_partner_one_liner']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="partner-profile-label">Partner Profile:</div><div id="parter-profile-name">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Image Attribution */
  $handler->display->display_options['fields']['field_image_attribution']['id'] = 'field_image_attribution';
  $handler->display->display_options['fields']['field_image_attribution']['table'] = 'field_data_field_image_attribution';
  $handler->display->display_options['fields']['field_image_attribution']['field'] = 'field_image_attribution';
  $handler->display->display_options['fields']['field_image_attribution']['label'] = '';
  $handler->display->display_options['fields']['field_image_attribution']['element_label_colon'] = FALSE;
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'banner_image',
    'image_link' => '',
  );
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
  /* Field: Content: How We Helped */
  $handler->display->display_options['fields']['field_how_we_helped']['id'] = 'field_how_we_helped';
  $handler->display->display_options['fields']['field_how_we_helped']['table'] = 'field_data_field_how_we_helped';
  $handler->display->display_options['fields']['field_how_we_helped']['field'] = 'field_how_we_helped';
  $handler->display->display_options['fields']['field_how_we_helped']['element_label_colon'] = FALSE;
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

  /* Display: Quotes Block */
  $handler = $view->new_display('block', 'Quotes Block', 'random_partner_quotes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Quotes Block';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Testimonial Author */
  $handler->display->display_options['fields']['field_testimonial_author']['id'] = 'field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['table'] = 'field_data_field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['field'] = 'field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_testimonial_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_testimonial_author']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Testimonial */
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['id'] = 'field_proj_partners_testimonial';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['table'] = 'field_data_field_proj_partners_testimonial';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['field'] = 'field_proj_partners_testimonial';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['label'] = '';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['alter']['text'] = '[field_proj_partners_testimonial]
<div id="proj-testimonial-author">[field_testimonial_author], [title]</div>';
  $handler->display->display_options['fields']['field_proj_partners_testimonial']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'here.';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="learn-more-partnership">Learn more about the partnership with [title] [view_node]</div>';
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
    'project_partners' => 'project_partners',
  );
  /* Filter criterion: Content: Testimonial (field_proj_partners_testimonial) */
  $handler->display->display_options['filters']['field_proj_partners_testimonial_value']['id'] = 'field_proj_partners_testimonial_value';
  $handler->display->display_options['filters']['field_proj_partners_testimonial_value']['table'] = 'field_data_field_proj_partners_testimonial';
  $handler->display->display_options['filters']['field_proj_partners_testimonial_value']['field'] = 'field_proj_partners_testimonial_value';
  $handler->display->display_options['filters']['field_proj_partners_testimonial_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'PG Random Partner Quotes Block';

  /* Display: Project By Type Block */
  $handler = $view->new_display('block', 'Project By Type Block', 'projects_by_type_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project By Type Block';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg_advanced';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>[field_project_type]</h3>
[description]';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'project_type' => 'project_type',
    'forums' => 0,
    'activity_status' => 0,
    'article_type' => 0,
    'categories' => 0,
    'event_type' => 0,
    'fact_type' => 0,
    'gallery_collections' => 0,
    'report_type' => 0,
    'incident_severity' => 0,
    'partner_type' => 0,
    'position_type' => 0,
    'project_location' => 0,
    'project_status' => 0,
    'theme' => 0,
    'resource_type' => 0,
    'sponsor_group' => 0,
    'stage' => 0,
    'tags' => 0,
    'team_member_type' => 0,
    'team_type' => 0,
    'contributor_type' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Project Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
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
  /* Field: Content: Project Tags */
  $handler->display->display_options['fields']['field_project_tags']['id'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['table'] = 'field_data_field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['field'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['label'] = '';
  $handler->display->display_options['fields']['field_project_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_tags']['multi_type'] = 'ol';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Content: Project Date */
  $handler->display->display_options['fields']['field_project_date']['id'] = 'field_project_date';
  $handler->display->display_options['fields']['field_project_date']['table'] = 'field_data_field_project_date';
  $handler->display->display_options['fields']['field_project_date']['field'] = 'field_project_date';
  $handler->display->display_options['fields']['field_project_date']['label'] = 'Completed';
  $handler->display->display_options['fields']['field_project_date']['settings'] = array(
    'format_type' => 'short_month_day_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Content: Project Completed? (field_project_status_binary) */
  $handler->display->display_options['filters']['field_project_status_binary_value']['id'] = 'field_project_status_binary_value';
  $handler->display->display_options['filters']['field_project_status_binary_value']['table'] = 'field_data_field_project_status_binary';
  $handler->display->display_options['filters']['field_project_status_binary_value']['field'] = 'field_project_status_binary_value';
  $handler->display->display_options['filters']['field_project_status_binary_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'PG Project By Type Block';

  /* Display: Projects on Partner Block - Completed */
  $handler = $view->new_display('block', 'Projects on Partner Block - Completed', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects on Partner Block - Completed';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg_advanced';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['id'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['field'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Project Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
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
  /* Field: Content: Project Tags */
  $handler->display->display_options['fields']['field_project_tags']['id'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['table'] = 'field_data_field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['field'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['label'] = '';
  $handler->display->display_options['fields']['field_project_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_tags']['multi_type'] = 'ol';
  /* Field: Content: Project Date */
  $handler->display->display_options['fields']['field_project_date']['id'] = 'field_project_date';
  $handler->display->display_options['fields']['field_project_date']['table'] = 'field_data_field_project_date';
  $handler->display->display_options['fields']['field_project_date']['field'] = 'field_project_date';
  $handler->display->display_options['fields']['field_project_date']['label'] = 'Completed';
  $handler->display->display_options['fields']['field_project_date']['settings'] = array(
    'format_type' => 'short_month_day_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
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
  /* Filter criterion: Content: Project Completed? (field_project_status_binary) */
  $handler->display->display_options['filters']['field_project_status_binary_value']['id'] = 'field_project_status_binary_value';
  $handler->display->display_options['filters']['field_project_status_binary_value']['table'] = 'field_data_field_project_status_binary';
  $handler->display->display_options['filters']['field_project_status_binary_value']['field'] = 'field_project_status_binary_value';
  $handler->display->display_options['filters']['field_project_status_binary_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'PG Projects on Partner Block - Completed';

  /* Display: Projects Categories List */
  $handler = $view->new_display('block', 'Projects Categories List', 'projects_categories_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Partner Projects Categories List';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg_advanced';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['id'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['field'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['label'] = '';
  $handler->display->display_options['fields']['field_project_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
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
  /* Filter criterion: Content: Project Completed? (field_project_status_binary) */
  $handler->display->display_options['filters']['field_project_status_binary_value']['id'] = 'field_project_status_binary_value';
  $handler->display->display_options['filters']['field_project_status_binary_value']['table'] = 'field_data_field_project_status_binary';
  $handler->display->display_options['filters']['field_project_status_binary_value']['field'] = 'field_project_status_binary_value';
  $handler->display->display_options['filters']['field_project_status_binary_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'PG Partner Projects Categories List';

  /* Display: All Projects Block */
  $handler = $view->new_display('block', 'All Projects Block', 'all_projects_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Projects Block';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Expand',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_project_date_value2' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => 'All Recent Years',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_proj_partners_location_country' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_project_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg_advanced';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '11';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['id'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_projects_reference_node']['field'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Project Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
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
  /* Field: Content: Project Tags */
  $handler->display->display_options['fields']['field_project_tags']['id'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['table'] = 'field_data_field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['field'] = 'field_project_tags';
  $handler->display->display_options['fields']['field_project_tags']['label'] = '';
  $handler->display->display_options['fields']['field_project_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_tags']['multi_type'] = 'ol';
  /* Field: Content: Project Date */
  $handler->display->display_options['fields']['field_project_date']['id'] = 'field_project_date';
  $handler->display->display_options['fields']['field_project_date']['table'] = 'field_data_field_project_date';
  $handler->display->display_options['fields']['field_project_date']['field'] = 'field_project_date';
  $handler->display->display_options['fields']['field_project_date']['label'] = 'Completed';
  $handler->display->display_options['fields']['field_project_date']['settings'] = array(
    'format_type' => 'short_month_day_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Date - end date (field_project_date:value2) */
  $handler->display->display_options['filters']['field_project_date_value2']['id'] = 'field_project_date_value2';
  $handler->display->display_options['filters']['field_project_date_value2']['table'] = 'field_data_field_project_date';
  $handler->display->display_options['filters']['field_project_date_value2']['field'] = 'field_project_date_value2';
  $handler->display->display_options['filters']['field_project_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_project_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_date_value2']['expose']['operator_id'] = 'field_project_date_value2_op';
  $handler->display->display_options['filters']['field_project_date_value2']['expose']['label'] = 'Project Year';
  $handler->display->display_options['filters']['field_project_date_value2']['expose']['operator'] = 'field_project_date_value2_op';
  $handler->display->display_options['filters']['field_project_date_value2']['expose']['identifier'] = 'field_project_date_value2';
  $handler->display->display_options['filters']['field_project_date_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_project_date_value2']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_project_date_value2']['year_range'] = '-5:+0';
  /* Filter criterion: Content: Location (field_proj_partners_location:country) */
  $handler->display->display_options['filters']['field_proj_partners_location_country']['id'] = 'field_proj_partners_location_country';
  $handler->display->display_options['filters']['field_proj_partners_location_country']['table'] = 'field_data_field_proj_partners_location';
  $handler->display->display_options['filters']['field_proj_partners_location_country']['field'] = 'field_proj_partners_location_country';
  $handler->display->display_options['filters']['field_proj_partners_location_country']['relationship'] = 'reverse_field_projects_reference_node';
  $handler->display->display_options['filters']['field_proj_partners_location_country']['value'] = array(
    'BI' => 'BI',
    'CM' => 'CM',
    'GA' => 'GA',
    'IN' => 'IN',
    'ID' => 'ID',
    'JO' => 'JO',
    'KE' => 'KE',
    'LR' => 'LR',
    'NP' => 'NP',
    'NG' => 'NG',
    'PS' => 'PS',
    'PH' => 'PH',
    'SL' => 'SL',
    'SS' => 'SS',
    'SD' => 'SD',
    'SY' => 'SY',
    'UG' => 'UG',
    'VU' => 'VU',
  );
  $handler->display->display_options['filters']['field_proj_partners_location_country']['group'] = 1;
  $handler->display->display_options['filters']['field_proj_partners_location_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proj_partners_location_country']['expose']['operator_id'] = 'field_proj_partners_location_country_op';
  $handler->display->display_options['filters']['field_proj_partners_location_country']['expose']['label'] = 'Partner Country';
  $handler->display->display_options['filters']['field_proj_partners_location_country']['expose']['operator'] = 'field_proj_partners_location_country_op';
  $handler->display->display_options['filters']['field_proj_partners_location_country']['expose']['identifier'] = 'field_proj_partners_location_country';
  $handler->display->display_options['filters']['field_proj_partners_location_country']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_proj_partners_location_country']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Project Type (field_project_type) */
  $handler->display->display_options['filters']['field_project_type_tid']['id'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['filters']['field_project_type_tid']['field'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_project_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['operator_id'] = 'field_project_type_tid_op';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['label'] = 'Project Service';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['operator'] = 'field_project_type_tid_op';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['identifier'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_project_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_type_tid']['vocabulary'] = 'project_type';
  $handler->display->display_options['block_description'] = 'PG All Projects Block';
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
    t('Page'),
    t('Filter Your Search'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Load more'),
    t('<a id="apply-today-button" href="/generalapplication">Apply Today<span>and become a PeaceGeek</span></a><a id="faq-button" href="/faq">F.A.Q</a>'),
    t('Project Type'),
    t('Theme'),
    t('Project Partners Node Override'),
    t('<a id="apply-today-button" href="/volunteer">Apply Today...</a><a id="donate-button" href="/donate">Donate</a>'),
    t('Crisis Overview'),
    t('What They Do'),
    t('Our Impact'),
    t('Services Provided by PeaceGeeks'),
    t('Completed Projects'),
    t('[field_proj_partners_testimonial]
<div id="proj-testimonial-author">[field_testimonial_author]</div>'),
    t('Deliverables Summary'),
    t('<h3>PeaceGeeks Contributors</h3>
[field_peacegeeks_contributions]'),
    t('<h3>[title] Contributors</h3>
[field_partner_contributions] '),
    t('All'),
    t('PG Project Partners Node Override'),
    t('PG Partners Node Banner'),
    t('Peace Geeks Project Partners'),
    t('Content entity referenced from field_projects_reference'),
    t('<div id="partner-profile-label">Partner Profile:</div><div id="parter-profile-name">[title]</div>'),
    t('PG Project Partners Banner Block'),
    t('PG Project Node Banner'),
    t('Peace Geeks Project'),
    t('Content referencing Content from field_projects_reference'),
    t('Project: [title]'),
    t('<h3>Basic Facts</h3>'),
    t('Project Partner'),
    t('Partner Location'),
    t('Project Lead'),
    t('Project Dates'),
    t('Visit website'),
    t('Find Out More About [title_1]'),
    t('PG Project Banner Block'),
    t('Project Node Override'),
    t('Project Problem'),
    t('How We Helped'),
    t('PG Project Node Override'),
    t('Quotes Block'),
    t('[field_proj_partners_testimonial]
<div id="proj-testimonial-author">[field_testimonial_author], [title]</div>'),
    t('here.'),
    t('<div id="learn-more-partnership">Learn more about the partnership with [title] [view_node]</div>'),
    t('PG Random Partner Quotes Block'),
    t('Project By Type Block'),
    t('<h3>[field_project_type]</h3>
[description]'),
    t('term'),
    t('Completed'),
    t('PG Project By Type Block'),
    t('Projects on Partner Block - Completed'),
    t('PG Projects on Partner Block - Completed'),
    t('Projects Categories List'),
    t('Partner Projects Categories List'),
    t('PG Partner Projects Categories List'),
    t('All Projects Block'),
    t('Expand'),
    t('All Recent Years'),
    t('Project Year'),
    t('Partner Country'),
    t('Project Service'),
    t('PG All Projects Block'),
  );
  $export['peace_geeks_projects'] = $view;

  return $export;
}
