<?php
/**
 * @file
 * amani_news_events_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_news_events_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'twitter_feed';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-tweets-block_1' => array(
          'module' => 'views',
          'delta' => 'tweets-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['twitter_feed'] = $context;

  return $export;
}
