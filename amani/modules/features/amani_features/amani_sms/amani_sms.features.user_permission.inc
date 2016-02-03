<?php
/**
 * @file
 * amani_sms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_sms_user_default_permissions() {
  $permissions = array();

  // Exported permission: create sms_submission content.
  $permissions['create sms_submission content'] = array(
    'name' => 'create sms_submission content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any sms_submission content.
  $permissions['delete any sms_submission content'] = array(
    'name' => 'delete any sms_submission content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own sms_submission content.
  $permissions['delete own sms_submission content'] = array(
    'name' => 'delete own sms_submission content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any sms_submission content.
  $permissions['edit any sms_submission content'] = array(
    'name' => 'edit any sms_submission content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own sms_submission content.
  $permissions['edit own sms_submission content'] = array(
    'name' => 'edit own sms_submission content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
