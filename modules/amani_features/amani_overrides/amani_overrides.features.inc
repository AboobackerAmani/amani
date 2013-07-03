<?php
/**
 * @file
 * amani_overrides.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function amani_overrides_field_default_fields_alter(&$data) {
  if (isset($data['redhen_contact-general-field_additional_info'])) {
    $data['redhen_contact-general-field_additional_info']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_contact-general-field_address'])) {
    $data['redhen_contact-general-field_address']['field_config']['settings']['profile2_private'] = FALSE; /* WAS: '' */
    $data['redhen_contact-general-field_address']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_contact-general-field_contact_type'])) {
    $data['redhen_contact-general-field_contact_type']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_contact-general-redhen_contact_email'])) {
    $data['redhen_contact-general-redhen_contact_email']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_org-general-field_additional_info'])) {
    $data['redhen_org-general-field_additional_info']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_org-general-field_address'])) {
    $data['redhen_org-general-field_address']['field_config']['settings']['profile2_private'] = FALSE; /* WAS: '' */
    $data['redhen_org-general-field_address']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_org-general-field_org_type'])) {
    $data['redhen_org-general-field_org_type']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_org-general-field_website'])) {
    $data['redhen_org-general-field_website']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_affiliation-endpoints'])) {
    $data['relation-redhen_affiliation-endpoints']['field_instance']['display']['default']['settings']['view_modes'] = array(
      'comment' => 'default',
      'file' => 'default',
      'message' => 'default',
      'message_type' => 'default',
      'message_type_category' => 'default',
      'node' => 'default',
      'profile2' => 'default',
      'profile2_type' => 'default',
      'redhen_contact' => 'default',
      'redhen_contact_type' => 'default',
      'redhen_engagement' => 'default',
      'redhen_engagement_score' => 'default',
      'redhen_membership' => 'default',
      'redhen_membership_type' => 'default',
      'redhen_note' => 'default',
      'redhen_org' => 'default',
      'redhen_org_type' => 'default',
      'relation' => 'default',
      'taxonomy_term' => 'default',
      'taxonomy_vocabulary' => 'default',
      'user' => 'default',
      'wysiwyg_profile' => 'default',
    ); /* WAS: '' */
    $data['relation-redhen_affiliation-endpoints']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_affiliation-redhen_relation_roles'])) {
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['0'] = 'Advisor'; /* WAS: 'Admin' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['1'] = 'Board Member'; /* WAS: 'Member' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['2'] = 'Executive'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['3'] = 'Founder'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['4'] = 'Manager'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['5'] = 'Other'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['6'] = 'Staff'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['7'] = 'Volunteer'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_affiliation-redhen_relation_status'])) {
    $data['relation-redhen_affiliation-redhen_relation_status']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_connection-endpoints'])) {
    $data['relation-redhen_connection-endpoints']['field_instance']['display']['default']['settings']['view_modes'] = array(
      'comment' => 'default',
      'file' => 'default',
      'message' => 'default',
      'message_type' => 'default',
      'message_type_category' => 'default',
      'node' => 'default',
      'profile2' => 'default',
      'profile2_type' => 'default',
      'redhen_contact' => 'default',
      'redhen_contact_type' => 'default',
      'redhen_engagement' => 'default',
      'redhen_engagement_score' => 'default',
      'redhen_membership' => 'default',
      'redhen_membership_type' => 'default',
      'redhen_note' => 'default',
      'redhen_org' => 'default',
      'redhen_org_type' => 'default',
      'relation' => 'default',
      'taxonomy_term' => 'default',
      'taxonomy_vocabulary' => 'default',
      'user' => 'default',
      'wysiwyg_profile' => 'default',
    ); /* WAS: '' */
    $data['relation-redhen_connection-endpoints']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_connection-redhen_relation_status'])) {
    $data['relation-redhen_connection-redhen_relation_status']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_redhen_membership_type_alter().
 */
function amani_overrides_default_redhen_membership_type_alter(&$data) {
  if (isset($data['standard'])) {
    $data['standard']->data = NULL; /* WAS: '' */
    $data['standard']->is_new = TRUE; /* WAS: '' */
    $data['standard']->label = ''; /* WAS: '' */
    $data['standard']->locked = '0'; /* WAS: '' */
    $data['standard']->name = 'standard'; /* WAS: '' */
    $data['standard']->rdf_mapping = array(); /* WAS: '' */
    $data['standard']->role_id = '7'; /* WAS: '' */
    $data['standard']->weight = '0'; /* WAS: '' */
  }
}
