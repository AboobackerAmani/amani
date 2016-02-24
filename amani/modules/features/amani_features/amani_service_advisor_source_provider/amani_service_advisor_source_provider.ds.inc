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
    'service_partners_service_locatio' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'services_add_links' => array(
      'weight' => '1',
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
        3 => 'field_service_start_date',
        4 => 'field_service_end_date',
        5 => 'field_service_location_hour_open',
        6 => 'field_service_location_hour_clos',
        7 => 'field_service_coverage',
        8 => 'field_service_accessibility',
        9 => 'field_service_intake_criteria',
        10 => 'field_service_registration_type',
        11 => 'field_service_availability',
        12 => 'field__service_location_days',
        13 => 'field_service_nationality',
        14 => 'field_service_referral_method',
        15 => 'field_service_referral_next_step',
        16 => 'field_response_delay_after_refer',
        17 => 'field_service_feedback_mechanism',
        18 => 'field_service_feedback_delay',
        21 => 'field_complaints_mechanism',
      ),
      'right' => array(
        19 => 'field_service_location_location',
        20 => 'field_location_address',
      ),
    ),
    'fields' => array(
      'og_group_ref' => 'left',
      'field_service_category' => 'left',
      'field_service_activity_details' => 'left',
      'field_service_start_date' => 'left',
      'field_service_end_date' => 'left',
      'field_service_location_hour_open' => 'left',
      'field_service_location_hour_clos' => 'left',
      'field_service_coverage' => 'left',
      'field_service_accessibility' => 'left',
      'field_service_intake_criteria' => 'left',
      'field_service_registration_type' => 'left',
      'field_service_availability' => 'left',
      'field__service_location_days' => 'left',
      'field_service_nationality' => 'left',
      'field_service_referral_method' => 'left',
      'field_service_referral_next_step' => 'left',
      'field_response_delay_after_refer' => 'left',
      'field_service_feedback_mechanism' => 'left',
      'field_service_feedback_delay' => 'left',
      'field_service_location_location' => 'right',
      'field_location_address' => 'right',
      'field_complaints_mechanism' => 'left',
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
        0 => 'group_general',
        1 => 'group_service_location_office',
        2 => 'og_group_ref',
        3 => 'group_service_referral',
        4 => 'field_service_category',
        5 => 'group_service_feedback',
        6 => 'title',
        7 => 'field_service_activity_details',
        15 => 'field_service_availability',
        16 => 'field__service_location_days',
        18 => 'field_service_location_hour_open',
        19 => 'field_service_location_hour_clos',
        20 => 'field_service_coverage',
        21 => 'field_service_accessibility',
        23 => 'field_service_registration_type',
        24 => 'field_service_nationality',
        25 => 'field_service_intake_criteria',
        26 => 'field_service_referral_method',
        27 => 'field_service_contact_name',
        28 => 'field_service_contact_phone',
        30 => 'field_service_contact_email',
        31 => 'field_service_referral_next_step',
        32 => 'field_response_delay_after_refer',
        33 => 'field_service_feedback_mechanism',
        34 => 'field_service_feedback_delay',
        37 => 'field_complaints_mechanism',
      ),
      'right' => array(
        8 => 'group_service_location_details',
        9 => 'group_additional',
        12 => 'field_service_start_date',
        13 => 'field_service_end_date',
        14 => 'field_service_comments',
        17 => 'field_service_more_info_link',
        22 => 'path',
        35 => 'field_location_address',
        36 => 'field_service_location_location',
      ),
      'hidden' => array(
        10 => 'field_service_location',
        11 => 'language',
        29 => 'redirect',
        38 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_general' => 'left',
      'group_service_location_office' => 'left',
      'og_group_ref' => 'left',
      'group_service_referral' => 'left',
      'field_service_category' => 'left',
      'group_service_feedback' => 'left',
      'title' => 'left',
      'field_service_activity_details' => 'left',
      'group_service_location_details' => 'right',
      'group_additional' => 'right',
      'field_service_location' => 'hidden',
      'language' => 'hidden',
      'field_service_start_date' => 'right',
      'field_service_end_date' => 'right',
      'field_service_comments' => 'right',
      'field_service_availability' => 'left',
      'field__service_location_days' => 'left',
      'field_service_more_info_link' => 'right',
      'field_service_location_hour_open' => 'left',
      'field_service_location_hour_clos' => 'left',
      'field_service_coverage' => 'left',
      'field_service_accessibility' => 'left',
      'path' => 'right',
      'field_service_registration_type' => 'left',
      'field_service_nationality' => 'left',
      'field_service_intake_criteria' => 'left',
      'field_service_referral_method' => 'left',
      'field_service_contact_name' => 'left',
      'field_service_contact_phone' => 'left',
      'redirect' => 'hidden',
      'field_service_contact_email' => 'left',
      'field_service_referral_next_step' => 'left',
      'field_response_delay_after_refer' => 'left',
      'field_service_feedback_mechanism' => 'left',
      'field_service_feedback_delay' => 'left',
      'field_location_address' => 'right',
      'field_service_location_location' => 'right',
      'field_complaints_mechanism' => 'left',
      '_add_existing_field' => 'hidden',
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
