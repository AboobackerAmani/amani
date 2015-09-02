<?php
/**
 * @file
 * amani_incident_report.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_incident_report_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'add_map_record_button';
  $context->description = '';
  $context->tag = 'Context using variables';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'incident-map-button|1' => 'incident-map-button|1',
      ),
    ),
    'path' => array(
      'values' => array(
        'incident-reports' => 'incident-reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-amani-add-map-record' => array(
          'module' => 'bean',
          'delta' => 'amani-add-map-record',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context using variables');
  $export['add_map_record_button'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'incident_map';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'incident-reports' => 'incident-reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-incident_reports-latest' => array(
          'module' => 'views',
          'delta' => 'incident_reports-latest',
          'region' => 'sidebar_second',
          'weight' => '41',
        ),
      ),
    ),
    'breadcrumb' => array(
      0 => 'main-menu:resources',
    ),
  );
  $context->condition_mode = 0;
  $export['incident_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'incident_map_filter_1';
  $context->description = '';
  $context->tag = 'Context using variables';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'incident-map-filter-enabled-field_incident_report_type|1' => 'incident-map-filter-enabled-field_incident_report_type|1',
      ),
    ),
    'path' => array(
      'values' => array(
        'incident-reports' => 'incident-reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'incident_map-field_incident_report_type' => array(
          'module' => 'incident_map',
          'delta' => 'field_incident_report_type',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context using variables');
  $export['incident_map_filter_1'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'incident_map_filter_2';
  $context->description = '';
  $context->tag = 'Context using variables';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'incident-map-filter-enabled-field_incident_severity|1' => 'incident-map-filter-enabled-field_incident_severity|1',
      ),
    ),
    'path' => array(
      'values' => array(
        'incident-reports' => 'incident-reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'incident_map-field_incident_severity' => array(
          'module' => 'incident_map',
          'delta' => 'field_incident_severity',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context using variables');
  $export['incident_map_filter_2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'incident_map_filter_3';
  $context->description = '';
  $context->tag = 'Context using variables';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'incident-map-filter-enabled-field_map_filter_3|1' => 'incident-map-filter-enabled-field_map_filter_3|1',
      ),
    ),
    'path' => array(
      'values' => array(
        'incident-reports' => 'incident-reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'incident_map-field_map_filter_3' => array(
          'module' => 'incident_map',
          'delta' => 'field_map_filter_3',
          'region' => 'sidebar_second',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context using variables');
  $export['incident_map_filter_3'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'incident_map_filter_4';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'incident-map-filter-enabled-field_map_filter_4|1' => 'incident-map-filter-enabled-field_map_filter_4|1',
      ),
    ),
    'path' => array(
      'values' => array(
        'incident-reports' => 'incident-reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'incident_map-field_map_filter_4' => array(
          'module' => 'incident_map',
          'delta' => 'field_map_filter_4',
          'region' => 'sidebar_second',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['incident_map_filter_4'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'incident_map_timeline';
  $context->description = '';
  $context->tag = 'Context using variables';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'incident-map-filter-enabled-field_incident_date|1' => 'incident-map-filter-enabled-field_incident_date|1',
      ),
    ),
    'path' => array(
      'values' => array(
        'incident-reports' => 'incident-reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'incident_map-field_incident_date' => array(
          'module' => 'incident_map',
          'delta' => 'field_incident_date',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context using variables');
  $export['incident_map_timeline'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'incidentreport-content-type';
  $context->description = 'When viewing an incident report, show contextual information.';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'incident_report' => 'incident_report',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'incident-reports',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  t('When viewing an incident report, show contextual information.');
  $export['incidentreport-content-type'] = $context;

  return $export;
}
