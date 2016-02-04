<?php
/**
 * @file
 * amani_service_advisor_source_provider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amani_service_advisor_source_provider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Json_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services JSON endPoint ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_service_location_name']['id'] = 'field_service_location_name';
  $handler->display->display_options['fields']['field_service_location_name']['table'] = 'field_data_field_service_location_name';
  $handler->display->display_options['fields']['field_service_location_name']['field'] = 'field_service_location_name';
  $handler->display->display_options['fields']['field_service_location_name']['label'] = 'region';
  /* Field: Content: Service Category */
  $handler->display->display_options['fields']['field_service_category']['id'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['table'] = 'field_data_field_service_category';
  $handler->display->display_options['fields']['field_service_category']['field'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['label'] = 'category:name';
  /* Field: Content: Service Sub Category */
  $handler->display->display_options['fields']['field_service_sub_category']['id'] = 'field_service_sub_category';
  $handler->display->display_options['fields']['field_service_sub_category']['table'] = 'field_data_field_service_sub_category';
  $handler->display->display_options['fields']['field_service_sub_category']['field'] = 'field_service_sub_category';
  $handler->display->display_options['fields']['field_service_sub_category']['label'] = 'category:subCategory';
  /* Field: Content: Partner Name */
  $handler->display->display_options['fields']['field_service_partner_name']['id'] = 'field_service_partner_name';
  $handler->display->display_options['fields']['field_service_partner_name']['table'] = 'field_data_field_service_partner_name';
  $handler->display->display_options['fields']['field_service_partner_name']['field'] = 'field_service_partner_name';
  $handler->display->display_options['fields']['field_service_partner_name']['label'] = 'organization:name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_service_organization_logo_']['id'] = 'field_service_organization_logo_';
  $handler->display->display_options['fields']['field_service_organization_logo_']['table'] = 'field_data_field_service_organization_logo_';
  $handler->display->display_options['fields']['field_service_organization_logo_']['field'] = 'field_service_organization_logo_';
  $handler->display->display_options['fields']['field_service_organization_logo_']['label'] = 'organization:imageUrl';
  /* Field: Content: Service Location */
  $handler->display->display_options['fields']['field_service_location']['id'] = 'field_service_location';
  $handler->display->display_options['fields']['field_service_location']['table'] = 'field_data_field_service_location';
  $handler->display->display_options['fields']['field_service_location']['field'] = 'field_service_location';
  $handler->display->display_options['fields']['field_service_location']['label'] = 'location:geometry';
  $handler->display->display_options['fields']['field_service_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_service_location']['type'] = 'geofield_geojson';
  $handler->display->display_options['fields']['field_service_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_service_start_date']['id'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['table'] = 'field_data_field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['field'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['label'] = 'startDate';
  $handler->display->display_options['fields']['field_service_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_service_end_date']['id'] = 'field_service_end_date';
  $handler->display->display_options['fields']['field_service_end_date']['table'] = 'field_data_field_service_end_date';
  $handler->display->display_options['fields']['field_service_end_date']['field'] = 'field_service_end_date';
  $handler->display->display_options['fields']['field_service_end_date']['label'] = 'endDate';
  $handler->display->display_options['fields']['field_service_end_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Activity Name */
  $handler->display->display_options['fields']['field_serviceactivity_name']['id'] = 'field_serviceactivity_name';
  $handler->display->display_options['fields']['field_serviceactivity_name']['table'] = 'field_data_field_serviceactivity_name';
  $handler->display->display_options['fields']['field_serviceactivity_name']['field'] = 'field_serviceactivity_name';
  $handler->display->display_options['fields']['field_serviceactivity_name']['label'] = 'activityName';
  /* Field: Content: Service Registration type */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['label'] = 'details:Registration Type Requirement';
  $handler->display->display_options['fields']['field_service_registration_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_registration_type']['group_column'] = 'value';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  /* Field: Content: Service Indicators */
  $handler->display->display_options['fields']['field_service_indicators']['id'] = 'field_service_indicators';
  $handler->display->display_options['fields']['field_service_indicators']['table'] = 'field_data_field_service_indicators';
  $handler->display->display_options['fields']['field_service_indicators']['field'] = 'field_service_indicators';
  $handler->display->display_options['fields']['field_service_indicators']['label'] = 'details:Indicators';
  /* Field: Content: More Info Link */
  $handler->display->display_options['fields']['field_service_more_info_link']['id'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['table'] = 'field_data_field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['field'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['label'] = 'details: More Info Link';
  $handler->display->display_options['fields']['field_service_more_info_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_more_info_link']['delta_offset'] = '0';
  /* Field: Content: Service Response Delay */
  $handler->display->display_options['fields']['field_service_response_delay']['id'] = 'field_service_response_delay';
  $handler->display->display_options['fields']['field_service_response_delay']['table'] = 'field_data_field_service_response_delay';
  $handler->display->display_options['fields']['field_service_response_delay']['field'] = 'field_service_response_delay';
  $handler->display->display_options['fields']['field_service_response_delay']['label'] = 'details:Response Delay After Referrals';
  $handler->display->display_options['fields']['field_service_response_delay']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_response_delay']['group_column'] = 'value';
  $handler->display->display_options['fields']['field_service_response_delay']['delta_offset'] = '0';
  /* Field: Content: Service Availability Day and Time */
  $handler->display->display_options['fields']['field_service_availability_day_a']['id'] = 'field_service_availability_day_a';
  $handler->display->display_options['fields']['field_service_availability_day_a']['table'] = 'field_data_field_service_availability_day_a';
  $handler->display->display_options['fields']['field_service_availability_day_a']['field'] = 'field_service_availability_day_a';
  $handler->display->display_options['fields']['field_service_availability_day_a']['label'] = 'details:Availability';
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_service_comments']['id'] = 'field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['table'] = 'field_data_field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['field'] = 'field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['label'] = 'details:Comments';
  /* Field: Content: Available to Nationality */
  $handler->display->display_options['fields']['field_service_available_to_natio']['id'] = 'field_service_available_to_natio';
  $handler->display->display_options['fields']['field_service_available_to_natio']['table'] = 'field_data_field_service_available_to_natio';
  $handler->display->display_options['fields']['field_service_available_to_natio']['field'] = 'field_service_available_to_natio';
  $handler->display->display_options['fields']['field_service_available_to_natio']['label'] = 'details:Nationality';
  $handler->display->display_options['fields']['field_service_available_to_natio']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_available_to_natio']['delta_offset'] = '0';
  /* Field: Content: Service Intake Criteria */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['label'] = 'details:Intake Criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  /* Field: Content: Referral Required  */
  $handler->display->display_options['fields']['field_referral_required_']['id'] = 'field_referral_required_';
  $handler->display->display_options['fields']['field_referral_required_']['table'] = 'field_data_field_referral_required_';
  $handler->display->display_options['fields']['field_referral_required_']['field'] = 'field_referral_required_';
  $handler->display->display_options['fields']['field_referral_required_']['label'] = 'referral:required ';
  /* Field: Content: Referral type  */
  $handler->display->display_options['fields']['field_referral_type_']['id'] = 'field_referral_type_';
  $handler->display->display_options['fields']['field_referral_type_']['table'] = 'field_data_field_referral_type_';
  $handler->display->display_options['fields']['field_referral_type_']['field'] = 'field_referral_type_';
  $handler->display->display_options['fields']['field_referral_type_']['label'] = 'referral:type ';
  /* Contextual filter: Content: Service language  (field_service_language_) */
  $handler->display->display_options['arguments']['field_service_language__tid']['id'] = 'field_service_language__tid';
  $handler->display->display_options['arguments']['field_service_language__tid']['table'] = 'field_data_field_service_language_';
  $handler->display->display_options['arguments']['field_service_language__tid']['field'] = 'field_service_language__tid';
  $handler->display->display_options['arguments']['field_service_language__tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_service_language__tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_service_language__tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_service_language__tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_service_language__tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_service_language__tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_service_language__tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_service_language__tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_service_language__tid']['validate_options']['vocabularies'] = array(
    'service_available_languages' => 'service_available_languages',
  );
  $handler->display->display_options['arguments']['field_service_language__tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_service_language__tid']['validate']['fail'] = 'ignore';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_source' => 'service_source',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'services-json/%';
  $translatables['Json_2'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('id'),
    t('region'),
    t('category:name'),
    t('category:subCategory'),
    t('organization:name'),
    t('organization:imageUrl'),
    t('location:geometry'),
    t('startDate'),
    t('endDate'),
    t('activityName'),
    t('details:Registration Type Requirement'),
    t('details:Indicators'),
    t('details: More Info Link'),
    t('details:Response Delay After Referrals'),
    t('details:Availability'),
    t('details:Comments'),
    t('details:Nationality'),
    t('details:Intake Criteria'),
    t('referral:required '),
    t('referral:type '),
    t('All'),
    t('Page'),
  );
  $export['Json_2'] = $view;

  return $export;
}
