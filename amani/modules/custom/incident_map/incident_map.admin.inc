<?php
/**
 * TODO: This file is currently being included at the top of incident_map.module
 *       as some of the functions are required to be always available. Those
 *       functions should be identified and moved into the *.module file.
 */

/**
 * Invokes hook_incident_map_settings() to allow modules to provide settings for
 * the incident map.
 *
 * Returns a FAPI form array to be rendered on the admin page.
 */
function incident_map_settings() {
  $settings = module_invoke_all('incident_map_settings');
  $form = array();
  $form['#submit'][] = 'incident_map_settings_submit';
  foreach ($settings as $setting) {
    $form[] = $setting['form'] + array(
      '#type' => 'fieldset',
      '#collapsed' => TRUE,
      '#collapsible' => TRUE,
    );
  }
  return system_settings_form($form);
}

function incident_map_settings_submit($form, &$form_state) {
  $values = $form_state['values'];
  $title = $values['incident-map-map-record-title'];
  $path = array (
    'source' => 'incident-reports',
    'alias' => preg_replace('/\s/', '-', strtolower(trim($title))),
  );
  path_save($path);
  drupal_clear_path_cache('incident-reports');
}
/**
 * Implements hook_incident_map_settings().
 */
function incident_map_incident_map_settings() {
  $filter_prefix = 'incident-map-filter';
  $marker_prefix = 'incident-map-marker';
  $map_prefix = 'incident-map-map-settings';
  $map_record_prefix = 'incident-map-map-record';
  $button_prefix = 'incident-map-button';

  return array(
    'map_record' => array(
      'prefix' => $map_record_prefix,
      'form' => array(
        '#title' => t('Manage Map Record Title'),
        'map_record_settings' => incident_map_map_record_settings($map_record_prefix)
      ),
    ),
    'map' => array(
      'prefix' => $map_prefix,
      'form' => array(
        '#title' => t('Manage Amani Map Settings'),
        'map_settings' => incident_map_map_settings($map_prefix),
      ),
    ),
    'filter' => array(
      'prefix' => $filter_prefix,
      'form' => array(
        '#title' => t('Manage Amani Map Filters'),
        '#description' => t('Users can enable or disable three filters: Date of Report, Map Filter #1 and Map Filter #2, as well as customize the labels and manage filtering options for Map Filter #1 and Map Filter #2.'),
        'filter_settings' => incident_map_filter_settings($filter_prefix),
      ),
      'properties_callback' => 'incident_map_add_filters',
    ),
    'marker' => array(
      'prefix' => $marker_prefix,
      'form' => array(
        '#title' => t('Manage Amani Map Markers'),
        'marker_settings' => incident_map_marker_settings($marker_prefix),
      ),
      'properties_callback' => 'incident_map_add_markers',
    ),
    'add_button' => array(
      'prefix' => $button_prefix,
      'form' => array(
        '#title' => t('Manage Map Record Collection'),
        'button_settings' => incident_map_button_settings($button_prefix),
      ),
    ),
  );
}

/**
 * Provides the map button settings form.
 */
function incident_map_button_settings($button) {
  $items = array();
  $items[$button] = array(
    '#type' => 'checkbox',
    '#title' => t("Display the ‘Add Map Record’ button on the Map page and allow crowdsourced map record collection (i.e. ‘Anonymous Users’ are able to add map records)"),
    '#default_value' => variable_get($button, FALSE),
  );

  return $items;
}

/**
 * Provides the map settings form.
 */
function incident_map_map_record_settings($prefix) {
  $items = array();
  $title = "$prefix-title";
  $items[$title] = array(
    '#type' => 'textfield',
    '#title' => t("Map Title"),
    '#default_value' => variable_get($title, NULL),
    '#prefix' => '<div style="width: 30%; display: inline-block; vertical-align: top">',
    '#suffix' =>
    '<p>Changing this title will change your page title and settings from the default ‘Incident Record’ to reflect your map’s custom label. This includes:
      <ul style="margin-left:20px">
        <li>Your Map Page title (e.g. Map Record)</li>
        <li>Your Map Page default link (from ‘www.yourdomain.org/incident-record’ to www.yourdomain.com/map-record’)</li>
        <li>Your Map Page ‘Latest Incidents’ block label (to ‘Latest Map Record’)</li>
      </ul>
      Please only use letters, numbers and spaces.
     </p>
    </div>',
  );
  return $items;
}

/**
 * Provides the map settings form.
 */
