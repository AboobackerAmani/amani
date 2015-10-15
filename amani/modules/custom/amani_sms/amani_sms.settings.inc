<?php
/**
 * @file
 */
 
 /**
 * Form that deals with the settings of the module.
 */
function amani_sms_settings_form($form, &$form_state) {
  $form['ori_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('Set the original secret'),
    'maxlength' => 20,
    '#description' => t("Set a secret to prevent spam"),
  );
  
  $form['secret_1'] = array(
    '#type' => 'textfield',
    '#title' => t('Set secret'),
    '#default_value' => '123456',
    'maxlength' => 20,
    '#description' => t("Set a secret to prevent spam"),
  );
  
  $form['secret_2'] = array(
    '#type' => 'textfield',
    '#title' => t('Set secret'),
    '#default_value' => '123456',
    'maxlength' => 20,
    '#description' => t("Set a secret to prevent spam"),
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );
  
  return $form;
}

function amani_sms_settings_form_validate($form, &$form_state) {
  // Validation logic.
}

function amani_sms_settings_form_submit($form, &$form_state) {
  // Submission logic.
}
