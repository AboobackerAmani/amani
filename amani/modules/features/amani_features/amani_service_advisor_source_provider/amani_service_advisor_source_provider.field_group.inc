<?php
/**
 * @file
 * amani_service_advisor_source_provider.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function amani_service_advisor_source_provider_field_group_info() {
  $field_groups = array();

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
    'weight' => '7',
    'children' => array(
      0 => 'field_service_response_delay',
      1 => 'field_service_intake_criteria',
      2 => 'field_service_availability_day_a',
      3 => 'field_service_registration_type',
      4 => 'field_service_available_to_natio',
      5 => 'field_referral_required_',
      6 => 'field_referral_type_',
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
  $field_groups['group_service_accessibility|node|service_source|form'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_service_location_name',
      1 => 'field_service_partner_name',
      2 => 'field_serviceactivity_name',
      3 => 'field_service_start_date',
      4 => 'field_service_end_date',
      5 => 'field_service_indicators',
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
  $field_groups['group_service_properties|node|service_source|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accessibility');
  t('Properties');

  return $field_groups;
}
