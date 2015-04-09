<?php

/**
 * Implements hook install tasks.
 *
 */
function amani_install_tasks() {
  $tasks['enable_image_file_display_task'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'enable_image_file_display',
  );
  $tasks['build_menus'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'build_amani_menus',
  );
  $tasks['revert_amani_features_task'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'revert_amani_features',
  );

  return $tasks;
}

/**
 * Revert all features.
 */
function revert_amani_features() {
  features_revert();
}

/**
 * Build out our 4 default menus
 */
function build_amani_menus() {
  amani_administrator_create_menu_links('menu-social-media');
  amani_administrator_create_menu_links('menu-amani-main-menu');
  amani_administrator_create_menu_links('menu-donate');
  amani_administrator_create_menu_links('menu-meta');
}
