<?php
/**
 * @file
 * peace_geeks_blocks_and_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function peace_geeks_blocks_and_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page_blocks';
  $context->description = '';
  $context->tag = 'Peace Geeks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-21f122deab21833dbaa8e9083f30a93f' => array(
          'module' => 'views',
          'delta' => '21f122deab21833dbaa8e9083f30a93f',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-tweets-block' => array(
          'module' => 'views',
          'delta' => 'tweets-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-911b0fc644370a0be38030742b102463' => array(
          'module' => 'views',
          'delta' => '911b0fc644370a0be38030742b102463',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-c0f4ed6dd4a249c1bb75d78bdf561906' => array(
          'module' => 'views',
          'delta' => 'c0f4ed6dd4a249c1bb75d78bdf561906',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-7bcee5f10c6daab67e35dd7f39038fba' => array(
          'module' => 'views',
          'delta' => '7bcee5f10c6daab67e35dd7f39038fba',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-037c9c33fc20851ba63e916400231c07' => array(
          'module' => 'views',
          'delta' => '037c9c33fc20851ba63e916400231c07',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-0f7076690bb8c1588a09a48dda55fffa' => array(
          'module' => 'views',
          'delta' => '0f7076690bb8c1588a09a48dda55fffa',
          'region' => 'content',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Peace Geeks');
  $export['front_page_blocks'] = $context;

  return $export;
}
