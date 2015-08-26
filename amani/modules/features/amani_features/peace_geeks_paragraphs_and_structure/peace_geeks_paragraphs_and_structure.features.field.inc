<?php
/**
 * @file
 * peace_geeks_paragraphs_and_structure.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function peace_geeks_paragraphs_and_structure_field_default_fields() {
  $fields = array();

  // Exported field: 'node-structure-field_paragraphs'.
  $fields['node-structure-field_paragraphs'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_paragraphs',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'paragraphs',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'paragraphs',
    ),
    'field_instance' => array(
      'bundle' => 'structure',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'paragraphs',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'type' => 'paragraphs_view',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_paragraphs',
      'label' => 'Paragraphs',
      'required' => 0,
      'settings' => array(
        'add_mode' => 'select',
        'allowed_bundles' => array(
          'light_grey_text_box' => -1,
          'link_block_blue' => -1,
          'link_block_grey' => -1,
          'paragraph_text_with_header_text' => -1,
          'structure_header_text' => -1,
        ),
        'bundle_weights' => array(
          'light_grey_text_box' => '2',
          'link_block_blue' => '-10',
          'link_block_grey' => '-10',
          'paragraph_text_with_header_text' => '8',
          'structure_header_text' => '5',
        ),
        'default_edit_mode' => 'open',
        'title' => 'Paragraph',
        'title_multiple' => 'Paragraphs',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'paragraphs',
        'settings' => array(),
        'type' => 'paragraphs_embed',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-add_a_view-field_add_view'.
  $fields['paragraphs_item-add_a_view-field_add_view'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_add_view',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'viewfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'viewfield',
    ),
    'field_instance' => array(
      'bundle' => 'add_a_view',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'viewfield',
          'settings' => array(),
          'type' => 'viewfield_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_add_view',
      'label' => 'Add View',
      'required' => 0,
      'settings' => array(
        'allowed_views' => array(
          'about_page' => 0,
          'activities' => 'activities',
          'admin_views_comment' => 0,
          'admin_views_node' => 0,
          'admin_views_user' => 0,
          'advanced_forum_active_topics' => 0,
          'advanced_forum_new_topics' => 0,
          'advanced_forum_search' => 0,
          'advanced_forum_topic_list' => 0,
          'advanced_forum_unanswered_topics' => 0,
          'article_rss_feed_' => 0,
          'calendar_of_events' => 0,
          'comments' => 0,
          'content_admin' => 0,
          'facts' => 0,
          'front_page_blocks' => 0,
          'front_page_slideshow' => 0,
          'front_page_tweets' => 0,
          'get_involved' => 0,
          'incident_reports' => 0,
          'media_default' => 0,
          'news_and_events' => 'news_and_events',
          'news_and_events_blog' => 0,
          'partners' => 0,
          'partners_carousel' => 0,
          'peace_geeks_front_page_blocks' => 0,
          'peace_geeks_front_page_slideshow' => 0,
          'peace_geeks_front_page_tweets' => 0,
          'peace_geeks_news_and_events' => 'peace_geeks_news_and_events',
          'peace_geeks_opportunities' => 'peace_geeks_opportunities',
          'peace_geeks_projects' => 'peace_geeks_projects',
          'peace_geeks_resources' => 'peace_geeks_resources',
          'peace_geeks_taxonomies' => 0,
          'peace_geeks_team' => 'peace_geeks_team',
          'peace_geeks_twitter' => 0,
          'programs_campaigns' => 0,
          'resources' => 0,
          'sponsors' => 0,
          'supporters' => 'supporters',
          'testimonials' => 'testimonials',
          'tweets' => 0,
          'webform_analysis' => 0,
          'webform_results' => 0,
          'webform_submissions' => 0,
          'webform_webforms' => 0,
        ),
        'force_default' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_select',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-add_body_class-field_body_class'.
  $fields['paragraphs_item-add_body_class-field_body_class'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_body_class',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'add_body_class',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Add a CSS class to this page\'s HTML body tag. Separate multiple values with spaces, eg: "class-a class-b class-c"',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_body_class',
      'label' => 'Body Class',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-callout_box_full_width_grey-field_header_text'.
  $fields['paragraphs_item-callout_box_full_width_grey-field_header_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_header_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'callout_box_full_width_grey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_header_text',
      'label' => 'Header Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-callout_box_full_width_grey-field_header_text_large'.
  $fields['paragraphs_item-callout_box_full_width_grey-field_header_text_large'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_header_text_large',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'callout_box_full_width_grey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_header_text_large',
      'label' => 'Header Text Large',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-callout_box_full_width_grey-field_images'.
  $fields['paragraphs_item-callout_box_full_width_grey-field_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_images',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'callout_box_full_width_grey',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'paragraph_box_image',
          ),
          'type' => 'image',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_images',
      'label' => 'Images',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'callout',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 'public',
            'vimeo' => 0,
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 0,
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 0,
            'upload' => 0,
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '47',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-callout_box_full_width_grey-field_paragraph_text'.
  $fields['paragraphs_item-callout_box_full_width_grey-field_paragraph_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_paragraph_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'callout_box_full_width_grey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_paragraph_text',
      'label' => 'Paragraph Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '45',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-divider_line-field_divider'.
  $fields['paragraphs_item-divider_line-field_divider'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_divider',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'divider_line',
      'default_value' => array(
        0 => array(
          'value' => '<hr>',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_divider',
      'label' => 'Divider',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-light_grey_text_box-field_box_copy'.
  $fields['paragraphs_item-light_grey_text_box-field_box_copy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_box_copy',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'light_grey_text_box',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_box_copy',
      'label' => 'Box Copy',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-light_grey_text_box-field_box_title'.
  $fields['paragraphs_item-light_grey_text_box-field_box_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_box_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'light_grey_text_box',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_box_title',
      'label' => 'Box Title',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-light_grey_text_box_narrower-field_box_copy'.
  $fields['paragraphs_item-light_grey_text_box_narrower-field_box_copy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_box_copy',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'light_grey_text_box_narrower',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_box_copy',
      'label' => 'Box Copy',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-light_grey_text_box_narrower-field_box_pre_title'.
  $fields['paragraphs_item-light_grey_text_box_narrower-field_box_pre_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_box_pre_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'light_grey_text_box_narrower',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_box_pre_title',
      'label' => 'Box Pre-title',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-light_grey_text_box_narrower-field_box_title'.
  $fields['paragraphs_item-light_grey_text_box_narrower-field_box_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_box_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'light_grey_text_box_narrower',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_box_title',
      'label' => 'Box Title',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-light_grey_text_box_narrower-field_class_for_this_box'.
  $fields['paragraphs_item-light_grey_text_box_narrower-field_class_for_this_box'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_class_for_this_box',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'light_grey_text_box_narrower',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_class_for_this_box',
      'label' => 'Class for this box',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-light_grey_text_box_with_link_to-field_anchor_to_link_to'.
  $fields['paragraphs_item-light_grey_text_box_with_link_to-field_anchor_to_link_to'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_anchor_to_link_to',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'light_grey_text_box_with_link_to',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_anchor_to_link_to',
      'label' => 'Anchor to Link To',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-light_grey_text_box_with_link_to-field_class_for_this_box'.
  $fields['paragraphs_item-light_grey_text_box_with_link_to-field_class_for_this_box'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_class_for_this_box',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'light_grey_text_box_with_link_to',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Add an optional css class to this box for further styling.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_class_for_this_box',
      'label' => 'Class for this box',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '46',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-light_grey_text_box_with_link_to-field_link'.
  $fields['paragraphs_item-light_grey_text_box_with_link_to-field_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'profile2_private' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'light_grey_text_box_with_link_to',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_link',
      'label' => 'Text ',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => 'anchorlink',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 0,
        'title' => 'required',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 0,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '45',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-link_block_blue-field_class_for_this_box'.
  $fields['paragraphs_item-link_block_blue-field_class_for_this_box'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_class_for_this_box',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'link_block_blue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_class_for_this_box',
      'label' => 'Class for this box',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-link_block_blue-field_link'.
  $fields['paragraphs_item-link_block_blue-field_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'profile2_private' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'link_block_blue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_link',
      'label' => 'URL',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => 'action-link',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 0,
        'title' => 'required',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-link_block_grey-field_class_for_this_box'.
  $fields['paragraphs_item-link_block_grey-field_class_for_this_box'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_class_for_this_box',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'link_block_grey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_class_for_this_box',
      'label' => 'Class for this box',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-link_block_grey-field_link'.
  $fields['paragraphs_item-link_block_grey-field_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'profile2_private' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'link_block_grey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_link',
      'label' => 'URL',
      'required' => 1,
      'settings' => array(
        'attributes' => array(
          'class' => 'action-link',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'required',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-link_box_adjustable-field_background_colour'.
  $fields['paragraphs_item-link_box_adjustable-field_background_colour'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_background_colour',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'PG Blue' => 'PG Blue',
          'PG Orange' => 'PG Orange',
          'PG Grey' => 'PG Grey',
          'Soft Grey' => 'Soft Grey',
          'Soft Blue' => 'Soft Blue',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'link_box_adjustable',
      'default_value' => array(
        0 => array(
          'value' => 'PG Blue',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 1,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_background_colour',
      'label' => 'Background Colour',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-link_box_adjustable-field_box_height'.
  $fields['paragraphs_item-link_box_adjustable-field_box_height'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_box_height',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'link_box_adjustable',
      'default_value' => array(
        0 => array(
          'value' => '180',
        ),
      ),
      'deleted' => '0',
      'description' => 'Enter box height in pixels.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 2,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_box_height',
      'label' => 'Box Height',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-link_box_adjustable-field_box_width'.
  $fields['paragraphs_item-link_box_adjustable-field_box_width'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_box_width',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'link_box_adjustable',
      'default_value' => array(
        0 => array(
          'value' => '120',
        ),
      ),
      'deleted' => '0',
      'description' => 'Enter a width for your link box, in pixels.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 3,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_box_width',
      'label' => 'Box Width',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '45',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-link_box_adjustable-field_link'.
  $fields['paragraphs_item-link_box_adjustable-field_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'profile2_private' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'link_box_adjustable',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 0,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_link',
      'label' => 'URL',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => 'link-box-adjustable',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 0,
        'title' => 'required',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-paragraph_text_with_anchor-field_anchor_name'.
  $fields['paragraphs_item-paragraph_text_with_anchor-field_anchor_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_anchor_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'paragraph_text_with_anchor',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_anchor_name',
      'label' => 'Anchor Name',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-paragraph_text_with_anchor-field_header_text'.
  $fields['paragraphs_item-paragraph_text_with_anchor-field_header_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_header_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'paragraph_text_with_anchor',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_header_text',
      'label' => 'Header Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-paragraph_text_with_anchor-field_header_text_large'.
  $fields['paragraphs_item-paragraph_text_with_anchor-field_header_text_large'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_header_text_large',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'paragraph_text_with_anchor',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_header_text_large',
      'label' => 'Header Text Large',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-paragraph_text_with_anchor-field_paragraph_text'.
  $fields['paragraphs_item-paragraph_text_with_anchor-field_paragraph_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_paragraph_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'paragraph_text_with_anchor',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_paragraph_text',
      'label' => 'Paragraph Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-paragraph_text_with_header_text-field_header_text'.
  $fields['paragraphs_item-paragraph_text_with_header_text-field_header_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_header_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'paragraph_text_with_header_text',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_header_text',
      'label' => 'Header Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-paragraph_text_with_header_text-field_images'.
  $fields['paragraphs_item-paragraph_text_with_header_text-field_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_images',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'paragraph_text_with_header_text',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'paragraph_box_image',
          ),
          'type' => 'image',
          'weight' => '2',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_images',
      'label' => 'Images',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'structure',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 'public',
            'vimeo' => 0,
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 0,
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 0,
            'upload' => 0,
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-paragraph_text_with_header_text-field_large_header_text'.
  $fields['paragraphs_item-paragraph_text_with_header_text-field_large_header_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_large_header_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'paragraph_text_with_header_text',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_large_header_text',
      'label' => 'Large Header Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-paragraph_text_with_header_text-field_paragraph_text'.
  $fields['paragraphs_item-paragraph_text_with_header_text-field_paragraph_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_paragraph_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'paragraph_text_with_header_text',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_paragraph_text',
      'label' => 'Paragraph Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-raw_block-field_class_for_this_box'.
  $fields['paragraphs_item-raw_block-field_class_for_this_box'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_class_for_this_box',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'raw_block',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_class_for_this_box',
      'label' => 'Class for this box',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-raw_block-field_raw_code'.
  $fields['paragraphs_item-raw_block-field_raw_code'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_raw_code',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'raw_block',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_raw_code',
      'label' => 'Raw Code',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-simple_text_with_right_side_imag-field_images'.
  $fields['paragraphs_item-simple_text_with_right_side_imag-field_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_images',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'simple_text_with_right_side_imag',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'paragraph_box_image',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_images',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'structure',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 'public',
            'vimeo' => 0,
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 0,
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 0,
            'upload' => 0,
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-simple_text_with_right_side_imag-field_paragraph_text'.
  $fields['paragraphs_item-simple_text_with_right_side_imag-field_paragraph_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_paragraph_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'simple_text_with_right_side_imag',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_paragraph_text',
      'label' => 'Paragraph Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-special_event_callout_box-field_callout_active_'.
  $fields['paragraphs_item-special_event_callout_box-field_callout_active_'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_callout_active_',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'special_event_callout_box',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_callout_active_',
      'label' => 'Callout Active?',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-special_event_callout_box-field_callout_link'.
  $fields['paragraphs_item-special_event_callout_box-field_callout_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_callout_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'special_event_callout_box',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_plain',
          'weight' => '2',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_callout_link',
      'label' => 'Callout Link',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 0,
        'title' => 'none',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-special_event_callout_box-field_callout_text'.
  $fields['paragraphs_item-special_event_callout_box-field_callout_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_callout_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'special_event_callout_box',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_callout_text',
      'label' => 'Callout Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-special_event_callout_box-field_callout_title'.
  $fields['paragraphs_item-special_event_callout_box-field_callout_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_callout_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'special_event_callout_box',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_callout_title',
      'label' => 'Callout Title',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'paragraphs_item-structure_header_text-field_structure_header_text'.
  $fields['paragraphs_item-structure_header_text-field_structure_header_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_structure_header_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'structure_header_text',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'paragraphs_item',
      'field_name' => 'field_structure_header_text',
      'label' => 'Header Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'php_code' => 'php_code',
            'plain_text' => 'plain_text',
            'wysiwyg_advanced' => 'wysiwyg_advanced',
            'wysiwyg_public' => 'wysiwyg_public',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'php_code' => array(
                'weight' => '11',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
              'wysiwyg_advanced' => array(
                'weight' => '-10',
              ),
              'wysiwyg_public' => array(
                'weight' => '-9',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '41',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add View');
  t('Add a CSS class to this page\'s HTML body tag. Separate multiple values with spaces, eg: "class-a class-b class-c"');
  t('Add an optional css class to this box for further styling.');
  t('Anchor Name');
  t('Anchor to Link To');
  t('Background Colour');
  t('Body Class');
  t('Box Copy');
  t('Box Height');
  t('Box Pre-title');
  t('Box Title');
  t('Box Width');
  t('Callout Active?');
  t('Callout Link');
  t('Callout Text');
  t('Callout Title');
  t('Class for this box');
  t('Divider');
  t('Enter a width for your link box, in pixels.');
  t('Enter box height in pixels.');
  t('Header Text');
  t('Header Text Large');
  t('Image');
  t('Images');
  t('Large Header Text');
  t('Paragraph Text');
  t('Paragraphs');
  t('Raw Code');
  t('Text ');
  t('URL');

  return $fields;
}
