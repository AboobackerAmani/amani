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
        'incident_map-timeline-filter' => array(
          'module' => 'incident_map',
          'delta' => 'timeline-filter',
          'region' => 'content',
          'weight' => '27',
        ),
        'incident_map-type-filter' => array(
          'module' => 'incident_map',
          'delta' => 'type-filter',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'incident_map-severity-filter' => array(
          'module' => 'incident_map',
          'delta' => 'severity-filter',
          'region' => 'sidebar_second',
          'weight' => '-23',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['incident_map'] = $context;

  return $export;
}
