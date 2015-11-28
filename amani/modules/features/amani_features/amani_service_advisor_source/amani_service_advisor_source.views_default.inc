<?php
/**
 * @file
 * amani_service_advisor_source.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amani_service_advisor_source_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'services_json_end_point';
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
  /* Field: Content: Service ID */
  $handler->display->display_options['fields']['field_service_id']['id'] = 'field_service_id';
  $handler->display->display_options['fields']['field_service_id']['table'] = 'field_data_field_service_id';
  $handler->display->display_options['fields']['field_service_id']['field'] = 'field_service_id';
  $handler->display->display_options['fields']['field_service_id']['label'] = 'id';
  $handler->display->display_options['fields']['field_service_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Service Location */
  $handler->display->display_options['fields']['field_service_location']['id'] = 'field_service_location';
  $handler->display->display_options['fields']['field_service_location']['table'] = 'field_data_field_service_location';
  $handler->display->display_options['fields']['field_service_location']['field'] = 'field_service_location';
  $handler->display->display_options['fields']['field_service_location']['label'] = 'geometry';
  $handler->display->display_options['fields']['field_service_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_service_location']['type'] = 'geofield_geojson';
  $handler->display->display_options['fields']['field_service_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Location Name */
  $handler->display->display_options['fields']['field_service_location_name']['id'] = 'field_service_location_name';
  $handler->display->display_options['fields']['field_service_location_name']['table'] = 'field_data_field_service_location_name';
  $handler->display->display_options['fields']['field_service_location_name']['field'] = 'field_service_location_name';
  $handler->display->display_options['fields']['field_service_location_name']['label'] = 'locationName';
  $handler->display->display_options['fields']['field_service_location_name']['type'] = 'text_plain';
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
  /* Field: Content: Service Category */
  $handler->display->display_options['fields']['field_service_category']['id'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['table'] = 'field_data_field_service_category';
  $handler->display->display_options['fields']['field_service_category']['field'] = 'field_service_category';
  $handler->display->display_options['fields']['field_service_category']['label'] = 'activityCategory';
  /* Field: Content: Activity Name */
  $handler->display->display_options['fields']['field_serviceactivity_name']['id'] = 'field_serviceactivity_name';
  $handler->display->display_options['fields']['field_serviceactivity_name']['table'] = 'field_data_field_serviceactivity_name';
  $handler->display->display_options['fields']['field_serviceactivity_name']['field'] = 'field_serviceactivity_name';
  $handler->display->display_options['fields']['field_serviceactivity_name']['label'] = 'activityName';
  /* Field: Content: Organization logo  */
  $handler->display->display_options['fields']['field_service_organization_logo_']['id'] = 'field_service_organization_logo_';
  $handler->display->display_options['fields']['field_service_organization_logo_']['table'] = 'field_data_field_service_organization_logo_';
  $handler->display->display_options['fields']['field_service_organization_logo_']['field'] = 'field_service_organization_logo_';
  $handler->display->display_options['fields']['field_service_organization_logo_']['label'] = 'partnerLogo ';
  $handler->display->display_options['fields']['field_service_organization_logo_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_service_organization_logo_']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Partner Name */
  $handler->display->display_options['fields']['field_service_partner_name']['id'] = 'field_service_partner_name';
  $handler->display->display_options['fields']['field_service_partner_name']['table'] = 'field_data_field_service_partner_name';
  $handler->display->display_options['fields']['field_service_partner_name']['field'] = 'field_service_partner_name';
  $handler->display->display_options['fields']['field_service_partner_name']['label'] = 'partnerName';
  /* Field: Content: Referral Required  */
  $handler->display->display_options['fields']['field_service_referral_required']['id'] = 'field_service_referral_required';
  $handler->display->display_options['fields']['field_service_referral_required']['table'] = 'field_data_field_service_referral_required';
  $handler->display->display_options['fields']['field_service_referral_required']['field'] = 'field_service_referral_required';
  $handler->display->display_options['fields']['field_service_referral_required']['label'] = 'Referral required';
  $handler->display->display_options['fields']['field_service_referral_required']['type'] = 'list_key';
  /* Field: Content: Service Registration type */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['label'] = 'Registration Type Requirement';
  $handler->display->display_options['fields']['field_service_registration_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_registration_type']['group_column'] = 'value';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  /* Field: Content: Service Indicators */
  $handler->display->display_options['fields']['field_service_indicators']['id'] = 'field_service_indicators';
  $handler->display->display_options['fields']['field_service_indicators']['table'] = 'field_data_field_service_indicators';
  $handler->display->display_options['fields']['field_service_indicators']['field'] = 'field_service_indicators';
  $handler->display->display_options['fields']['field_service_indicators']['label'] = 'indicators';
  /* Field: Content: More Info Link */
  $handler->display->display_options['fields']['field_service_more_info_link']['id'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['table'] = 'field_data_field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['field'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['label'] = 'sourceInfoLink';
  $handler->display->display_options['fields']['field_service_more_info_link']['click_sort_column'] = 'url';
  /* Field: Content: Service Response Delay */
  $handler->display->display_options['fields']['field_service_response_delay']['id'] = 'field_service_response_delay';
  $handler->display->display_options['fields']['field_service_response_delay']['table'] = 'field_data_field_service_response_delay';
  $handler->display->display_options['fields']['field_service_response_delay']['field'] = 'field_service_response_delay';
  $handler->display->display_options['fields']['field_service_response_delay']['label'] = 'Response delay after referrals';
  $handler->display->display_options['fields']['field_service_response_delay']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_response_delay']['group_column'] = 'value';
  /* Field: Content: Service Availability Day and Time */
  $handler->display->display_options['fields']['field_service_availability_day_a']['id'] = 'field_service_availability_day_a';
  $handler->display->display_options['fields']['field_service_availability_day_a']['table'] = 'field_data_field_service_availability_day_a';
  $handler->display->display_options['fields']['field_service_availability_day_a']['field'] = 'field_service_availability_day_a';
  $handler->display->display_options['fields']['field_service_availability_day_a']['label'] = 'Availability';
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_service_comments']['id'] = 'field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['table'] = 'field_data_field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['field'] = 'field_service_comments';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_source' => 'service_source',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'services-json';
  $translatables['services_json_end_point'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('id'),
    t('geometry'),
    t('locationName'),
    t('startDate'),
    t('endDate'),
    t('activityCategory'),
    t('activityName'),
    t('partnerLogo '),
    t('partnerName'),
    t('Referral required'),
    t('Registration Type Requirement'),
    t('indicators'),
    t('sourceInfoLink'),
    t('Response delay after referrals'),
    t('Availability'),
    t('Comments'),
    t('Page'),
  );
  $export['services_json_end_point'] = $view;

  return $export;
}
