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
  $field_group->identifier = 'group_additional|node|service_location|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_service_end_date',
      1 => 'field_service_start_date',
      2 => 'field_service_comments',
      3 => 'field_service_more_info_link',
      4 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_additional|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|service_location|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '0',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_service_category',
      2 => 'field_service_activity_details',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_general|node|service_location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_feedback|node|service_location|form';
  $field_group->group_name = 'group_service_feedback';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Next Steps & Feedback',
    'weight' => '4',
    'children' => array(
      0 => 'field_service_referral_next_step',
      1 => 'field_response_delay_after_refer',
      2 => 'field_service_feedback_mechanism',
      3 => 'field_service_feedback_delay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Next Steps & Feedback',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-service-feedback field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_service_feedback|node|service_location|form'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_service_location',
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
    'weight' => '1',
    'children' => array(
      0 => 'field_service_availability',
      1 => 'field__service_location_days',
      2 => 'field_service_location_hour_clos',
      3 => 'field_service_location_hour_open',
      4 => 'field_service_coverage',
      5 => 'field_service_accessibility',
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
  $field_group->identifier = 'group_service_referral|node|service_location|form';
  $field_group->group_name = 'group_service_referral';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registration and Referrals',
    'weight' => '3',
    'children' => array(
      0 => 'field_service_intake_criteria',
      1 => 'field_service_registration_type',
      2 => 'field_service_contact_name',
      3 => 'field_service_contact_phone',
      4 => 'field_service_contact_email',
      5 => 'field_service_nationality',
      6 => 'field_service_referral_method',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Registration and Referrals',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-service-referral field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_service_referral|node|service_location|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Information');
  t('General Information');
  t('Location Details');
  t('Next Steps & Feedback');
  t('Office Information');
  t('Registration and Referrals');

  return $field_groups;
}
