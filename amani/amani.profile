<?php

/**
 * Implements hook install tasks.
 *
 */
function amani_install_tasks() {
  $tasks['revert_amani_global_task'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'revert_amani_global',
  );
  return $tasks;
}

/**
  *Revert amani global feature.
  */
function revert_amani_global() {
  features_revert(array('amani_global' => array('menu_links')));
}
