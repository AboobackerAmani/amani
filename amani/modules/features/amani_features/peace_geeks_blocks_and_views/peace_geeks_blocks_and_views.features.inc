<?php
/**
 * @file
 * peace_geeks_blocks_and_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function peace_geeks_blocks_and_views_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function peace_geeks_blocks_and_views_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function peace_geeks_blocks_and_views_image_default_styles() {
  $styles = array();

  // Exported image style: banner_image.
  $styles['banner_image'] = array(
    'name' => 'banner_image',
    'label' => 'Banner Image',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '1200',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
      2 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '1200',
          'height' => '400',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: event_page_main_image.
  $styles['event_page_main_image'] = array(
    'name' => 'event_page_main_image',
    'label' => 'Event Page Main Image (330 x 390)',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '330',
          'height' => '390',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: event_sponsor_logo_small.
  $styles['event_sponsor_logo_small'] = array(
    'name' => 'event_sponsor_logo_small',
    'label' => 'Event Sponsor Logo Small (140 wide)',
    'effects' => array(
      15 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '140',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: front_page_latest_news.
  $styles['front_page_latest_news'] = array(
    'name' => 'front_page_latest_news',
    'label' => 'Front Page Latest News (364 x 266)',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '364',
          'height' => '266',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: latest_project_front.
  $styles['latest_project_front'] = array(
    'name' => 'latest_project_front',
    'label' => 'Latest Project Front',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '648',
          'height' => '240',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: media_resources_download.
  $styles['media_resources_download'] = array(
    'name' => 'media_resources_download',
    'label' => 'Media Resources Download',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '230',
          'height' => '194',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: meet_volunteer_block.
  $styles['meet_volunteer_block'] = array(
    'name' => 'meet_volunteer_block',
    'label' => 'Meet Volunteer Block (270 x 380)',
    'effects' => array(
      18 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '380',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: news_card.
  $styles['news_card'] = array(
    'name' => 'news_card',
    'label' => 'News Card',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '346',
          'height' => '240',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: news_item_lead_image.
  $styles['news_item_lead_image'] = array(
    'name' => 'news_item_lead_image',
    'label' => 'News Item Lead Image (690 x 390)',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '690',
          'height' => '390',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: past_events_card.
  $styles['past_events_card'] = array(
    'name' => 'past_events_card',
    'label' => 'Past Events Card (210 x 248)',
    'effects' => array(
      19 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '210',
          'height' => '248',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: team_profile_photo.
  $styles['team_profile_photo'] = array(
    'name' => 'team_profile_photo',
    'label' => 'Team Profile Photo Small (241 x 306)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '241',
          'height' => '306',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: team_profile_photo_node.
  $styles['team_profile_photo_node'] = array(
    'name' => 'team_profile_photo_node',
    'label' => 'Team Profile Photo Node (274 x 348)',
    'effects' => array(
      24 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '274',
          'height' => '348',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: team_solo_page_profile.
  $styles['team_solo_page_profile'] = array(
    'name' => 'team_solo_page_profile',
    'label' => 'Team Solo Page Profile',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '330',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: upcoming_event_image.
  $styles['upcoming_event_image'] = array(
    'name' => 'upcoming_event_image',
    'label' => 'Upcoming Event Image (334 x 334)',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '334',
          'height' => '334',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: volunteer_front.
  $styles['volunteer_front'] = array(
    'name' => 'volunteer_front',
    'label' => 'Volunteer Front (264x208)',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '264',
          'height' => '208',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
