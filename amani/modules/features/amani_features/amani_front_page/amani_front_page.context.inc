<?php
/**
 * @file
 * amani_front_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_front_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'newsletter_button';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'amani_admin_newsletter_button_show|1' => 'amani_admin_newsletter_button_show|1',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-front-page-second-sidebar-bottom' => array(
          'module' => 'bean',
          'delta' => 'front-page-second-sidebar-bottom',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['newsletter_button'] = $context;

  return $export;
}
