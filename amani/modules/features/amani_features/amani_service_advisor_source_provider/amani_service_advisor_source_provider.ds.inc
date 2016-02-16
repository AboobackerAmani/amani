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
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'service_partners_services_with_t' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'service_partners_service_locatio' => array(
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
  $ds_field->field = 'service_partners_services_with_t';
  $ds_field->label = 'Service Partners: Services with Translations';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'service_partner|*';
  $ds_field->properties = array(
    'block' => 'views|8053fce43bea62d95543c51c0bd744d5',
    'block_render' => '1',
  );
  $export['service_partners_services_with_t'] = $ds_field;

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
    'block' => 'block|1',
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
        1 => 'field_service_location_service',
        2 => 'field_service_location_hour_open',
        3 => 'field_service_location_hour_clos',
        4 => 'field_service_location_days',
        5 => 'field_service_start_date',
        6 => 'field_service_end_date',
        7 => 'field_service_nationality',
        8 => 'field_service_location_region',
        9 => 'field_service_location_governor',
        10 => 'field_service_location_district',
        11 => 'field_service_availability',
        12 => 'field_service_coverage',
        13 => 'field_service_accessibility',
        14 => 'body',
      ),
      'right' => array(
        15 => 'field_service_location',
      ),
    ),
    'fields' => array(
      'og_group_ref' => 'left',
      'field_service_location_service' => 'left',
      'field_service_location_hour_open' => 'left',
      'field_service_location_hour_clos' => 'left',
      'field_service_location_days' => 'left',
      'field_service_start_date' => 'left',
      'field_service_end_date' => 'left',
      'field_service_nationality' => 'left',
      'field_service_location_region' => 'left',
      'field_service_location_governor' => 'left',
      'field_service_location_district' => 'left',
      'field_service_availability' => 'left',
      'field_service_coverage' => 'left',
      'field_service_accessibility' => 'left',
      'body' => 'left',
      'field_service_location' => 'right',
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
  $ds_layout->id = 'node|service_partner|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_partner';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'service_partners_services_with_t',
        1 => 'service_partners_service_locatio',
        2 => 'services_add_links',
      ),
      'right' => array(
        3 => 'field_logo',
        4 => 'field_service_partner_full_name',
        5 => 'field_service_partner_url',
      ),
    ),
    'fields' => array(
      'service_partners_services_with_t' => 'left',
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
