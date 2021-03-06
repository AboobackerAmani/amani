<?php
/**
 * @file
 * amani_global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_admin';
  $context->description = '';
  $context->tag = 'admin';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'amani/content-admin' => 'amani/content-admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-amani-admin-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-amani-admin-menu',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'amani_global-add_content_links' => array(
          'module' => 'amani_global',
          'delta' => 'add_content_links',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
    'context_metadata' => array(
      'metadata_title' => 'Search and Manage Content',
      'metadata_description' => '',
      'metadata_keywords' => '',
      'metadata_canonical' => '',
      'metadata_h1' => 'Search and Manage Content',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('admin');
  $export['content_admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'donation-region';
  $context->description = '';
  $context->tag = 'donation';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-donate' => array(
          'module' => 'menu',
          'delta' => 'menu-donate',
          'region' => 'donation_region',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('donation');
  $export['donation-region'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer';
  $context->description = 'sitewide footer blocks';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-amani-powered-by' => array(
          'module' => 'bean',
          'delta' => 'amani-powered-by',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-amani-main-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-amani-main-menu',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'menu-menu-meta' => array(
          'module' => 'menu',
          'delta' => 'menu-meta',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer',
          'weight' => '-6',
        ),
        'bean-amani-special-thanks' => array(
          'module' => 'bean',
          'delta' => 'amani-special-thanks',
          'region' => 'footer',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  t('sitewide footer blocks');
  $export['footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'front page ';
  $context->tag = 'front';
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
        'views-front_page_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'front_page_slideshow-block',
          'region' => 'home_content_top_rotator',
          'weight' => '-10',
        ),
        'views-front_page_blocks-block' => array(
          'module' => 'views',
          'delta' => 'front_page_blocks-block',
          'region' => 'home_content_top_static_region',
          'weight' => '-10',
        ),
        'views-front_page_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_blocks-block_1',
          'region' => 'home_content_top_static_region',
          'weight' => '-9',
        ),
        'views-front_page_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'front_page_blocks-block_2',
          'region' => 'home_content_top_static_region',
          'weight' => '-8',
        ),
        'views-news_and_events-block_1' => array(
          'module' => 'views',
          'delta' => 'news_and_events-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-calendar_of_events-list' => array(
          'module' => 'views',
          'delta' => 'calendar_of_events-list',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('front');
  t('front page ');
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header';
  $context->description = 'sitewide header blocks';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-41',
        ),
        'menu-menu-meta' => array(
          'module' => 'menu',
          'delta' => 'menu-meta',
          'region' => 'header',
          'weight' => '-40',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-39',
        ),
        'menu-menu-social-media' => array(
          'module' => 'menu',
          'delta' => 'menu-social-media',
          'region' => 'header',
          'weight' => '-38',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'navigation_region',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  t('sitewide header blocks');
  $export['header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_contact_form';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'amani_global-site_contact_info' => array(
          'module' => 'amani_global',
          'delta' => 'site_contact_info',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['site_contact_form'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'upcoming_events';
  $context->description = '';
  $context->tag = 'Context using variables';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'amani_admin_events_show|1' => 'amani_admin_events_show|1',
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
        'views-calendar_of_events-calendar' => array(
          'module' => 'views',
          'delta' => 'calendar_of_events-calendar',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context using variables');
  $export['upcoming_events'] = $context;

  return $export;
}
