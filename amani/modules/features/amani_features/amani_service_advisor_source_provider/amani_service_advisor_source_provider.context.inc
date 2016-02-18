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
  $context->name = 'admin_site_wide';
  $context->description = '';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide');
  $export['admin_site_wide'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'users';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-57cd2b20bfa85b655a0cee58327801a2' => array(
          'module' => 'views',
          'delta' => '57cd2b20bfa85b655a0cee58327801a2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-cb19055a72c56b23d58f3f5971226695' => array(
          'module' => 'views',
          'delta' => 'cb19055a72c56b23d58f3f5971226695',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['users'] = $context;

  return $export;
}
