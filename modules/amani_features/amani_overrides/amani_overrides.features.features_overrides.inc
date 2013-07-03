<?php
/**
 * @file
 * amani_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function amani_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.redhen_contact-general-field_additional_info.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_contact-general-field_address.field_config|settings|profile2_private"] = FALSE;
  $overrides["field.redhen_contact-general-field_address.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_contact-general-field_contact_type.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_contact-general-redhen_contact_email.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_org-general-field_additional_info.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_org-general-field_address.field_config|settings|profile2_private"] = FALSE;
  $overrides["field.redhen_org-general-field_address.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_org-general-field_org_type.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_org-general-field_website.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_affiliation-endpoints.field_instance|display|default|settings|view_modes"] = array(
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
  );
  $overrides["field.relation-redhen_affiliation-endpoints.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|0"] = 'Advisor';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|1"] = 'Board Member';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|2"] = 'Executive';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|3"] = 'Founder';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|4"] = 'Manager';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|5"] = 'Other';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|6"] = 'Staff';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|7"] = 'Volunteer';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_affiliation-redhen_relation_status.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_connection-endpoints.field_instance|display|default|settings|view_modes"] = array(
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
  );
  $overrides["field.relation-redhen_connection-endpoints.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_connection-redhen_relation_status.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: redhen_membership_type
  $overrides["redhen_membership_type.standard.data"] = NULL;
  $overrides["redhen_membership_type.standard.is_new"] = TRUE;
  $overrides["redhen_membership_type.standard.label"] = '';
  $overrides["redhen_membership_type.standard.locked"] = '0';
  $overrides["redhen_membership_type.standard.name"] = 'standard';
  $overrides["redhen_membership_type.standard.rdf_mapping"] = array();
  $overrides["redhen_membership_type.standard.role_id"] = '7';
  $overrides["redhen_membership_type.standard.weight"] = '0';

 return $overrides;
}
