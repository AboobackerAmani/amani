<?php
/**
 * @file
 * amani_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function amani_article_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags_type|node|article|default';
  $field_group->group_name = 'group_tags_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags & Type',
    'weight' => '2',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_article_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tags & Type',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags-type field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tags_type|node|article|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Tags & Type');

  return $field_groups;
}
