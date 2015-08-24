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
  $context->name = 'event_section_blocks';
  $context->description = '';
  $context->tag = 'Peace Geeks';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b1374145c0c4af521797fc335e522eed' => array(
          'module' => 'views',
          'delta' => 'b1374145c0c4af521797fc335e522eed',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-4e228403a00d4f1b782faf1e2864ccd2' => array(
          'module' => 'views',
          'delta' => '4e228403a00d4f1b782faf1e2864ccd2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-facts-quick_facts' => array(
          'module' => 'views',
          'delta' => 'facts-quick_facts',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-facts-peacegeeks_facts' => array(
          'module' => 'views',
          'delta' => 'facts-peacegeeks_facts',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
    'menu' => array(
      0 => 'main-menu:events',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Peace Geeks');
  $export['event_section_blocks'] = $context;

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
          'weight' => '-37',
        ),
        'views-peace_geeks_twitter-block' => array(
          'module' => 'views',
          'delta' => 'peace_geeks_twitter-block',
          'region' => 'content',
          'weight' => '-33',
        ),
        'views-911b0fc644370a0be38030742b102463' => array(
          'module' => 'views',
          'delta' => '911b0fc644370a0be38030742b102463',
          'region' => 'content',
          'weight' => '-29',
        ),
        'views-c0f4ed6dd4a249c1bb75d78bdf561906' => array(
          'module' => 'views',
          'delta' => 'c0f4ed6dd4a249c1bb75d78bdf561906',
          'region' => 'content',
          'weight' => '-27',
        ),
        'views-7bcee5f10c6daab67e35dd7f39038fba' => array(
          'module' => 'views',
          'delta' => '7bcee5f10c6daab67e35dd7f39038fba',
          'region' => 'content',
          'weight' => '-25',
        ),
        'views-037c9c33fc20851ba63e916400231c07' => array(
          'module' => 'views',
          'delta' => '037c9c33fc20851ba63e916400231c07',
          'region' => 'content',
          'weight' => '-23',
        ),
        'views-0f7076690bb8c1588a09a48dda55fffa' => array(
          'module' => 'views',
          'delta' => '0f7076690bb8c1588a09a48dda55fffa',
          'region' => 'content',
          'weight' => '-21',
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
