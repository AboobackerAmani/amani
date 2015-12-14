<?php
/**
 * @file
 * amani_activity.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_activity_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'activity-content-type';
  $context->description = '';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'activity' => 'activity',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-activities-block_1' => array(
          'module' => 'views',
          'delta' => 'activities-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-programs_campaigns-block_2' => array(
          'module' => 'views',
          'delta' => 'programs_campaigns-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  $export['activity-content-type'] = $context;

  return $export;
}
