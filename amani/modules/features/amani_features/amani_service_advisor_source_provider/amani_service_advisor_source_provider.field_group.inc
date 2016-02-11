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
      0 => 'field_service_intake_criteria',
      1 => 'field_service_registration_type',
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
  $field_group->identifier = 'group_service_feedback|node|service_source|form';
  $field_group->group_name = 'group_service_feedback';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feedback Information',
    'weight' => '19',
    'children' => array(
      0 => 'field_service_feedback_delay',
      1 => 'field_service_feedback_mechanism',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-service-feedback field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_service_feedback|node|service_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_location_details|node|service_location|form';
  $field_group->group_name = 'group_service_location_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location Details',
    'weight' => '10',
    'children' => array(
      0 => 'field_service_location',
      1 => 'field_service_location_region',
      2 => 'field_service_location_governor',
      3 => 'field_service_location_district',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-service-location-details field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_service_location_details|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_location_office|node|service_location|form';
  $field_group->group_name = 'group_service_location_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Office Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_service_location_days',
      1 => 'field_service_location_hour_clos',
      2 => 'field_service_location_hour_open',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-service-location-office field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_service_location_office|node|service_location|form'] = $field_group;

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
      0 => 'field_service_indicators',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_referral|node|service_source|form';
  $field_group->group_name = 'group_service_referral';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referral Information',
    'weight' => '18',
    'children' => array(
      0 => 'field_referral_required_',
      1 => 'field_referral_type_',
      2 => 'field_response_delay_after_refer',
      3 => 'field_service_referral_method',
      4 => 'field_service_referral_next_step',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-service-referral field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_service_referral|node|service_source|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accessibility');
  t('Feedback Information');
  t('Location Details');
  t('Office Information');
  t('Properties');
  t('Referral Information');

  return $field_groups;
}
