<?php
/**
 * @file
 * awp_redhen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function awp_redhen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'redhen_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_contact';
  $view->human_name = 'Redhen Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Redhen Contacts';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'combine' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'bef_placeholder' => '',
      ),
    ),
    'field_aid_watch_engagement_value_i18n' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'bef_placeholder' => '',
      ),
    ),
    'field_subscribe_value_i18n' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'bef_placeholder' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'first_name' => 'first_name',
    'last_name' => 'last_name',
    'redhen_contact_email' => 'redhen_contact_email',
    'field_location' => 'field_location',
    'field_organization' => 'field_organization',
    'field_subscribe' => 'field_subscribe',
    'field_be_part_of_aid_watch' => 'field_be_part_of_aid_watch',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'redhen_contact_email' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subscribe' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_be_part_of_aid_watch' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Contact: First name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['element_label_colon'] = FALSE;
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['element_label_colon'] = FALSE;
  /* Field: Contact: Email */
  $handler->display->display_options['fields']['redhen_contact_email']['id'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['table'] = 'field_data_redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['field'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['redhen_contact_email']['alter']['text'] = '[redhen_contact_email-value]';
  $handler->display->display_options['fields']['redhen_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['redhen_contact_email']['delta_offset'] = '0';
  /* Field: Contact: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Contact: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  /* Field: Field: Mobile */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'redhen/contact/[contact_id]/view/edit?destination=redhen-contacts';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Searches on First Name, Last Name, Email & Organization';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'first_name' => 'first_name',
    'last_name' => 'last_name',
    'redhen_contact_email' => 'redhen_contact_email',
    'field_organization' => 'field_organization',
  );
  /* Filter criterion: Contact: Aid Watch Engagement (field_aid_watch_engagement) (translated) */
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['id'] = 'field_aid_watch_engagement_value_i18n';
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['table'] = 'field_data_field_aid_watch_engagement';
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['field'] = 'field_aid_watch_engagement_value_i18n';
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['value'] = array(
    'I want to donate or volunteer. Please contact me.' => 'I want to donate or volunteer. Please contact me.',
    'I have information about aid to share confidentially. Please contact me.' => 'I have information about aid to share confidentially. Please contact me.',
    'My aid/civil society/government/private sector organization would like to get involved. Please contact me.' => 'My aid/civil society/government/private sector organization would like to get involved. Please contact me.',
    'I have a new resource to suggest for your database or want to request a translation (please provide details).' => 'I have a new resource to suggest for your database or want to request a translation (please provide details).',
    'Other' => 'Other',
  );
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['expose']['operator_id'] = 'field_aid_watch_engagement_value_i18n_op';
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['expose']['label'] = 'Aid Watch Engagement';
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['expose']['operator'] = 'field_aid_watch_engagement_value_i18n_op';
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['expose']['identifier'] = 'field_aid_watch_engagement_value_i18n';
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['group_info']['label'] = 'Aid Watch Engagement (field_aid_watch_engagement) (translated)';
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['group_info']['identifier'] = 'field_aid_watch_engagement_value_i18n';
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_aid_watch_engagement_value_i18n']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Contact: Subscribe (field_subscribe) (translated) */
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['id'] = 'field_subscribe_value_i18n';
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['table'] = 'field_data_field_subscribe';
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['field'] = 'field_subscribe_value_i18n';
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['value'] = array(
    'subscribe_english' => 'subscribe_english',
    'subscribe_arabic' => 'subscribe_arabic',
  );
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['expose']['operator_id'] = 'field_subscribe_value_i18n_op';
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['expose']['label'] = 'Subscription Status';
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['expose']['operator'] = 'field_subscribe_value_i18n_op';
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['expose']['identifier'] = 'field_subscribe_value_i18n';
  $handler->display->display_options['filters']['field_subscribe_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  /* Filter criterion: Contact: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'redhen_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personalcontact' => 'personalcontact',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/redhen/contact/add/personalcontact?destination=redhen-contacts">Create Contact</a> | <a href="/redhen/dedupe">Dedupe Contacts</a></h3>
';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg_advanced';
  $handler->display->display_options['path'] = 'redhen-contacts';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contact: First name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['element_label_colon'] = FALSE;
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['element_label_colon'] = FALSE;
  /* Field: Contact: Email */
  $handler->display->display_options['fields']['redhen_contact_email']['id'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['table'] = 'field_data_redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['field'] = 'redhen_contact_email';
  $handler->display->display_options['fields']['redhen_contact_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['redhen_contact_email']['alter']['text'] = '[redhen_contact_email-value]';
  $handler->display->display_options['fields']['redhen_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['redhen_contact_email']['delta_offset'] = '0';
  /* Field: Contact: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Contact: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  /* Field: Field: Mobile */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'redhen-contacts.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['redhen_contact'] = $view;

  return $export;
}
