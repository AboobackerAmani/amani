<?php
/**
 * @file
 * amani_front_page.box.inc
 */

/**
 * Implements hook_default_box().
 */
function amani_front_page_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_second_sidebar_bottom';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Front page second sidebar bottom';
  $box->options = array(
    'body' => array(
      'value' => '<?php echo l(t(\'Newsletter\'), \'http://peacegeeks.us2.list-manage.com/subscribe?u=951e6313af8a044ad05fdc097&id=638c8b529c&orig-lang=1\', array(\'attributes\' => array(\'class\' => \'button\', \'target\' => \'_blank\'))); ?>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['front_second_sidebar_bottom'] = $box;

  return $export;
}
