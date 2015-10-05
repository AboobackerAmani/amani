<?php
/**
 * @file
 * amani_get_involved.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_get_involved_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'get_involved';
  $context->description = 'Blocks for get-involved page';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'get_involved:page' => 'get_involved:page',
      ),
    ),
  );
  $context->reactions = array(
    
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for get-involved page');
  $export['get_involved'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'programs';
  $context->description = '';
  $context->tag = 'Context using variables';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'amani_admin_get_involved_show|1' => 'amani_admin_get_involved_show|1',
      ),
    ),
    'views' => array(
      'values' => array(
        'programs_campaigns:page' => 'programs_campaigns:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-get_involved-block_2' => array(
          'module' => 'views',
          'delta' => 'get_involved-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'amani-admin-get-involved-activated',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context using variables');
  $export['programs'] = $context;

  return $export;
}
