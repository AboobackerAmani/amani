<?php

/**
 * Configure newsletter button form (admin/conifigure-amani/newsletter)
 */
function amani_administrator_configure_newsletter_button_form() {
  $form = array();
  $form['amani_administrator_newsletter_title'] = array(
    '#title' => 'Newsletter button title',
    '#type' => 'textfield',
    '#default_value' => variable_get('amani_administrator_newsletter_title', 'Newsletter'),
    '#description' => t('The text that will appear on the newsletter button.'),
  );

  $form['amani_administrator_newsletter_link'] = array(
    '#title' => 'Newsletter button link',
    '#type' => 'textfield',
    '#default_value' => variable_get('amani_administrator_newsletter_link', ''),
    '#description' => t('The url for the newsletter button (ie http://www.my-newsletter.com).'),
  );

  return system_settings_form($form);
}

/**
 * Configure amani page (admin/configure-amani).
 */
function amani_administrator_configure_amani_form() {
  $form = array();
  // prefixes used to split the fieldsets into columns so we
  // can add help text (the suffix).
  // default (2 columns)
  $prefix = '<div style="width: 45%; display: inline-block; vertical-align: top; padding: 15px 0px 0px 10px">';
  // 3 columns
  $prefix_3 = '<div style="width: 30%; display: inline-block; vertical-align: top; padding: 15px 0px 0px 10px">';
  $form['social_media_menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Social Media Menu'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['social_media_menu'][] = array(
    '#type' => 'button',
    '#value' => t('Reset Default Links'),
    '#attributes' => array('onclick' => 'if(!confirm("Are you sure?")){return false;}'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action builds the <a href="http://projectamani.org/content/social-media-icons">default social media icons</a> menu.
      It will not enable or remove any existing links.</p></div>',
  );

  $form['social_media_menu'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Social Media Icons'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' =>
    '<p>This action allows users to:
      <ul style="margin-left:20px">
        <li>enable, disable, add or delete default icons found <a href="http://projectamani.org/content/social-media-icons">here</a></li>
        <li>link icons to organization-specific pages</li>
        <li>set icon ordering</li>
      </ul>
     </p>
    </div>',
  );

  $form['main_menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Main Menu'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['main_menu'][] = array(
    '#type' => 'button',
    '#value' => t('Reset Default Menu Links'),
    '#attributes' => array('onclick' => 'if(!confirm("Are you sure?")){return false;}'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action builds the<a href="http://projectamani.org/content/edit-main-menu-links">default main menu</a>. 
      It will not enable or remove any existing links.</p></div>',
  );

  $form['main_menu'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Main Menu Links'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' =>
    '<p>This action allows users to:
      <ul style="margin-left:20px">
        <li>Enable, disable or delete any menu links</li>
        <li>Set menu links </li>
        <li>Establish menu ordering and manage sub-menus</li>
      </ul>
     </p>
    </div>',
  );

  $form['donate_menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Donate Button'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['donate_menu'][] = array(
    '#type' => 'button',
    '#value' => t('Configure \'Donate\' Button'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action allows users to enable, disable or delete your \'Donate\' button and set your \'Donate\' button link. The \'Donate\' button will appear as a dynamically scrolling button on the right side of your page.</p></div>',
  );

  $form['blocks'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Amani Blocks'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['blocks']['newsletter'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Newsletter Button'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['blocks']['newsletter'][] = array(
    '#type' => 'button',
    '#value' => t('Enable \'Newsletter\' Button'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '<p>This action enables the ‘Newsletter’ button on your site, this button appears in the right sidebar of your page.</p></div>',
  );

  $form['blocks']['newsletter'][] = array(
    '#type' => 'button',
    '#value' => t('Disable \'Newsletter\' Button'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '<p>This action disables the ‘Newsletter’ button on your site, this button appears in the right sidebar of your page.</p></div>',
  );

  $form['blocks']['newsletter'][] = array(
    '#type' => 'button',
    '#value' => t('Configure \'Newsletter\' Button'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '<p>This action allows users to set your ‘Newsletter’ button link.</p></div>',
  );

  $form['blocks']['carousel'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Partners Carousel'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['blocks']['carousel'][] = array(
    '#type' => 'button',
    '#value' => t('Enable \'Partners Carousel\''),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action enables a ‘Partners Carousel’ to appear on your site, as a scrolling bar at the bottom of 
      your page. Please note without partner content you will not see this block.</p></div>',
  );

  $form['blocks']['carousel'][] = array(
    '#type' => 'button',
    '#value' => t('Disable \'Partners Carousel\''),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action diables the \'Partners Carousel\' on your site.</p></div>',
  );

  $form['site-info'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Site Info and Logo'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['site-info'][] = array(
    '#type' => 'button',
    '#value' => t('Manage Site Info and Logo'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' =>
    '<p>Users can manage Global settings, including:
      <ul style="margin-left:20px">
        <li>Setting your ‘Site Name’ as it appears on the opt of your web browser</li>
        <li>Setting or editing your site’s ‘Tagline’ to the right of the logo in your site header</li>
        <li>Upload your organization’s logo and favicon</li>
        <li>Setting your office location map</li>
        <li>Setting your site email address</li>
      </ul>
     </p>
    </div>',
  );

  $form['contact-info'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Contact Page Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['contact-info'][] = array(
    '#type' => 'button',
    '#value' => t('Set Contact Page Form Categories & Contact Recipients'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' =>
    '<p>This option allows you to add new categories for the ‘Contact Form’ (e.g. General Inquiries, Donation Inquiries, Volunteer with Us, 
      Website Feedback, etc.) and customize the set of recipients for each category type on your site’s default Contact page. 
      Please note that your site comes with one default category ‘General Inquiries.’ When there is only one ‘Category’, there is no ‘Category’ 
      dropdown list. This dropdown option will appear as soon as you add a second ‘Category’ option.</p></div>'
  );

  $form['map'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Map Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['map'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Map'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' =>
    '<p>\'Configure Map Settings\' allows users to:
      <ul style="margin-left:20px">
        <li>Customize Map Page title and map record labels</li>
        <li>Manage Map Settings to either fit all records to the map or to cover a specific geographic area</li>
        <li>Manage and customize map filter options, including date and category filters</li>
        <li>Manage and customize map marker colors and icons</li>
      </ul>
     </p>
    </div>',
  );

  $form['google'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Google Analytics'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['google'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Google Analytics'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>Manage Google Analytics settings, including tracking for pages, roles and users.</p></div>',
  );

  $form['twitter'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Twitter Feed (Home Page)'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['twitter'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Twitter Feed'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>Enable and manage your organization’s Twitter feed, located on your Home page</p></div>',
  );

  $form['facebook'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Facebook Feed (Home Page)'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['facebook'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Facebook Feed'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>Enable and manage your organization’s Facebook feed, located on your Home page.</p></div>',
  );

  $form['redhen'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage RedHen CRM'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['redhen'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Redhen'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p><a href="https://www.drupal.org/project/redhen">RedHen CRM</a> is an open source CRM framework built in <a href="https://www.drupal.org/">Drupal</a>. 
      RedHen CRM is packed with <a href="http://en.wikipedia.org/wiki/Association_management_system">association management</a> (AMS) features for managing detailed information on Contacts and Organizations, Membership services, Event registrations, and 
      Constituent engagement.</p></div>',
  );

  $form['css'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage CSS Overrides'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['css'][] = array(
    '#type' => 'button',
    '#value' => t('Configure CSS'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>Users can manage text and button colors, add effects (such as shadows) to set elements, and otherwise manage the visual aspects of your site by creating CSS rules that override the default CSS code. Click here for a list of frequently used overrides.</p></div>',
  );

  return $form;
}

/**
 * submission handler for configure amani form.
 */
function amani_administrator_configure_amani_form_submit($form, &$form_state) {
  switch ($form_state['clicked_button']['#value']) {
    case 'Reset Default Links':
      amani_administrator_create_menu_links('menu-social-media');
      drupal_set_message('Menu link paths can now be configured ' . l('here', 'admin/structure/menu/manage/menu-social-media'));
      break;
    case 'Reset Default Menu Links':
      amani_administrator_create_menu_links('menu-amani-main-menu');
      drupal_set_message('Menu link paths can now be configured ' . l('here', 'admin/structure/menu/manage/menu-amani-main-menu'));
      break;
    case 'Configure Social Media Icons':
      drupal_goto('admin/structure/menu/manage/menu-social-media');
      break;
    case 'Configure Main Menu Links':
      drupal_goto('admin/structure/menu/manage/menu-amani-main-menu');
      break;
    case 'Configure \'Donate\' Button':
      drupal_goto('admin/structure/menu/manage/menu-donate');
      break;
    case 'Enable \'Partners Carousel\'':
      // Partners carousel block.
      $block = array(
        'module' => 'views',
        'delta' => 'partners_carousel-block',
      );
      amani_administrator_set_block($block, 1, 0, 'content_bottom');
      break;
    case 'Disable \'Partners Carousel\'':
      // Partners carousel block.
      $block = array(
        'module' => 'views',
        'delta' => 'partners_carousel-block',
      );
      amani_administrator_set_block($block, 0, 0, -1);
      break;
    case 'Configure \'Newsletter\' Button':
      drupal_goto('admin/configure-amani/newsletter-button');
      break;
    case 'Disable \'Newsletter\' Button':
      variable_set('amani_admin_newsletter_button_show', 0);
      break;
    case 'Enable \'Newsletter\' Button':
      variable_set('amani_admin_newsletter_button_show', 1);
      break;
    case 'Manage Site Info and Logo':
      drupal_goto('admin/configure-amani/site-info');
      break;
    case 'Configure Map':
      drupal_goto('admin/config/incident-reports');
      break;
    case 'Configure Google Analytics':
      drupal_goto('admin/config/system/googleanalytics');
      break;
    case 'Configure Twitter Feed':
      drupal_goto('admin/config/services/twitter/settings');
      break;
    case 'Configure Facebook Feed':
      drupal_goto('admin/structure/block/manage/fb_likebox/0/configure');
      break;
    case 'Configure Redhen':
      drupal_goto('redhen');
      break;
    case 'Set Contact Page Form Categories & Contact Recipients':
      drupal_goto('admin/structure/contact');
      break;
    case 'Configure Css':
      drupal_goto('admin/config/development/css-injector');
      break;
  }
}
