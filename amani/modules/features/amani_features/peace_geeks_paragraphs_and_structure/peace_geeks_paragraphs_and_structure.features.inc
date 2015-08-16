<?php
/**
 * @file
 * peace_geeks_paragraphs_and_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function peace_geeks_paragraphs_and_structure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function peace_geeks_paragraphs_and_structure_node_info() {
  $items = array(
    'structure' => array(
      'name' => t('Structure'),
      'base' => 'node_content',
      'description' => t('Main structural pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function peace_geeks_paragraphs_and_structure_paragraphs_info() {
  $items = array(
    'callout_box_full_width_grey' => array(
      'name' => 'Callout Box - Full Width - Grey',
      'bundle' => 'callout_box_full_width_grey',
      'locked' => '1',
    ),
    'divider_line' => array(
      'name' => 'Divider Line',
      'bundle' => 'divider_line',
      'locked' => '1',
    ),
    'light_grey_text_box' => array(
      'name' => 'Light Grey Text Box',
      'bundle' => 'light_grey_text_box',
      'locked' => '1',
    ),
    'light_grey_text_box_narrower' => array(
      'name' => 'Light Grey Text Box - Narrower',
      'bundle' => 'light_grey_text_box_narrower',
      'locked' => '1',
    ),
    'link_block_blue' => array(
      'name' => 'Link Block - Blue',
      'bundle' => 'link_block_blue',
      'locked' => '1',
    ),
    'link_block_grey' => array(
      'name' => 'Link Block - Grey',
      'bundle' => 'link_block_grey',
      'locked' => '1',
    ),
    'link_box_adjustable' => array(
      'name' => 'Link Box - Adjustable',
      'bundle' => 'link_box_adjustable',
      'locked' => '1',
    ),
    'paragraph_text_with_header_text' => array(
      'name' => 'Paragraph Text With Header Text',
      'bundle' => 'paragraph_text_with_header_text',
      'locked' => '1',
    ),
    'simple_text_with_right_side_imag' => array(
      'name' => 'Simple Text With Right Side Image',
      'bundle' => 'simple_text_with_right_side_imag',
      'locked' => '1',
    ),
    'structure_header_text' => array(
      'name' => 'Structure Header Text',
      'bundle' => 'structure_header_text',
      'locked' => '1',
    ),
  );
  return $items;
}
