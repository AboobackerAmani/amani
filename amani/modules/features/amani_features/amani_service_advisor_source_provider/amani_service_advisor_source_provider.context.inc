<?php
/**
 * @file
 * amani_service_advisor_source_provider.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_service_advisor_source_provider_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'service_partners';
  $context->description = 'When you are on a Service Partner';
  $context->tag = 'unhcr';
  $context->conditions = array(
    'context_og_condition_member_role' => array(
      'values' => array(
        1 => 1,
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'node' => array(
      'values' => array(
        'service_partner' => 'service_partner',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-8053fce43bea62d95543c51c0bd744d5' => array(
          'module' => 'views',
          'delta' => '8053fce43bea62d95543c51c0bd744d5',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-ecdd3e3a5684bee9e40fbfd8db70e522' => array(
          'module' => 'views',
          'delta' => 'ecdd3e3a5684bee9e40fbfd8db70e522',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When you are on a Service Partner');
  t('unhcr');
  $export['service_partners'] = $context;

  return $export;
}
