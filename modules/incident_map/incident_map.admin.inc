<?php

/**
 *
 */
function incident_map_settings() {
  $form = module_invoke_all('incident_map_settings');
  foreach ($form as &$fieldset) {
    $fieldset += array(
      '#type' => 'fieldset',
      '#collapsed' => TRUE,
      '#collapsible' => TRUE,
    );
  }
  return system_settings_form($form);
}

/**
 * Implements hook_incident_map_settings().
 */
function incident_map_incident_map_settings() {
  return array(
    // array('#title' => t('Filter settings'), 'filter_settings' => incident_map_filter_settings()),
    array('#title' => t('Marker settings'), 'marker_settings' => incident_map_marker_settings()),
  );
}

/**
 * Provides the filter settings form.
 */
function incident_map_filter_settings() {
  $items = array();

  $term_fields = incident_map_field_info('node', 'incident_report', array('taxonomy_term_reference', 'date'));

  return $items;
}

/**
 * Returns a list of field instances attached to a particular bundle. Can be
 * limited to only fields of a particular type.
 */
function incident_map_field_info($entity_type, $bundle, $field_types = array()) {
  $fields = field_info_instances($entity_type, $bundle);

  $labels = array_map(function ($field) use ($field_types) {
    $info = field_info_field($field['field_name']);
    $info['label'] = $field['label'];
    if (!empty($field_types)) {
      return in_array($info['type'], $field_types) ? $info : FALSE;
    }
    return $info;
  }, $fields);

  return array_filter(array_combine(array_keys($fields), $labels));
}

/**
 * Provides the marker settings form.
 */
function incident_map_marker_settings() {
  $colors = incident_map_get_marker_options();
  $items = array();

  $id = 'incident-map-color-default';
  $description = t("Select the default colour to use if an item doesn't have a value set.");
  $items[$id] = incident_map_setting_input_select(t('Default color'), $colors, variable_get($id, 'red'), $description);

  $term_fields = incident_map_field_info('node', 'incident_report', array('taxonomy_term_reference'));

  $marker_field = 'incident-map-marker-field';
  $items[$marker_field] = array(
    '#type' => 'select',
    '#title' => 'Marker type field',
    '#description' => t('Select the field you want to use to determine which marker will be used on the map.'),
    '#options' => array_map(function ($info) { return $info['label']; }, $term_fields),
  );

  foreach ($term_fields as $field_name => $field_info) {
    $colors = array('none' => 'Default') + $colors;
    $vocabulary = $field_info['settings']['allowed_values'][0]['vocabulary'];

    $fieldset = "taxonomy_term_reference-$field_name";
    $description = t("Set the marker colour and icon you want to use for each value below. Visit !link for a list of available icons (don't include the 'icon-' prefix).", array(
        '!link' => l('Font-Awesome', 'http://fortawesome.github.io/Font-Awesome/#icons-new'),
    ));
    $items[$fieldset] = array(
      '#type' => 'fieldset',
      '#title' => $field_info['label'],
      '#description' => $description,
      '#states' => array(
        'visible' => array(":input[name='$marker_field']" => array('value' => $field_name)),
      ),
    );

    $tids = incident_map_taxonomy_terms($vocabulary);
    foreach (entity_metadata_wrapper('list<taxonomy_term>', $tids) as $term) {
      $tid = $term->getIdentifier();
      $label = $term->label();

      $set = array(
        '#type' => 'fieldset',
        '#title' => "Value: $label",
        '#collapsed' => TRUE,
        '#collapsible' => TRUE,
      );
      $id = "incident-map-color-tid-$tid";
      $set[$id] = incident_map_setting_input_select("Colour", $colors, variable_get($id, ''));

      $id = "incident-map-icon-tid-$tid";
      $set[$id] = incident_map_setting_input_textfield("Icon", variable_get($id, ''));

      $items[$fieldset]["incident-map-tid-$tid"] = $set;
    }
  }

  return $items;
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
