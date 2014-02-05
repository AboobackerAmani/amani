<?php
/**
 * @file
 * amani_partners.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function amani_partners_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__partner_logo__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '250x100',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  $export['image__partner_logo__file_image'] = $file_display;

  return $export;
}
