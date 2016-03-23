<?php
/**
 * @file
 * zeddigital_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function zeddigital_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'media_plans';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media plans';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media plans';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_brand' => 'field_brand',
    'field_campaign' => 'field_campaign',
    'field_categories' => 'field_categories',
    'field_client' => 'field_client',
    'field_media_target_audience' => 'field_media_target_audience',
    'field_period' => 'field_period',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_brand' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_campaign' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_categories' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_client' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_media_target_audience' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Campaign */
  $handler->display->display_options['fields']['field_campaign']['id'] = 'field_campaign';
  $handler->display->display_options['fields']['field_campaign']['table'] = 'field_data_field_campaign';
  $handler->display->display_options['fields']['field_campaign']['field'] = 'field_campaign';
  $handler->display->display_options['fields']['field_campaign']['type'] = 'text_plain';
  /* Field: Content: Categories */
  $handler->display->display_options['fields']['field_categories']['id'] = 'field_categories';
  $handler->display->display_options['fields']['field_categories']['table'] = 'field_data_field_categories';
  $handler->display->display_options['fields']['field_categories']['field'] = 'field_categories';
  $handler->display->display_options['fields']['field_categories']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categories']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_categories']['delta_offset'] = '0';
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_client']['id'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['table'] = 'field_data_field_client';
  $handler->display->display_options['fields']['field_client']['field'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['type'] = 'text_plain';
  /* Field: Content: Media Target Audience */
  $handler->display->display_options['fields']['field_media_target_audience']['id'] = 'field_media_target_audience';
  $handler->display->display_options['fields']['field_media_target_audience']['table'] = 'field_data_field_media_target_audience';
  $handler->display->display_options['fields']['field_media_target_audience']['field'] = 'field_media_target_audience';
  $handler->display->display_options['fields']['field_media_target_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_media_target_audience']['delta_offset'] = '0';
  /* Field: Content: Period */
  $handler->display->display_options['fields']['field_period']['id'] = 'field_period';
  $handler->display->display_options['fields']['field_period']['table'] = 'field_data_field_period';
  $handler->display->display_options['fields']['field_period']['field'] = 'field_period';
  $handler->display->display_options['fields']['field_period']['settings'] = array(
    'format_type' => 'day_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Linked suppliers users (field_linked_suppliers_users) */
  $handler->display->display_options['arguments']['field_linked_suppliers_users_value']['id'] = 'field_linked_suppliers_users_value';
  $handler->display->display_options['arguments']['field_linked_suppliers_users_value']['table'] = 'field_data_field_linked_suppliers_users';
  $handler->display->display_options['arguments']['field_linked_suppliers_users_value']['field'] = 'field_linked_suppliers_users_value';
  $handler->display->display_options['arguments']['field_linked_suppliers_users_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_linked_suppliers_users_value']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_linked_suppliers_users_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_linked_suppliers_users_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_linked_suppliers_users_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_linked_suppliers_users_value']['limit'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media_plan' => 'media_plan',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'ID';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Brand (field_brand) */
  $handler->display->display_options['filters']['field_brand_tid']['id'] = 'field_brand_tid';
  $handler->display->display_options['filters']['field_brand_tid']['table'] = 'field_data_field_brand';
  $handler->display->display_options['filters']['field_brand_tid']['field'] = 'field_brand_tid';
  $handler->display->display_options['filters']['field_brand_tid']['value'] = '';
  $handler->display->display_options['filters']['field_brand_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_brand_tid']['expose']['operator_id'] = 'field_brand_tid_op';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['label'] = 'Brand';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['operator'] = 'field_brand_tid_op';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['identifier'] = 'field_brand_tid';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_brand_tid']['vocabulary'] = 'brands';
  $handler->display->display_options['filters']['field_brand_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Campaign (field_campaign) */
  $handler->display->display_options['filters']['field_campaign_value']['id'] = 'field_campaign_value';
  $handler->display->display_options['filters']['field_campaign_value']['table'] = 'field_data_field_campaign';
  $handler->display->display_options['filters']['field_campaign_value']['field'] = 'field_campaign_value';
  $handler->display->display_options['filters']['field_campaign_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_campaign_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campaign_value']['expose']['operator_id'] = 'field_campaign_value_op';
  $handler->display->display_options['filters']['field_campaign_value']['expose']['label'] = 'Campaign';
  $handler->display->display_options['filters']['field_campaign_value']['expose']['operator'] = 'field_campaign_value_op';
  $handler->display->display_options['filters']['field_campaign_value']['expose']['identifier'] = 'field_campaign_value';
  $handler->display->display_options['filters']['field_campaign_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Client (field_client) */
  $handler->display->display_options['filters']['field_client_value']['id'] = 'field_client_value';
  $handler->display->display_options['filters']['field_client_value']['table'] = 'field_data_field_client';
  $handler->display->display_options['filters']['field_client_value']['field'] = 'field_client_value';
  $handler->display->display_options['filters']['field_client_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_client_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_value']['expose']['operator_id'] = 'field_client_value_op';
  $handler->display->display_options['filters']['field_client_value']['expose']['label'] = 'Client';
  $handler->display->display_options['filters']['field_client_value']['expose']['operator'] = 'field_client_value_op';
  $handler->display->display_options['filters']['field_client_value']['expose']['identifier'] = 'field_client_value';
  $handler->display->display_options['filters']['field_client_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Media Target Audience (field_media_target_audience) */
  $handler->display->display_options['filters']['field_media_target_audience_tid']['id'] = 'field_media_target_audience_tid';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['table'] = 'field_data_field_media_target_audience';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['field'] = 'field_media_target_audience_tid';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['operator_id'] = 'field_media_target_audience_tid_op';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['label'] = 'Media Target Audience';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['operator'] = 'field_media_target_audience_tid_op';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['identifier'] = 'field_media_target_audience_tid';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_media_target_audience_tid']['vocabulary'] = 'media_target_audience';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Home page */
  $handler = $view->new_display('page', 'Home page', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'media-plans';

  /* Display: Supplier's media plans */
  $handler = $view->new_display('page', 'Supplier\'s media plans', 'page_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media_plan' => 'media_plan',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'ID';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Brand (field_brand) */
  $handler->display->display_options['filters']['field_brand_tid']['id'] = 'field_brand_tid';
  $handler->display->display_options['filters']['field_brand_tid']['table'] = 'field_data_field_brand';
  $handler->display->display_options['filters']['field_brand_tid']['field'] = 'field_brand_tid';
  $handler->display->display_options['filters']['field_brand_tid']['value'] = '';
  $handler->display->display_options['filters']['field_brand_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_brand_tid']['expose']['operator_id'] = 'field_brand_tid_op';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['label'] = 'Brand';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['operator'] = 'field_brand_tid_op';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['identifier'] = 'field_brand_tid';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_brand_tid']['vocabulary'] = 'brands';
  $handler->display->display_options['filters']['field_brand_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Campaign (field_campaign) */
  $handler->display->display_options['filters']['field_campaign_value']['id'] = 'field_campaign_value';
  $handler->display->display_options['filters']['field_campaign_value']['table'] = 'field_data_field_campaign';
  $handler->display->display_options['filters']['field_campaign_value']['field'] = 'field_campaign_value';
  $handler->display->display_options['filters']['field_campaign_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_campaign_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campaign_value']['expose']['operator_id'] = 'field_campaign_value_op';
  $handler->display->display_options['filters']['field_campaign_value']['expose']['label'] = 'Campaign';
  $handler->display->display_options['filters']['field_campaign_value']['expose']['operator'] = 'field_campaign_value_op';
  $handler->display->display_options['filters']['field_campaign_value']['expose']['identifier'] = 'field_campaign_value';
  $handler->display->display_options['filters']['field_campaign_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Client (field_client) */
  $handler->display->display_options['filters']['field_client_value']['id'] = 'field_client_value';
  $handler->display->display_options['filters']['field_client_value']['table'] = 'field_data_field_client';
  $handler->display->display_options['filters']['field_client_value']['field'] = 'field_client_value';
  $handler->display->display_options['filters']['field_client_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_client_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_value']['expose']['operator_id'] = 'field_client_value_op';
  $handler->display->display_options['filters']['field_client_value']['expose']['label'] = 'Client';
  $handler->display->display_options['filters']['field_client_value']['expose']['operator'] = 'field_client_value_op';
  $handler->display->display_options['filters']['field_client_value']['expose']['identifier'] = 'field_client_value';
  $handler->display->display_options['filters']['field_client_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Media Target Audience (field_media_target_audience) */
  $handler->display->display_options['filters']['field_media_target_audience_tid']['id'] = 'field_media_target_audience_tid';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['table'] = 'field_data_field_media_target_audience';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['field'] = 'field_media_target_audience_tid';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['operator_id'] = 'field_media_target_audience_tid_op';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['label'] = 'Media Target Audience';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['operator'] = 'field_media_target_audience_tid_op';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['identifier'] = 'field_media_target_audience_tid';
  $handler->display->display_options['filters']['field_media_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_media_target_audience_tid']['vocabulary'] = 'media_target_audience';
  /* Filter criterion: Content: Linked suppliers users (field_linked_suppliers_users) */
  $handler->display->display_options['filters']['field_linked_suppliers_users_value']['id'] = 'field_linked_suppliers_users_value';
  $handler->display->display_options['filters']['field_linked_suppliers_users_value']['table'] = 'field_data_field_linked_suppliers_users';
  $handler->display->display_options['filters']['field_linked_suppliers_users_value']['field'] = 'field_linked_suppliers_users_value';
  $handler->display->display_options['path'] = 'supplier-media-plans';
  $export['media_plans'] = $view;

  return $export;
}
