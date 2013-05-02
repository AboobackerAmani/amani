<?php

function incident_map_settings() {
  $form = array();

  $fields = field_info_instances('node', 'incident_report');
  $labels = array_map(function ($field) {
    $info = field_info_field($field['field_name']);
    $info['label'] = $field['label'];
    return $info['type'] === 'taxonomy_term_reference' ? $info : FALSE;
  }, $fields);

  $term_fields = array_filter(array_combine(array_keys($fields), $labels));

  $form['incident-map-marker-field'] = array(
    '#type' => 'select',
    '#title' => 'Marker type field',
    '#description' => 'Select the field you want to use to determine which marker will be used on the map.',
    '#options' => array_map(function ($info) { return $info['label']; }, $term_fields),
  );

  foreach ($term_fields as $field_name => $field) {
    $vocabulary = $field['settings']['allowed_values'][0]['vocabulary'];

    $query = new EntityFieldQuery();
    $query
      ->entityCondition('entity_type', 'taxonomy_term')
      ->entityCondition('bundle', $vocabulary);
    $result = $query->execute();
    $tids = empty($result['taxonomy_term']) ? array() : array_keys($result['taxonomy_term']);
    $wrappers = entity_metadata_wrapper('list<taxonomy_term>', $tids);

    $fieldset = "taxonomy_term_reference-$field_name";
    $form[$fieldset] = array(
      '#type' => 'fieldset',
      '#title' => $field['label'],
      '#description' => 'Set the marker colour and icon you want to use for each value below:',
      '#collapsed' => TRUE,
      '#collapsible' => TRUE,
    );
    foreach ($wrappers as $wrapper) {
      $color = "incident-map-color-tid-{$wrapper->getIdentifier()}";
      $form[$fieldset][$color] = array(
        '#title' => "{$wrapper->label()}: Colour",
        '#type' => 'select',
        '#options' => incident_map_get_marker_options(),
        '#default_value' => variable_get($color, ''),
      );
      $icon = "incident-map-icon-tid-{$wrapper->getIdentifier()}";
      $form[$fieldset][$icon] = array(
        '#title' => "{$wrapper->label()}: Icon",
        '#type' => 'textfield',
        '#default_value' => variable_get($icon, ''),
      );
    }
  }

  return system_settings_form($form);
}

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
