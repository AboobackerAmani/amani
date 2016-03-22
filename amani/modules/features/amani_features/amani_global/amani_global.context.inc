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
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-donate' => array(
          'module' => 'bean',
          'delta' => 'donate',
          'region' => 'content',
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
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-configure-footer-links' => array(
          'module' => 'menu',
          'delta' => 'menu-configure-footer-links',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-social-media' => array(
          'module' => 'menu',
          'delta' => 'menu-social-media',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'bean-project-by-pg' => array(
          'module' => 'bean',
          'delta' => 'project-by-pg',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'bean-powered-by-amani' => array(
          'module' => 'bean',
          'delta' => 'powered-by-amani',
          'region' => 'footer',
          'weight' => '-6',
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
          'region' => 'subheader',
          'weight' => '-10',
        ),
        'views-front_page_blocks-block' => array(
          'module' => 'views',
          'delta' => 'front_page_blocks-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-front_page_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_blocks-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-front_page_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'front_page_blocks-block_2',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-front_page_tweets-block' => array(
          'module' => 'views',
          'delta' => 'front_page_tweets-block',
          'region' => 'content',
          'weight' => '-7',
        ),
        'fb_likebox-0' => array(
          'module' => 'fb_likebox',
          'delta' => '0',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-calendar_of_events-block_3' => array(
          'module' => 'views',
          'delta' => 'calendar_of_events-block_3',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-72a1db79709d2921e03b4173ca67a118' => array(
          'module' => 'views',
          'delta' => '72a1db79709d2921e03b4173ca67a118',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-news_and_events-block_1' => array(
          'module' => 'views',
          'delta' => 'news_and_events-block_1',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-news_and_events-block_2' => array(
          'module' => 'views',
          'delta' => 'news_and_events-block_2',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-news_and_events-block_3' => array(
          'module' => 'views',
          'delta' => 'news_and_events-block_3',
          'region' => 'content',
          'weight' => '-1',
        ),
        'views-news_and_events-block_4' => array(
          'module' => 'views',
          'delta' => 'news_and_events-block_4',
          'region' => 'content',
          'weight' => '0',
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
        'menu-menu-amani-main-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-amani-main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-9',
        ),
        'menu-menu-social-media' => array(
          'module' => 'menu',
          'delta' => 'menu-social-media',
          'region' => 'header',
          'weight' => '-8',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-7',
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
  $context->name = 'partners_carousel';
  $context->description = '';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-partners_carousel-block' => array(
          'module' => 'views',
          'delta' => 'partners_carousel-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  $export['partners_carousel'] = $context;

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
