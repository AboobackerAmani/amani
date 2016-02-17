<?php
/**
 * @file
 * amani_service_advisor_source_provider.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function amani_service_advisor_source_provider_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_partner|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_partner';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'services_add_links' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'service_partners_service_locatio' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|service_partner|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function amani_service_advisor_source_provider_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'service_partners_service_locatio';
  $ds_field->label = 'Service Partners: Service Locations with Translations';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'service_partner|*';
  $ds_field->properties = array(
    'block' => 'views|ecdd3e3a5684bee9e40fbfd8db70e522',
    'block_render' => '1',
  );
  $export['service_partners_service_locatio'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'services_add_links';
  $ds_field->label = 'Service Partners: Add links';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'service_partner|*';
  $ds_field->properties = array(
    'block' => 'amani_service_advisor_source_provider|services_links',
    'block_render' => '2',
  );
  $export['services_add_links'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function amani_service_advisor_source_provider_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_location|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_location';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'og_group_ref',
        1 => 'field_service_category',
        2 => 'field_service_activity_details',
        3 => 'field_service_location_hour_open',
        4 => 'field_service_location_hour_clos',
        5 => 'field_service_location_days',
        6 => 'field_service_start_date',
        7 => 'field_service_end_date',
        8 => 'field_service_nationality',
        9 => 'field_service_availability',
        10 => 'field_service_coverage',
        11 => 'field_service_accessibility',
        12 => 'field_service_intake_criteria',
        13 => 'field_service_registration_type',
        14 => 'field_service_referral_method',
        15 => 'field_service_referral_next_step',
        16 => 'field_response_delay_after_refer',
        17 => 'field_service_feedback_mechanism',
        18 => 'field_service_feedback_delay',
      ),
      'right' => array(
        19 => 'field_service_location',
        20 => 'field_service_location_region',
        21 => 'field_service_location_governor',
        22 => 'field_service_location_district',
      ),
    ),
    'fields' => array(
      'og_group_ref' => 'left',
      'field_service_category' => 'left',
      'field_service_activity_details' => 'left',
      'field_service_location_hour_open' => 'left',
      'field_service_location_hour_clos' => 'left',
      'field_service_location_days' => 'left',
      'field_service_start_date' => 'left',
      'field_service_end_date' => 'left',
      'field_service_nationality' => 'left',
      'field_service_availability' => 'left',
      'field_service_coverage' => 'left',
      'field_service_accessibility' => 'left',
      'field_service_intake_criteria' => 'left',
      'field_service_registration_type' => 'left',
      'field_service_referral_method' => 'left',
      'field_service_referral_next_step' => 'left',
      'field_response_delay_after_refer' => 'left',
      'field_service_feedback_mechanism' => 'left',
      'field_service_feedback_delay' => 'left',
      'field_service_location' => 'right',
      'field_service_location_region' => 'right',
      'field_service_location_governor' => 'right',
      'field_service_location_district' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|service_location|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_location|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_location';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_service_category',
        2 => 'field_service_activity_details',
        3 => 'field_service_intake_criteria',
        6 => 'field_service_registration_type',
        8 => 'field_service_nationality',
        10 => 'group_service_location_office',
        12 => 'group_service_referral',
        13 => 'group_service_feedback',
        15 => 'field_service_availability',
        17 => 'field_service_location_days',
        19 => 'field_service_location_hour_open',
        20 => 'field_service_location_hour_clos',
        29 => 'field_referral_required_',
        30 => 'field_service_referral_method',
        31 => 'field_service_referral_next_step',
        32 => 'field_response_delay_after_refer',
        33 => 'field_service_feedback_mechanism',
        34 => 'field_service_feedback_delay',
      ),
      'right' => array(
        4 => 'field_service_location',
        5 => 'field_service_location_region',
        7 => 'field_service_location_governor',
        9 => 'field_service_location_district',
        11 => 'field_service_coverage',
        14 => 'field_service_accessibility',
        16 => 'language',
        18 => 'og_group_ref',
        21 => 'field_service_start_date',
        22 => 'field_service_end_date',
        23 => 'group_service_location_details',
        24 => 'field_service_more_info_link',
        25 => 'field_service_indicators',
        26 => 'field_service_comments',
        27 => 'path',
      ),
      'hidden' => array(
        28 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_service_category' => 'left',
      'field_service_activity_details' => 'left',
      'field_service_intake_criteria' => 'left',
      'field_service_location' => 'right',
      'field_service_location_region' => 'right',
      'field_service_registration_type' => 'left',
      'field_service_location_governor' => 'right',
      'field_service_nationality' => 'left',
      'field_service_location_district' => 'right',
      'group_service_location_office' => 'left',
      'field_service_coverage' => 'right',
      'group_service_referral' => 'left',
      'group_service_feedback' => 'left',
      'field_service_accessibility' => 'right',
      'field_service_availability' => 'left',
      'language' => 'right',
      'field_service_location_days' => 'left',
      'og_group_ref' => 'right',
      'field_service_location_hour_open' => 'left',
      'field_service_location_hour_clos' => 'left',
      'field_service_start_date' => 'right',
      'field_service_end_date' => 'right',
      'group_service_location_details' => 'right',
      'field_service_more_info_link' => 'right',
      'field_service_indicators' => 'right',
      'field_service_comments' => 'right',
      'path' => 'right',
      '_add_existing_field' => 'hidden',
      'field_referral_required_' => 'left',
      'field_service_referral_method' => 'left',
      'field_service_referral_next_step' => 'left',
      'field_response_delay_after_refer' => 'left',
      'field_service_feedback_mechanism' => 'left',
      'field_service_feedback_delay' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|service_location|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_partner|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_partner';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'service_partners_service_locatio',
        1 => 'services_add_links',
      ),
      'right' => array(
        2 => 'field_logo',
        3 => 'field_service_partner_full_name',
        4 => 'field_service_partner_url',
      ),
    ),
    'fields' => array(
      'service_partners_service_locatio' => 'left',
      'services_add_links' => 'left',
      'field_logo' => 'right',
      'field_service_partner_full_name' => 'right',
      'field_service_partner_url' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|service_partner|default'] = $ds_layout;

  return $export;
}
