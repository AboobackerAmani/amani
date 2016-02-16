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
    'node' => array(
      'values' => array(
        'service_partner' => 'service_partner',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When you are on a Service Partner');
  t('unhcr');
  $export['service_partners'] = $context;

  return $export;
}
