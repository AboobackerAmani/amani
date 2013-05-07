<?php
/**
 * @file
 * amani_event.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_event_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news-events';
  $context->description = '';
  $context->tag = 'news and events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'news_and_events:page' => 'news_and_events:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-calendar_of_events-list' => array(
          'module' => 'views',
          'delta' => 'calendar_of_events-list',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-calendar_of_events-calendar' => array(
          'module' => 'views',
          'delta' => 'calendar_of_events-calendar',
          'region' => 'sidebar_second',
          'weight' => '-9',
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