function incident_map_map_settings($prefix) {
  $items = array();

  $items["$prefix-default-base-layer"] = array(
    '#type' => 'select',
    '#title' => t("Default map base layer"),
    '#options' => array('terrain' => 'Terrain', 'hybrid' => 'Hybrid', 'satellite' => 'Satellite', 'osm' => 'OSM'),
    '#default_value' => variable_get('incident-map-map-settings-default-base-layer', 'terrain'),
  );
  $auto = "$prefix-auto";
  $items[$auto] = array(
    '#type' => 'checkbox',
    '#title' => t("Fit map to features"),
    '#prefix' => '<div style="width: 30%; display: inline-block; vertical-align: top">',
    '#suffix' => '<p>Fit map to features (automatically set the viewport to include all features) Deselecting this box enables users to customize the map latitude, longitude and zoom</p></div>',
    '#default_value' => variable_get($auto, TRUE),
  );

  $id = "$prefix-lat";
  $title = t('Latitude');
  $items[$id] = incident_map_setting_input_textfield($title, variable_get($id, 0.0));
  $items[$id]['#states'] = array(
    'visible' => array(":input[name='$auto']" => array('checked' => FALSE)),
  );

  $id = "$prefix-lng";
  $title = t('Longtitude');
  $items[$id] = incident_map_setting_input_textfield($title, variable_get($id, 0.0));
  $items[$id]['#states'] = array(
    'visible' => array(":input[name='$auto']" => array('checked' => FALSE)),
  );

  $id = "$prefix-zoom";
  $title = t('Zoom');
  $range = range(1, 16);
  $options = array_combine($range, $range);
  $items[$id] = incident_map_setting_input_select($title, $options, 7);
  $items[$id]['#states'] = array(
    'visible' => array(":input[name='$auto']" => array('checked' => FALSE)),
  );
  return $items;
}

/**
 * Provides the filter settings form.
 */
function incident_map_filter_settings($prefix) {
  $items = array();
  $filterable_fields = array(
    'field_incident_report_type',
    'field_incident_severity',
    'field_filter_3',
    'field_filter_4',
  );

  $filters = incident_map_filters_by_field_type();

  $fields = incident_map_get_field_info('node', 'incident_report', array_keys($filters));
  foreach ($fields as $field_name => $field_info) {
    $set = array(
      '#type' => 'fieldset',
      '#title' => $field_info['label'],
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    if (in_array($field_name, $filterable_fields)) {
      $set['#description'] = t("Users can customize the labels for all filters, choose between a radio button (single select) or checkbox (multi-select) and set a default value for uncategorized records.");
    }

    $enabled = "$prefix-enabled-{$field_name}";
    $set[$enabled] = array('#type' => 'checkbox', '#title' => t('Enabled'), '#default_value' => variable_get($enabled, TRUE));

    $available = $filters[$field_info['type']];
    $names = array_map(function ($filter) { return $filter['name']; }, $available);
    $options = array_combine(array_keys($available), $names);

    $filter_type_id = "$prefix-$field_name";
    $description = t('Select the type of filter you want to use for this field.');
    $set[$filter_type_id] = incident_map_setting_input_select(t('Filter'), $options, variable_get($filter_type_id, null), $description);
    $set[$filter_type_id]['#states'] = array(
      'visible' => array(":input[name='$enabled']" => array('checked' => TRUE)),
    );

    foreach ($available as $type => $filter) {
      if (!empty($filter['options'])) {
        $options = array(
          '#type' => 'fieldset',
          '#title' => t('%name options', array('%name' => $filter['name'])),
          '#states' => array(
            'visible' => array(
              ":input[name='$enabled']" => array('checked' => TRUE),
              ":input[name='$filter_type_id']" => array('value' => $type),
            ),
          ),
        );
        foreach ($filter['options'] as $option => $element) {
          $id = "$prefix-$field_name-$type-$option";
          $element['#default_value'] = variable_get($id, $element['#default_value']);
          $options[$id] = $element;
        }
        $set["$prefix-$field_name-$type"] = $options;
      }
    }

    $items["filter-$field_name"] = $set;
  }

  return $items;
}

/**
 * Provides the marker settings form.
 */
function incident_map_marker_settings($prefix) {
  $colors = incident_map_get_marker_options();
  $items = array();

  $id = "$prefix-color-default";
  $description = t("Select the default colour to use if an item doesn't have a value set.");
  $items[$id] = incident_map_setting_input_select(t('Default color'), $colors, variable_get($id, 'red'), $description);

  $term_fields = incident_map_get_field_info('node', 'incident_report', array('taxonomy_term_reference'));

  $marker_field = "$prefix-field";
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
    $description = t("Users can set marker colours and can choose icons for each value below based on the !link icon set. Please note: user SHOULD NOT include the 'icon-' prefix.", array(
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
      $id = "$prefix-color-tid-$tid";
      $set[$id] = incident_map_setting_input_select("Colour", $colors, variable_get($id, ''));

      $id = "$prefix-icon-tid-$tid";
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
 * Returns array of available Leaflet.awesome-markers colours.
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
