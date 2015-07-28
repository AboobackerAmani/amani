<?php
/**
 * @file
 * amani_image_behind_twitter_fb_cal_blocks.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function amani_image_behind_twitter_fb_cal_blocks_field_default_fields() {
  $fields = array();

  // Exported field: 'node-image_behind_twitter_fb_cal_bloc-field_image_blocks'.
  $fields['node-image_behind_twitter_fb_cal_bloc-field_image_blocks'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image_blocks',
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
        'default_image' => '418',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'image_behind_twitter_fb_cal_bloc',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_image_blocks',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '50 MB',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'imagefield_crop',
        'settings' => array(
          'collapsible' => '1',
          'croparea' => '1440x450',
          'enforce_minimum' => 1,
          'enforce_ratio' => 1,
          'preview_image_style' => 'front_page_slideshow',
          'progress_indicator' => 'throbber',
          'resolution' => '1440x450',
        ),
        'type' => 'imagefield_crop_widget',
        'weight' => '41',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');

  return $fields;
}
