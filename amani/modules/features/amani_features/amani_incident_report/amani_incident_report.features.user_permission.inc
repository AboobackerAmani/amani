<?php
/**
 * @file
 * amani_incident_report.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_incident_report_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer map configuration'.
  $permissions['administer map configuration'] = array(
    'name' => 'administer map configuration',
    'roles' => array(
      'administrator' => 'administrator',
      'amani administrator' => 'amani administrator',
    ),
    'module' => 'incident_map',
  );

  // Exported permission: 'create incident_report content'.
  $permissions['create incident_report content'] = array(
    'name' => 'create incident_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'amani administrator' => 'amani administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any incident_report content'.
  $permissions['delete any incident_report content'] = array(
    'name' => 'delete any incident_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'amani administrator' => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own incident_report content'.
  $permissions['delete own incident_report content'] = array(
    'name' => 'delete own incident_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'amani administrator' => 'amani administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any incident_report content'.
  $permissions['edit any incident_report content'] = array(
    'name' => 'edit any incident_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'amani administrator' => 'amani administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own incident_report content'.
  $permissions['edit own incident_report content'] = array(
    'name' => 'edit own incident_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'amani administrator' => 'amani administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
