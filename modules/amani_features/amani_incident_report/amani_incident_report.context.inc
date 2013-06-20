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
        'incident_map-field_incident_date' => array(
          'module' => 'incident_map',
          'delta' => 'field_incident_date',
          'region' => 'content',
          'weight' => '36',
        ),
        'incident_map-field_incident_report_type' => array(
          'module' => 'incident_map',
          'delta' => 'field_incident_report_type',
          'region' => 'sidebar_second',
          'weight' => '-37',
        ),
        'incident_map-field_incident_severity' => array(
          'module' => 'incident_map',
          'delta' => 'field_incident_severity',
          'region' => 'sidebar_second',
          'weight' => '-36',
        ),
        'views-incident_reports-latest' => array(
          'module' => 'views',
          'delta' => 'incident_reports-latest',
          'region' => 'content',
          'weight' => '-35',
        ),
        'bean-total-incidents' => array(
          'module' => 'bean',
          'delta' => 'total-incidents',
          'region' => 'map_region_3x',
          'weight' => '-10',
        ),
        'bean-total-incidents-this-year' => array(
          'module' => 'bean',
          'delta' => 'total-incidents-this-year',
          'region' => 'map_region_3x',
          'weight' => '-9',
        ),
        'bean-incidents-this-year' => array(
          'module' => 'bean',
          'delta' => 'incidents-this-year',
          'region' => 'map_region_3x',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['incident_map'] = $context;

  return $export;
}
