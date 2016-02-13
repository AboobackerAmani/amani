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
  $context->name = 'current_openings_active_menu';
  $context->description = '';
  $context->tag = 'Peace Geeks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'currentopenings' => 'currentopenings',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:node/360',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Peace Geeks');
  $export['current_openings_active_menu'] = $context;

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
    'breakpoint' => array(
      'values' => array(
        0 => 'custom.user.wide',
      ),
      'options' => array(
        'autoreload' => 1,
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
        'views-75e6a1c66268dd9908a6e8ba767c53ee' => array(
          'module' => 'views',
          'delta' => '75e6a1c66268dd9908a6e8ba767c53ee',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-peace_geeks_twitter-block' => array(
          'module' => 'views',
          'delta' => 'peace_geeks_twitter-block',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Peace Geeks');
  $export['front_page_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page_blocks_mobile';
  $context->description = '';
  $context->tag = 'Peace Geeks';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'custom.user.mobile',
      ),
      'options' => array(
        'autoreload' => 1,
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
        'views-75e6a1c66268dd9908a6e8ba767c53ee' => array(
          'module' => 'views',
          'delta' => '75e6a1c66268dd9908a6e8ba767c53ee',
          'region' => 'content',
          'weight' => '-76',
        ),
        'views-c0f4ed6dd4a249c1bb75d78bdf561906' => array(
          'module' => 'views',
          'delta' => 'c0f4ed6dd4a249c1bb75d78bdf561906',
          'region' => 'content',
          'weight' => '-75',
        ),
        'views-7bcee5f10c6daab67e35dd7f39038fba' => array(
          'module' => 'views',
          'delta' => '7bcee5f10c6daab67e35dd7f39038fba',
          'region' => 'content',
          'weight' => '-74',
        ),
        'views-911b0fc644370a0be38030742b102463' => array(
          'module' => 'views',
          'delta' => '911b0fc644370a0be38030742b102463',
          'region' => 'content',
          'weight' => '-73',
        ),
        'views-0f7076690bb8c1588a09a48dda55fffa' => array(
          'module' => 'views',
          'delta' => '0f7076690bb8c1588a09a48dda55fffa',
          'region' => 'content',
          'weight' => '-72',
        ),
        'views-037c9c33fc20851ba63e916400231c07' => array(
          'module' => 'views',
          'delta' => '037c9c33fc20851ba63e916400231c07',
          'region' => 'content',
          'weight' => '-71',
        ),
        'views-peace_geeks_twitter-block' => array(
          'module' => 'views',
          'delta' => 'peace_geeks_twitter-block',
          'region' => 'content',
          'weight' => '-70',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Peace Geeks');
  $export['front_page_blocks_mobile'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page_slideshow_mobile';
  $context->description = 'Front page slideshow for wide screen widths';
  $context->tag = 'Peace Geeks';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'custom.user.mobile',
      ),
      'options' => array(
        'autoreload' => 1,
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
        'views-de9567465c111516e3a12c8d73ef086e' => array(
          'module' => 'views',
          'delta' => 'de9567465c111516e3a12c8d73ef086e',
          'region' => 'banner',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page slideshow for wide screen widths');
  t('Peace Geeks');
  $export['front_page_slideshow_mobile'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page_slideshow_wide';
  $context->description = 'Front page slideshow for wide screen widths';
  $context->tag = 'Peace Geeks';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'custom.user.wide',
      ),
      'options' => array(
        'autoreload' => 1,
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
        'views-959b92b56b515750a8c433f5dc062db3' => array(
          'module' => 'views',
          'delta' => '959b92b56b515750a8c433f5dc062db3',
          'region' => 'banner',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page slideshow for wide screen widths');
  t('Peace Geeks');
  $export['front_page_slideshow_wide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_section_blocks';
  $context->description = '';
  $context->tag = 'Peace Geeks';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'news' => 'news',
        'news/*' => 'news/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3033038f735b30dc4c5f3e9635110e30' => array(
          'module' => 'views',
          'delta' => '3033038f735b30dc4c5f3e9635110e30',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-8cf3f1d837b1733a0219d8d51cf941a8' => array(
          'module' => 'views',
          'delta' => '8cf3f1d837b1733a0219d8d51cf941a8',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-7c3d9ae9cc402ea6c0237ed21e71c40d' => array(
          'module' => 'views',
          'delta' => '7c3d9ae9cc402ea6c0237ed21e71c40d',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
    'menu' => array(
      0 => 'menu-amani-main-menu:news-and-events',
      1 => 'main-menu:news',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Peace Geeks');
  $export['news_section_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'partner_banners_placement';
  $context->description = '';
  $context->tag = 'Peace Geeks';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'custom.user.wide',
      ),
      'options' => array(
        'autoreload' => 0,
      ),
    ),
    'node' => array(
      'values' => array(
        'project_partners' => 'project_partners',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-7be5f926a7c4bc78a69289b9129ae808' => array(
          'module' => 'views',
          'delta' => '7be5f926a7c4bc78a69289b9129ae808',
          'region' => 'banner',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Peace Geeks');
  $export['partner_banners_placement'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'partner_banners_placement_mobile';
  $context->description = '';
  $context->tag = 'Peace Geeks';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'custom.user.mobile',
      ),
      'options' => array(
        'autoreload' => 0,
      ),
    ),
    'node' => array(
      'values' => array(
        'project_partners' => 'project_partners',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-df975120470ab7adfe31ef5aa853e005' => array(
          'module' => 'views',
          'delta' => 'df975120470ab7adfe31ef5aa853e005',
          'region' => 'banner',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Peace Geeks');
  $export['partner_banners_placement_mobile'] = $context;

  return $export;
}
