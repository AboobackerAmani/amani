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
          'light_grey_text_box' => 'light_grey_text_box',
          'paragraph_text_with_header_text' => 'paragraph_text_with_header_text',
          'structure_header_text' => 'structure_header_text',
        ),
        'bundle_weights' => array(
          'light_grey_text_box' => '2',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Paragraphs');

  return $fields;
}
