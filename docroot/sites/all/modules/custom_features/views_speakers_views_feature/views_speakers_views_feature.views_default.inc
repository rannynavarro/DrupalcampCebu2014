<?php
/**
 * @file
 * views_speakers_views_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_speakers_views_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'speakers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Speakers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-3 speaker-info';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom_1']['id'] = 'area_text_custom_1';
  $handler->display->display_options['header']['area_text_custom_1']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom_1']['field'] = 'area_text_custom';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '</div>';
  /* Field: User: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-speaker';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'drupal-speakers',
    'image_link' => 'content',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_user_first_name']['element_class'] = 'speaker-name';
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_user_first_name']['element_default_classes'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = '[field_user_first_name] [field_user_last_name]';
  $handler->display->display_options['fields']['field_user_last_name']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_user_last_name']['element_class'] = 'speaker-name';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_last_name']['element_default_classes'] = FALSE;
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['label'] = '';
  $handler->display->display_options['fields']['field_user_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_company']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_user_company']['element_class'] = 'speaker-short-bio';
  $handler->display->display_options['fields']['field_user_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_company']['element_default_classes'] = FALSE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_user_position']['id'] = 'field_user_position';
  $handler->display->display_options['fields']['field_user_position']['table'] = 'field_data_field_user_position';
  $handler->display->display_options['fields']['field_user_position']['field'] = 'field_user_position';
  $handler->display->display_options['fields']['field_user_position']['label'] = '';
  $handler->display->display_options['fields']['field_user_position']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_position']['alter']['text'] = '[field_user_company] [field_user_position]';
  $handler->display->display_options['fields']['field_user_position']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_user_position']['element_class'] = 'speaker-short-bio';
  $handler->display->display_options['fields']['field_user_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_position']['element_default_classes'] = FALSE;
  /* Field: User: Biography */
  $handler->display->display_options['fields']['field_biography']['id'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['table'] = 'field_data_field_biography';
  $handler->display->display_options['fields']['field_biography']['field'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['label'] = '';
  $handler->display->display_options['fields']['field_biography']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['field_biography']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_biography']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_biography']['element_class'] = 'speaker-bio';
  $handler->display->display_options['fields']['field_biography']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'speakers_sorting_view:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'featured_speakers');
  $handler->display->display_options['path'] = 'speakers/featured';
  $export['speakers'] = $view;

  $view = new view();
  $view->name = 'speakers_sorting_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'speakers sorting view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'field_image',
    'field_user_first_name' => 'field_user_first_name',
    'field_user_last_name' => 'field_user_last_name',
    'field_user_company' => 'field_user_company',
    'field_user_position' => 'field_user_position',
    'field_biography' => 'field_biography',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_company' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_biography' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom_1']['id'] = 'area_text_custom_1';
  $handler->display->display_options['header']['area_text_custom_1']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom_1']['field'] = 'area_text_custom';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '</div>';
  /* Field: User: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'img-speaker';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'drupal-speakers',
    'image_link' => 'content',
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_user_first_name']['element_class'] = 'speaker-name';
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_user_first_name']['element_default_classes'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = '[field_user_first_name] [field_user_last_name]';
  $handler->display->display_options['fields']['field_user_last_name']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_user_last_name']['element_class'] = 'speaker-name';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_last_name']['element_default_classes'] = FALSE;
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['label'] = '';
  $handler->display->display_options['fields']['field_user_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_company']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_user_company']['element_class'] = 'speaker-short-bio';
  $handler->display->display_options['fields']['field_user_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_company']['element_default_classes'] = FALSE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_user_position']['id'] = 'field_user_position';
  $handler->display->display_options['fields']['field_user_position']['table'] = 'field_data_field_user_position';
  $handler->display->display_options['fields']['field_user_position']['field'] = 'field_user_position';
  $handler->display->display_options['fields']['field_user_position']['label'] = '';
  $handler->display->display_options['fields']['field_user_position']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_position']['alter']['text'] = '[field_user_company] [field_user_position]';
  $handler->display->display_options['fields']['field_user_position']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_user_position']['element_class'] = 'speaker-short-bio';
  $handler->display->display_options['fields']['field_user_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_position']['element_default_classes'] = FALSE;
  /* Field: User: Biography */
  $handler->display->display_options['fields']['field_biography']['id'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['table'] = 'field_data_field_biography';
  $handler->display->display_options['fields']['field_biography']['field'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['label'] = '';
  $handler->display->display_options['fields']['field_biography']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['field_biography']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_biography']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_biography']['element_class'] = 'speaker-bio';
  $handler->display->display_options['fields']['field_biography']['element_label_colon'] = FALSE;
  /* Field: Draggableviews: User */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'users';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'update';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/config/people/speaker-sorting';
  $export['speakers_sorting_view'] = $view;

  return $export;
}
