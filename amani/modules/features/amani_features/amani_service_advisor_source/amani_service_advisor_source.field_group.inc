<?php
/**
 * @file
 * amani_service_advisor_source.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function amani_service_advisor_source_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_accessibility|node|service_source|form';
  $field_group->group_name = 'group_service_accessibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accessibility',
    'weight' => '4',
    'children' => array(
      0 => 'field_service_referral_required',
      1 => 'field_service_category',
      2 => 'field_available_to_nationality',
      3 => 'field_service_response_delay',
      4 => 'field_service_intake_criteria',
      5 => 'field_service_availability_day_a',
      6 => 'field_service_registration_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_service_accessibility|node|service_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_properties|node|service_source|form';
  $field_group->group_name = 'group_service_properties';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Properties',
    'weight' => '3',
    'children' => array(
      0 => 'field_service_id',
      1 => 'field_service_location_name',
      2 => 'field_service_partner_name',
      3 => 'field_serviceactivity_name',
      4 => 'field_service_start_date',
      5 => 'field_service_end_date',
      6 => 'field_service_indicators',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_service_properties|node|service_source|form'] = $field_group;

  return $export;
}
