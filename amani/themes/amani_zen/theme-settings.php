<?php
/**
 * Implements hook_form_system_theme_settings_alter().
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
// function amani_zen_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL)  {
  // Work-around for a core bug affecting admin themes. See issue #943212.
  // if (isset($form_id)) {
  //   return;
  // }

  // Create the form using Forms API: http://api.drupal.org/api/7

  /* -- Delete this line if you want to use this setting
  $form['amani_zen_example'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('amani_zen sample setting'),
    '#default_value' => theme_get_setting('amani_zen_example'),
    '#description'   => t("This option doesn't do anything; it's just an example."),
  );
  // */

  // Remove some of the base theme's settings.
  /* -- Delete this line if you want to turn off this setting.
  unset($form['themedev']['zen_wireframes']); // We don't need to toggle wireframes on this site.
  // */

  // We are editing the $form in place, so we don't need to return anything.
// }

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function amani_zen_form_system_theme_settings_alter(&$form, &$form_state) {
  $settings = array();
  $form['amani_zen_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Geek Theme Settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );

  $form['amani_zen_settings']['slideshow'] = array(
    '#type' => 'fieldset',
    '#title' => t('Front Page Slideshow'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['amani_zen_settings']['slideshow']['slideshow_display'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show slideshow'),
    '#default_value' => theme_get_setting('slideshow_display','amani_zen'),
    '#description'   => t("Check this option to show Slideshow in front page. Uncheck to hide."),
  );

  $form['amani_zen_settings']['slideshow']['slide'] = array(
    '#markup' => t('You can change the description and URL of each slide in the following Slide Setting fieldsets.'),
  );

  $form['amani_zen_settings']['slideshow']['slide1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Slide 1'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  // Check for a freshly uploaded image, save it to the
  // filesystem, and grab its full path for later use.
  $path = drupal_get_path('theme', 'amani_zen') . '/images';
  $validators = array('file_validate_is_image' => array());

  if ($file = file_save_upload('slide1_image', $validators)) {
    $parts = pathinfo($file->filename);
    $filename = 'slide1_image.' . $parts['extension'];

    if (file_copy($file, file_build_uri('/sites/default/files/'),
        FILE_EXISTS_REPLACE)) {
      $settings['slide1_image_path'] = $file->filepath;
    }
  }


  $dest = drupal_get_path('theme', 'amani_zen') . '/images';
  $file = file_save_upload('slide1_image', $validators, $dest, FILE_EXISTS_RENAME);
  // $file will be 0 if the upload doesn't exist, or the $dest directory
  // isn't writable
  if ($file != 0) {
    $dest_path = base_path() . drupal_get_path('theme', 'amani_zen') . '/images';
    $result = file_copy($file, $dest_path, FILE_EXISTS_RENAME);
  }

  $form['amani_zen_settings']['slideshow']['slide1']['slide1_image'] = array(
    '#type' => 'file',
    '#title' => t('Slide Image 1'),
    '#maxlength' => 40,
  );

  $form['slide1_image_path'] = array(
    '#type' => 'value',
    '#value' => !empty($settings['slide1_image_path']) ?
      $settings['slide1_image_path'] : '',
  );

  if (!empty($settings['slide1_image_path'])) {
    $form['slide1_image_preview'] = array(
      '#type' => 'markup',
      '#value' => !empty($settings['slide1_image_path']) ?
      theme('image', $settings['slide1_image_path']) : '',
    );
  }

  $form['amani_zen_settings']['slideshow']['slide1']['slide1_head'] = array(
    '#type' => 'textfield',
    '#title' => t('Slide Headline'),
    '#default_value' => theme_get_setting('slide1_head','amani_zen'),
  );

  $form['amani_zen_settings']['slideshow']['slide1']['slide1_desc'] = array(
    '#type' => 'textarea',
    '#title' => t('Slide Description'),
    '#default_value' => theme_get_setting('slide1_desc','amani_zen'),
  );

  $form['amani_zen_settings']['slideshow']['slide1']['slide1_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Slide URL'),
    '#default_value' => theme_get_setting('slide1_url','amani_zen'),
  );






  $form['amani_zen_settings']['slideshow']['slide2'] = array(
    '#type' => 'fieldset',
    '#title' => t('Slide 2'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['amani_zen_settings']['slideshow']['slide2']['slide2_head'] = array(
    '#type' => 'textfield',
    '#title' => t('Slide Headline'),
    '#default_value' => theme_get_setting('slide2_head','amani_zen'),
  );

  $form['amani_zen_settings']['slideshow']['slide2']['slide2_desc'] = array(
    '#type' => 'textarea',
    '#title' => t('Slide Description'),
    '#default_value' => theme_get_setting('slide2_desc','amani_zen'),
  );

  $form['amani_zen_settings']['slideshow']['slide2']['slide2_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Slide URL'),
    '#default_value' => theme_get_setting('slide2_url','amani_zen'),
  );







  $form['amani_zen_settings']['slideshow']['slide3'] = array(
    '#type' => 'fieldset',
    '#title' => t('Slide 3'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['amani_zen_settings']['slideshow']['slide3']['slide3_head'] = array(
    '#type' => 'textfield',
    '#title' => t('Slide Headline'),
    '#default_value' => theme_get_setting('slide3_head','amani_zen'),
  );

  $form['amani_zen_settings']['slideshow']['slide3']['slide3_desc'] = array(
    '#type' => 'textarea',
    '#title' => t('Slide Description'),
    '#default_value' => theme_get_setting('slide3_desc','amani_zen'),
  );

  $form['amani_zen_settings']['slideshow']['slide3']['slide3_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Slide URL'),
    '#default_value' => theme_get_setting('slide3_url','amani_zen'),
  );






  $form['amani_zen_settings']['slideshow']['slideimage'] = array(
    '#markup' => t('To change the Slide Images, Replace the slide-image-1.jpg, slide-image-2.jpg and slide-image-3.jpg in the images folder of the theme folder.'),
  );

}
