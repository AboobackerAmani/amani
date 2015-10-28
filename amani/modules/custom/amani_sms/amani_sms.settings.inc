<?php
/**
 * @file
 */
 
 /**
 * Form that deals with the settings of the module.
 */
function amani_sms_settings_form($form, &$form_state) {
  $form = array();

  $form['amani_sms_ori_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('Set the original secret'),
    '#maxlength' => 20,
    '#description' => t("Set a secret to prevent spam"),
    '#default_value' => variable_get('amani_sms_ori_secret', ''),
  );

  $form['amani_sms_secret_1'] = array(
    '#type' => 'textfield',
    '#title' => t('Set secret'),
    '#maxlength' => 20,
    '#description' => t("Set a secret to prevent spam"),
    '#default_value' => variable_get('amani_sms_secret_1', '12345'),
  );

  $form['amani_sms_secret_2'] = array(
    '#type' => 'textfield',
    '#title' => t('Set secret'),
    '#maxlength' => 20,
    '#description' => t("Set a secret to prevent spam"),
    '#default_value' => variable_get('amani_sms_secret_2', '12345'),
  );

  return system_settings_form($form);
}
