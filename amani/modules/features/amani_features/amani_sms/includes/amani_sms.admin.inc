<?php
/**
 * Contains administrative code for amani_sms.
 */

/**
 * Define our constants - taxonomy machine names.
 *
 * Some of these taxonomies are legacy (report_type, incident_severity) hence the specific machine names.
 */
define ('LOCATIONS_MACHINE_NAME', 'sms_location');
define ('FILTER_1_MACHINE_NAME', 'report_type');
define ('FILTER_2_MACHINE_NAME', 'incident_severity');
define ('FILTER_3_MACHINE_NAME', 'map_filter_3');
define ('FILTER_4_MACHINE_NAME', 'map_filter_4');

/**
 * Settings form callback.
 */
function amani_sms_settings_form() {
  $form = array();

  $form['amani_sms_intro'] = array(
    '#markup' => t('<p>The system will parse the first 7 words (a total of 8 positions)
                    and attempt to map them to their appropriate map record fields. All words following are
                    mapped to the map record\'s description field.</p>'),
  );
  // Secret fieldset and options.
  $form['amani_sms_secret'] = amani_sms_get_fs(
    t('SMS Secret'),
    t('Only messages providing the correct secret will be used to create records.')
  );
  $form['amani_sms_secret']['amani_sms_secret_value'] = array(
    '#type' => 'textfield',
    '#maxlength' => 20,
    '#default_value' => variable_get('amani_sms_secret_value', NULL),
    '#required' => TRUE,
  );
  // Date fieldset.
  $form['amani_sms_date'] = amani_sms_get_fs(
    t('Message position 1 - Date'),
    t('Format MMDDYYYY')
  );
  // Location fieldset and options.
  $form['amani_sms_location'] = amani_sms_get_fs(
    t('Message position 2 - Location'),
    t('These values can be configured ' . l('here.', 'admin/structure/taxonomy/' . LOCATIONS_MACHINE_NAME))
  );
  if ($location_terms = amani_sms_get_terms_as_options(LOCATIONS_MACHINE_NAME)) {
    amani_sms_add_terms_fields($form, $location_terms, 'amani_sms_location');
  }
  // Filter 1 fieldset and options.
  $form['amani_sms_filter_1'] = amani_sms_get_fs(
    t('Message position 3 - Map Filter #1'),
    t('These values can be configured ' . l('here.', 'admin/structure/taxonomy/' . FILTER_1_MACHINE_NAME))
  );
  if ($filter_1_terms = amani_sms_get_terms_as_options(FILTER_1_MACHINE_NAME)) {
    amani_sms_add_terms_fields($form, $filter_1_terms, 'amani_sms_filter_1');
  }
  // Filter 2 fieldset and options.
  $form['amani_sms_filter_2'] = amani_sms_get_fs(
    t('Message position 4 - Map Filter #2'),
    t('These values can be configured ' . l('here.', 'admin/structure/taxonomy/' . FILTER_2_MACHINE_NAME))
  );
  if ($filter_2_terms = amani_sms_get_terms_as_options(FILTER_2_MACHINE_NAME)) {
    amani_sms_add_terms_fields($form, $filter_2_terms, 'amani_sms_filter_2');
  }
  // Filter 3 fieldset and options.
  $form['amani_sms_filter_3'] = amani_sms_get_fs(
    t('Message position 5 - Map Filter #3'),
    t('These values can be configured ' . l('here.', 'admin/structure/taxonomy/' . FILTER_3_MACHINE_NAME))
  );
  if ($filter_3_terms = amani_sms_get_terms_as_options(FILTER_3_MACHINE_NAME)) {
    amani_sms_add_terms_fields($form, $filter_3_terms, 'amani_sms_filter_3');
  }
  // Filter 4 fieldset and options.
  $form['amani_sms_filter_4'] = amani_sms_get_fs(
    t('Message position 6 - Map Filter #4'),
    t('These values can be configured ' . l('here.', 'admin/structure/taxonomy/' . FILTER_4_MACHINE_NAME))
  );
  if ($filter_4_terms = amani_sms_get_terms_as_options(FILTER_4_MACHINE_NAME)) {
    amani_sms_add_terms_fields($form, $filter_4_terms, 'amani_sms_filter_4');
  }
  // Description fieldset.
  $form['amani_sms_description'] = amani_sms_get_fs(
    t('Message position 7 - Description'),
    t('Any tokens after this point will be mapped to the description field on the map record.')
  );

  return system_settings_form($form);
}

/**
 * Given a vocabulary machine name, get the associated terms.
 */
function amani_sms_get_terms_as_options($machine_name) {
  $terms = array();
  if (!$vocab = taxonomy_vocabulary_machine_name_load($machine_name)) { return $options; }
  // Load vocab terms, we'll only support one level deep.
  return taxonomy_get_tree($vocab->vid, 0, 1);
}

/**
 * Alter the form to add the necessary key value mappings from sms token to term, keys are tids.
 */
function amani_sms_add_terms_fields(&$form, $terms, $fieldset) {
  foreach($terms as $t) {
    $key = $fieldset . '_' . $t->tid;
    $form[$fieldset][$key] = array(
      '#type' => 'textfield',
      '#title' => t('Term <i>' . $t->name . '</i> maps to message value:'),
      '#maxlength' => 5,
      '#size' => 5,
      '#default_value' => variable_get($key, NULL),
      '#required' => TRUE,
    );
  }
}

/**
 * Get the default fieldset configuration.
 */
function amani_sms_get_fs($title, $description) {
  return array(
    '#type' => 'fieldset',
    '#title' => $title,
    '#description' => $description,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
}
