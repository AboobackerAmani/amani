<?php

/**
 * Configure newsletter button form (admin/conifigure-amani/newsletter)
 */
function amani_administrator_configure_newsletter_button_form() {
  $form = array();
  $form['amani_administrator_newsletter_title'] = array(
    '#title' => 'Newsletter button title',
    '#type' => 'textfield',
    '#default_value' => t(variable_get('amani_administrator_newsletter_title', 'Newsletter')),
    '#description' => t('The text that will appear on the newsletter button.'),
  );

  $form['amani_administrator_newsletter_link'] = array(
    '#title' => 'Newsletter button link',
    '#type' => 'textfield',
    '#default_value' => t(variable_get('amani_administrator_newsletter_link', '')),
    '#description' => t('The url for the newsletter button (ie http://www.my-newsletter.com).'),
  );

  return system_settings_form($form);
}

/**
  * Implements hook_variable_info().
  *
  * This allows us to localize these variables.
  */
function amani_administrator_variable_info($options) {
  $variables['amani_administrator_newsletter_title'] = array(
    'type' => 'string',
    'title' => t('Newsletter title', array(), $options),
    'default' => 'Newsletter',
    'description' => t('The text that will appear on the newsletter button', array(), $options),
    'required' => FALSE,
    'localize' => TRUE,
  );

  $variables['amani_administrator_newsletter_link'] = array(
    'type' => 'string',
    'title' => t('Newsletter link', array(), $options),
    'default' => '',
    'description' => t('The url for the newsletter', array(), $options),
    'required' => FALSE,
    'localize' => TRUE,
  );

  return $variables;
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

  $form['meta_menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Secondary Menu'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['meta_menu'][] = array(
    '#type' => 'button',
    '#value' => t('Reset Default Secondary Menu Links'),
    '#attributes' => array('onclick' => 'if(!confirm("Are you sure?")){return false;}'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action builds the default meta menu (home, admin, login/logout) located below the top right search.
      It will not enable or remove any existing links.</p></div>',
  );

  $form['meta_menu'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Secondary Menu Links'),
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
    '#title' => t('Manage Floating Button'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['donate_menu'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Floating Button'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action allows users to enable, disable, edit or delete your floating button and set your floating button link. The floating button will appear as a dynamically scrolling button on the right side of your page.
                  Example use: A \'Donate\' button.</p></div>',
  );

  $form['blocks'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Amani Blocks'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['blocks']['newsletter'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Newsletter Button (Site wide)'),
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
    '#title' => t('Manage Partners Carousel (Site wide)'),
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
    '#suffix' => '<p>This action disables the \'Partners Carousel\' on your site.</p></div>',
  );

  $form['blocks']['events'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Upcoming Events (Home Page)'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['blocks']['events'][] = array(
    '#type' => 'button',
    '#value' => t('Enable \'Upcoming Events\''),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action enables  \'Upcoming events block\' to appear on your front page</p></div>'
  );

  $form['blocks']['events'][] = array(
    '#type' => 'button',
    '#value' => t('Disable \'Upcoming Events\''),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action disables \'Upcoming events block\' to appear on your front page</p></div>'
  );

  $form['blocks']['social'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Social Media Feeds (Home Page)'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['blocks']['social'][] = array(
    '#type' => 'button',
    '#value' => t('Enable \'Social Media Feeds\''),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action enables  \'Social media feeds\' to appear on your front page</p></div>'
  );

  $form['blocks']['social'][] = array(
    '#type' => 'button',
    '#value' => t('Disable \'Social Media Feeds\''),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action enables  \'Disables media feeds\' to appear on your front page</p></div>'
  );

  $form['blocks']['get_involved'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Get Involved Block (Programs)'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['blocks']['get_involved'][] = array(
    '#type' => 'button',
    '#value' => t('Enable \'Get Involved\''),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action enables the \'Get Involved Block\' to appear on your site\'s /programs page.</p></div>'
  );

  $form['blocks']['get_involved'][] = array(
    '#type' => 'button',
    '#value' => t('Disable \'Get Involved\''),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>This action disables the \'Get Involved Block\' to appear on your site\'s /programs page.</p></div>'
  );

  $form['blocks']['img_behind_blocks'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Image Behind Homepage Block (Home Page)'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['blocks']['img_behind_blocks'][] = array(
    '#type' => 'button',
    '#value' => t('Change Image'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>Change image behind homepage twitter, faceboook & calender blocks.</p>',
  );

  $form['site-info'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Logo & Tagline'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['site-info'][] = array(
    '#type' => 'button',
    '#value' => t('Manage Logo & Tagline'),
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
    '#value' => t('Configure Contact Form'),
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
    '#title' => t('Manage Twitter Feed (Home page)'),
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
    '#prefix' => $prefix_3,
    '#suffix' => '<p>Enable and manage your organization’s Facebook feed, located on your Home page.</p></div>',
  );

  $form['facebook'][] = array(
    '#type' => 'button',
    '#value' => t('Enable Facebook Feed'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '<p>Enable your organization’s Facebook feed, located on your Home page.</p></div>',
  );

  $form['facebook'][] = array(
    '#type' => 'button',
    '#value' => t('Disable Facebook Feed'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '<p>Disable your organization’s Facebook feed, located on your Home page.</p></div>',
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

  $form['spam_control'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#title' => t('Manage Spam Control'),
  );

  $form['spam_control'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Spambot'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '</div>',
  );

  $form['spam_control'][] = array(
    '#type' => 'button',
    '#value' => t('Configure Honeypot'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '</div>',
  );

  $form['localization'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#title' => t('Manage Localization'),
  );

  $form['localization'][] = array(
    '#type' => 'button',
    '#value' => t('Manage Languages'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '</div>',
  );

  $form['localization'][] = array(
    '#type' => 'button',
    '#value' => t('Translate Strings'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '</div>',
  );

  $form['additional_options'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#title' => t('View Additional Options'),
  );

  $form['additional_options'][] = array(
    '#type' => 'button',
    '#value' => t('View Amani Release Notes'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '<p>View your current version of Amani along with past releases.</p></div>',
  );

  $form['additional_options'][] = array(
    '#type' => 'button',
    '#value' => t('Configuration Documentation'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '</div>',
  );

  $form['additional_options'][] = array(
    '#type' => 'button',
    '#value' => t('Content Management Documentation'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix_3,
    '#suffix' => '</div>',
  );

  $form['login_items'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage Third-Party Logins'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['login_items'][] = array(
    '#type' => 'button',
    '#value' => t('Edit Third-Party Logins'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>Select which login methods users can use, eg: Facebook, Twitter, Google or Yahoo.
                  Click <a href="https://www.prophoto.com/support/twitter-api-credentials/">here</a> for an instructional to setup a Twitter application.
                  Click <a href="https://developers.facebook.com/docs/apps/register">here</a> for an instructional to setup a Facebook application.
                  Click <a href="https://developers.google.com/identity/protocols/OpenIDConnect?hl=en#appsetup">here</a> for an instructional on setting up a Google application.
                  Click <a href="https://developer.yahoo.com/oauth/guide/oauth-auth-flow.html">here</a> for instructions on creating a Yahoo application.</p>',
  );

  $form['front_page_feed'] = array(
    '#type' => 'fieldset',
    '#title' => t('Manage front page feed'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['front_page_feed'][] = array(
    '#type' => 'button',
    '#value' => t('Configure content types to display'),
    '#executes_submit_callback' => TRUE,
    '#prefix' => $prefix,
    '#suffix' => '<p>You can configure the content type to be displayed on
      the feed displayed at the bottom of the front page. Click on the button above and go to the "FILTER CRITERIA" part. Then click on "Content:type", select the content types that you want to see on the front pahe, then save and save the view.</p></div>',
  );

  return $form;
}

/**
 * Submission handler for configure amani form.
 */
function amani_administrator_configure_amani_form_submit($form, &$form_state) {
  switch ($form_state['clicked_button']['#value']) {
    case 'Configuration Documentation':
      drupal_goto('http://projectamani.org/content/administer-content-amani-admins-only');
      break;
    case 'Content Management Documentation':
      drupal_goto('http://projectamani.org/content/manage-content-amani-admins-editors-contributors');
      break;
    case 'Configure Spambot':
      module_enable(array('spambot'));
      drupal_goto('admin/config/system/spambot');
      break;
    case 'Configure Honeypot':
      module_enable(array('honeypot'));
      drupal_goto('admin/config/content/honeypot');
      break;
    case 'Manage Languages':
      drupal_goto('admin/config/regional/language');
      break;
    case 'Translate Strings':
      drupal_goto('admin/config/regional/translate/translate');
      break;
    case 'Reset Default Links':
      amani_administrator_create_menu_links('menu-social-media');
      drupal_set_message('Menu link paths can now be configured ' . l('here', 'admin/structure/menu/manage/menu-social-media'));
      break;
    case 'Reset Default Menu Links':
      amani_administrator_create_menu_links('menu-amani-main-menu');
      drupal_set_message('Menu link paths can now be configured ' . l('here', 'admin/structure/menu/manage/menu-amani-main-menu'));
      break;
    case 'Reset Default Meta Menu Links':
      amani_administrator_create_menu_links('menu-meta');
      drupal_set_message('Menu link paths can now be configured ' . l('here', 'admin/structure/menu/manage/menu-meta'));
      break;
    case 'Configure Social Media Icons':
      drupal_goto('admin/structure/menu/manage/menu-social-media');
      break;
    case 'Configure Main Menu Links':
      drupal_goto('admin/structure/menu/manage/menu-amani-main-menu');
      break;
    case 'Configure Meta Menu Links':
      drupal_goto('admin/structure/menu/manage/menu-meta');
      break;
    case 'Configure Floating Button':
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
    case 'Enable \'Upcoming Events\'':
      variable_set('amani_admin_events_show', 1);
      break;
    case 'Disable \'Upcoming Events\'':
      variable_set('amani_admin_events_show', 0);
      break;
    case 'Enable \'Social Media Feeds\'':
      variable_set('amani_admin_social_show', 1);
      break;
    case 'Disable \'Social Media Feeds\'':
      variable_set('amani_admin_social_show', 0);
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
    case 'Disable \'Get Involved\'':
      variable_set('amani_admin_get_involved_show', 0);
      break;
    case 'Enable \'Get Involved\'':
      variable_set('amani_admin_get_involved_show', 1);
      break;
    case 'Manage Logo & Tagline':
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
    case 'Enable Facebook Feed':
      variable_set('amani_admin_fb_likebox_show', 1);
      break;
    case 'Disable Facebook Feed':
      variable_set('amani_admin_fb_likebox_show', 0);
      break;
    case 'Configure Redhen':
      drupal_goto('redhen');
      break;
    case 'Configure Contact Form':
      drupal_goto('admin/structure/contact');
      break;
    case 'Configure CSS':
      drupal_goto('admin/config/development/css-injector');
      break;
    case 'View Amani Release Notes':
      drupal_goto('admin/configure-amani/release-notes');
      break;
    case 'Change Image':
      drupal_goto('node/add/image-behind-twitter-fb-cal-bloc');
      break;
    case 'Edit Third-Party Logins':
      drupal_goto('admin/config/people/hybridauth');
      break;
    case 'Configure content types to display':
      drupal_goto('admin/structure/views/view/news_and_events/edit/block_1');
      break;
  }
}

function amani_administrator_configure_comments_form() {
  $form = array();
  
  $comment_en_dis = variable_get('comment_en_dis');
  
  $form['comment_en_dis'] = array(
    '#type' => 'checkbox',
    '#title' => t('Comment Enable'),
    '#default_value' => $comment_en_dis,
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Save Configuration',
  );
  
  return $form;
}

function amani_administrator_configure_comments_form_submit($form, &$form_state) {
  variable_set('comment_en_dis', $form_state['input']['comment_en_dis']);
  $content_types = node_type_get_types();
  foreach ($content_types as $key => $val) {
    if ($form_state['input']['comment_en_dis'] == 1) {
      $result = 2;
    }
    else {
      $result = 0;
    }
    db_update('node')
      ->fields(array(
        'comment' => $result,
      ))
      ->condition('type', $key)
      ->execute();
      
    $sql = "UPDATE node_revision nrev
            INNER JOIN node nd ON nrev.nid = nd.nid AND nd.type = :type1
            SET nrev.comment = :type2";
    
    $args = array(':type1' => $key, ':type2' => $result);
    db_query($sql, $args);
  }
  cache_clear_all();
}
