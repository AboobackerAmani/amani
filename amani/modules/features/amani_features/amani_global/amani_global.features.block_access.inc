<?php
/**
 * @file
 * amani_global.features.block_access.inc
 */

/**
 * Implements hook_block_access_defaults().
 */
function amani_global_block_access_defaults() {
  $block_access = array();

  // Exported Block Access settings for module fb_likebox
  $block_access['fb_likebox'] = array(
    'amani administrator' => array(
      0 => 'config_body',
    ),
  );

  return $block_access;
}
