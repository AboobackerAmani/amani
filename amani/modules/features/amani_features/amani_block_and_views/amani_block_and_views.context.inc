<?php
/**
 * @file
 * amani_block_and_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_block_and_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news-events';
  $context->description = '';
  $context->tag = 'news and events';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'news_and_events:page' => 'news_and_events:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4c4da4e1992914fbba4055fe6936fb91' => array(
          'module' => 'views',
          'delta' => '4c4da4e1992914fbba4055fe6936fb91',
          'region' => 'sidebar_second',
          'weight' => '-46',
        ),
        'views-calendar_of_events-block_3' => array(
          'module' => 'views',
          'delta' => 'calendar_of_events-block_3',
          'region' => 'sidebar_second',
          'weight' => '-45',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('news and events');
  $export['news-events'] = $context;

  return $export;
}
