<?php

// Put the logo path into JavaScript for the live preview.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'peace'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'header' => t('Header'),
    'main_menu_item_color' => t('Main menu link color'),
    'main_menu_item_hover_color' => t('Main menu link hover color'),
    'sec_menu_item_color' => t('Secondary menu link color'),
    'sec_menu_item_hover_color' => t('Secondary menu link hover color'),
    'text' => t('Text color'),
    'link' => t('Link color'),
    'footer' => t('Footer background'),
    'box_shadow' => t('Home page box shadow'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Amani (default)'),
      'colors' => array(
        'header' => '#ffffff',
        'main_menu_item_color' => '#f2a64b',
        'main_menu_item_hover_color' => '#7f007f',
        'sec_menu_item_color' => '#ee8f1c',
        'sec_menu_item_hover_color' => '#800080',
        'text' => '#000000',
        'link' => '#ee8f1c',
        'footer' => '#414042',
        'box_shadow' => '#ffffff',
      ),
    ),
    'test' => array(
      'title' => t('Test'),
      'colors' => array(
        'header' => '#cd2d2d',
        'main_menu_item_color' => '#ffff00',
        'main_menu_item_hover_color' => '#ffa500',
        'sec_menu_item_color' => '#0000ff',
        'sec_menu_item_hover_color' => '#ffffff',
        'text' => '#3b3b3b',
        'link' => '#d6121f',
        'footer' => '#ffa500',
        'box_shadow' => '#7f007f',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
