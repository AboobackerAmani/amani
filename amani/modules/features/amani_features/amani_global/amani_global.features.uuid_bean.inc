<?php
/**
 * @file
 * amani_global.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function amani_global_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Amani: Special Thanks',
    'description' => NULL,
    'title' => '',
    'type' => 'static_content',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'amani-special-thanks',
    'view_mode' => 'default',
    'created' => '1374818202',
    'log' => '',
    'uid' => '1',
    'default_revision' => '1',
    'revisions' => array(),
    'vuuid' => '7ea64c8e-3953-4284-9751-74f2cdbcb001',
    'uuid' => 'c36642c7-9636-4712-8804-b5610cdce8a9',
    'field_bean_body' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="sponsor-logos"></div>',
          'format' => 'php_code',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $beans[] = array(
    'label' => 'Amani: Powered by',
    'description' => NULL,
    'title' => '',
    'type' => 'static_content',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'amani-powered-by',
    'view_mode' => 'default',
    'created' => '1374817913',
    'log' => '',
    'uid' => '1',
    'default_revision' => '1',
    'revisions' => array(),
    'vuuid' => '74895912-6a98-4d34-9f5f-ebd01453fd1a',
    'uuid' => 'db498fe8-1460-4588-807e-e94ee68ea016',
    'field_bean_body' => array(
      'und' => array(
        0 => array(
          'value' => '<img src="<?php echo base_path();  ?>profiles/amani/themes/peace/images/amani_powered_by.png" style="width: 50%; margin-bottom: 20px;" />
<div class="credits-text">a project by</div>
<div class="credits-logo"><img src="<?php echo base_path() . path_to_theme(); ?>/images/icons/logo_peacegeeks.png" style="width: 50%;" /></div>',
          'format' => 'php_code',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $beans;
}
