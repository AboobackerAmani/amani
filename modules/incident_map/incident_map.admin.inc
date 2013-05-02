<?php

/**
 *
 */
function incident_map_settings() {
  $colors = incident_map_get_marker_options();
  $form = array();

  $id = 'incident-map-color-default';
  $description = "Select the default colour to use if an item doesn't have a value set.";
  $form[$id] = incident_map_setting_input_select(t('Default color'), $colors, variable_get($id, 'red'), $description);

  $fields = field_info_instances('node', 'incident_report');
  $labels = array_map(function ($field) {
    $info = field_info_field($field['field_name']);
    $info['label'] = $field['label'];
    return $info['type'] === 'taxonomy_term_reference' ? $info : FALSE;
  }, $fields);
  $term_fields = array_filter(array_combine(array_keys($fields), $labels));

  $marker_field = 'incident-map-marker-field';
  $form[$marker_field] = array(
    '#type' => 'select',
    '#title' => 'Marker type field',
    '#description' => 'Select the field you want to use to determine which marker will be used on the map.',
    '#options' => array_map(function ($info) { return $info['label']; }, $term_fields),
  );

  foreach ($term_fields as $field_name => $field_info) {
    $colors = array('none' => 'Default') + $colors;
    $vocabulary = $field_info['settings']['allowed_values'][0]['vocabulary'];

    $fieldset = "taxonomy_term_reference-$field_name";
    $form[$fieldset] = array(
      '#type' => 'fieldset',
      '#title' => $field_info['label'],
      '#description' => 'Set the marker colour and icon you want to use for each value below:',
      '#collapsed' => TRUE,
      '#collapsible' => TRUE,
      '#states' => array(
        'visible' => array(":input[name='$marker_field']" => array('value' => $field_name)),
      ),
    );

    $tids = incident_map_taxonomy_terms($vocabulary);
    foreach (entity_metadata_wrapper('list<taxonomy_term>', $tids) as $term) {
      $tid = $term->getIdentifier();
      $label = $term->label();

      $id = "incident-map-color-tid-$tid";
      $form[$fieldset][$id] = incident_map_setting_input_select("$label: color", $colors, variable_get($id, ''));

      $id = "incident-map-icon-tid-$tid";
      $form[$fieldset][$id] = incident_map_setting_input_textfield("$label: icon", variable_get($id, ''));
    }
  }

  return system_settings_form($form);
}

/**
 * Grab all taxonomy terms or just those belonging to a specific vocabulary.
 */
function incident_map_taxonomy_terms($vocabulary = NULL) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term');
  if ($vocabulary) $query->entityCondition('bundle', $vocabulary);
  $result = $query->execute();
  return empty($result['taxonomy_term']) ? array() : array_keys($result['taxonomy_term']);
}

/**
 * Create a FAPI select input.
 */
function incident_map_setting_input_select($label, $options, $default, $description = NULL) {
  $item = array(
    '#title' => $label,
    '#type' => 'select',
    '#options' => $options,
    '#default_value' => $default,
  );
  if ($description) $item['#description'] = $description;
  return $item;
}

/**
 * Create a FAPI textfield input.
 */
function incident_map_setting_input_textfield($label, $default, $description = NULL) {
  $item = array(
    '#title' => $label,
    '#type' => 'textfield',
    '#default_value' => $default,
  );
  if ($description) $item['#description'] = $description;
  return $item;
}

/**
 *
 */
function incident_map_get_marker_options() {
  $colours = array(
    'red',
    'darkred',
    'orange',
    'green',
    'darkgreen',
    'blue',
    'darkblue',
    'purple',
    'darkpurple',
    'cadetblue',
  );

  return array_combine($colours, array_map('ucfirst', $colours));
}
