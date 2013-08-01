<?php

/**
 * Implements hook install tasks.
 *
 */
function amani_install_tasks() {
  $tasks['revert_amani_features_task'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'revert_amani_features',
  );
  return $tasks;
}

/**
  *Revert amani features.
  */
function revert_amani_features() {
  features_revert();
}
