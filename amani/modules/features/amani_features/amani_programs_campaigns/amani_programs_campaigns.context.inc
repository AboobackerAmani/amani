<?php
/**
 * @file
 * amani_programs_campaigns.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_programs_campaigns_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project-content-type';
  $context->description = 'When viewing an project (program/campaign), show contextual information.';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-activities-block' => array(
          'module' => 'views',
          'delta' => 'activities-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-programs_campaigns-block_1' => array(
          'module' => 'views',
          'delta' => 'programs_campaigns-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-testimonials-block' => array(
          'module' => 'views',
          'delta' => 'testimonials-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
    'breadcrumb' => 'programs',
    'menu' => 'programs',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  t('When viewing an project (program/campaign), show contextual information.');
  $export['project-content-type'] = $context;

  return $export;
}
