<?php
/**
 * @file
 * awp_redhen.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function awp_redhen_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'redhen_contacts';
  $feeds_importer->config = array(
    'name' => 'Redhen Contacts',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'RedhenFeedsContactProcessor',
      'config' => array(
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'First Name',
            'target' => 'first_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Last name',
            'target' => 'last_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Position',
            'target' => 'field_position',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Organization',
            'target' => 'field_organization',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Email_Address1',
            'target' => 'email',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Phone1',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Phone2',
            'target' => 'field_phone_1',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Fax',
            'target' => 'field_fax',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Skype',
            'target' => 'field_text',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Twitter',
            'target' => 'field_twitter',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Comments',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => NULL,
        'skip_hash_check' => 0,
        'bundle' => 'personalcontact',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['redhen_contacts'] = $feeds_importer;

  return $export;
}
