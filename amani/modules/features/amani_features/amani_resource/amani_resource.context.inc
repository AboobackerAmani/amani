<?php
/**
 * @file
 * amani_resource.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_resource_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource-content-type';
  $context->description = 'When viewing a resource, show contextual information.';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'resources',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  t('When viewing a resource, show contextual information.');
  $export['resource-content-type'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_page';
  $context->description = '';
  $context->tag = 'resources';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'resources:page' => 'resources:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-resources-block_1' => array(
          'module' => 'views',
          'delta' => 'resources-block_1',
          'region' => 'content',
          'weight' => '-41',
        ),
        'views--exp-resources-page' => array(
          'module' => 'views',
          'delta' => '-exp-resources-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('resources');
  $export['resources_page'] = $context;

  return $export;
}
