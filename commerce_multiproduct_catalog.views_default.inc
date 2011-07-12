<?php
/**
 * @file
 * commerce_multiproduct_catalog.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function commerce_multiproduct_catalog_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'catalog';
  $view->description = '';
  $view->tag = 'catalog';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Серия продуктов';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'подпродукты, full';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_product_picture_1' => 'field_product_picture_1',
    'operations' => 0,
    'field_product_picture' => 0,
    'commerce_price' => 0,
    'add_to_cart_form' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_product_picture_1' => 'field_product_picture_1',
    'operations' => 0,
    'field_product_picture' => 0,
    'commerce_price' => 0,
    'add_to_cart_form' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '1500';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Commerce Product: Группа продуктов (field_product_series) */
  $handler->display->display_options['relationships']['field_product_series_nid']['id'] = 'field_product_series_nid';
  $handler->display->display_options['relationships']['field_product_series_nid']['table'] = 'field_data_field_product_series';
  $handler->display->display_options['relationships']['field_product_series_nid']['field'] = 'field_product_series_nid';
  $handler->display->display_options['relationships']['field_product_series_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_product_series_nid']['delta'] = '-1';
  /* Field: Commerce Product: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['label'] = '';
  $handler->display->display_options['fields']['operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['operations']['hide_alter_empty'] = 0;
  /* Field: Commerce Product: Изображение */
  $handler->display->display_options['fields']['field_product_picture']['id'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['table'] = 'field_data_field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['field'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['label'] = '';
  $handler->display->display_options['fields']['field_product_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_picture']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_picture']['field_api_classes'] = 0;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['external'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['html'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['hide_empty'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['empty_zero'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['commerce_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['commerce_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['commerce_price']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_price']['field_api_classes'] = 0;
  /* Field: Иконка для пейджера */
  $handler->display->display_options['fields']['field_product_picture_1']['id'] = 'field_product_picture_1';
  $handler->display->display_options['fields']['field_product_picture_1']['table'] = 'field_data_field_product_picture';
  $handler->display->display_options['fields']['field_product_picture_1']['field'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture_1']['ui_name'] = 'Иконка для пейджера';
  $handler->display->display_options['fields']['field_product_picture_1']['label'] = '';
  $handler->display->display_options['fields']['field_product_picture_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_picture_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_picture_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_picture_1']['settings'] = array(
    'image_style' => 'product_icons',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_picture_1']['field_api_classes'] = 0;
  /* Contextual filter: Commerce Product: Группа продуктов (field_product_series) */
  $handler->display->display_options['arguments']['field_product_series_nid']['id'] = 'field_product_series_nid';
  $handler->display->display_options['arguments']['field_product_series_nid']['table'] = 'field_data_field_product_series';
  $handler->display->display_options['arguments']['field_product_series_nid']['field'] = 'field_product_series_nid';
  $handler->display->display_options['arguments']['field_product_series_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_product_series_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_product_series_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_product_series_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_product_series_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_product_series_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_product_series_nid']['not'] = 0;

  /* Display: EC - серия продуктов - full */
  $handler = $view->new_display('entity_view', 'EC - серия продуктов - full', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'product_series',
  );

  /* Display: EC - единичный продукт */
  $handler = $view->new_display('entity_view', 'EC - единичный продукт', 'entity_view_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'единичный подпродукт';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['operations']['hide_alter_empty'] = 0;
  /* Field: Commerce Product: Изображение */
  $handler->display->display_options['fields']['field_product_picture']['id'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['table'] = 'field_data_field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['field'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_picture']['field_api_classes'] = 0;
  /* Field: Commerce Product: Описание */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = 'Цена';
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['commerce_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['commerce_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['commerce_price']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_price']['field_api_classes'] = 0;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['external'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['html'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['hide_empty'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['empty_zero'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'sole_product',
  );

  /* Display: EC - серия продуктов - teaser */
  $handler = $view->new_display('entity_view', 'EC - серия продуктов - teaser', 'entity_view_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'подпродукты, teaser';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Product: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['label'] = '';
  $handler->display->display_options['fields']['operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['operations']['hide_alter_empty'] = 0;
  /* Field: Commerce Product: Изображение */
  $handler->display->display_options['fields']['field_product_picture']['id'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['table'] = 'field_data_field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['field'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['label'] = '';
  $handler->display->display_options['fields']['field_product_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_product_picture']['field_api_classes'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['commerce_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['commerce_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['commerce_price']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_price']['field_api_classes'] = 0;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['external'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['html'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['hide_empty'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['empty_zero'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  /* Field: Иконка для пейджера */
  $handler->display->display_options['fields']['field_product_picture_1']['id'] = 'field_product_picture_1';
  $handler->display->display_options['fields']['field_product_picture_1']['table'] = 'field_data_field_product_picture';
  $handler->display->display_options['fields']['field_product_picture_1']['field'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture_1']['ui_name'] = 'Иконка для пейджера';
  $handler->display->display_options['fields']['field_product_picture_1']['label'] = '';
  $handler->display->display_options['fields']['field_product_picture_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_picture_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_picture_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_picture_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_picture_1']['field_api_classes'] = 0;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'product_series',
  );
  $translatables['catalog'] = array(
    t('Master'),
    t('подпродукты, full'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_product_series'),
    t('All'),
    t('EC - серия продуктов - full'),
    t('EC - единичный продукт'),
    t('единичный подпродукт'),
    t('Title'),
    t('Operations links'),
    t('Изображение'),
    t('Описание'),
    t('Цена'),
    t('Add to Cart form'),
    t('EC - серия продуктов - teaser'),
    t('подпродукты, teaser'),
  );
  $export['catalog'] = $view;

  $view = new view;
  $view->name = 'production_catalog';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Каталог продукции';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/product/[nid]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sole_product' => 'sole_product',
    'product_series' => 'product_series',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['production_catalog'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Title'),
    t('<a href="/product/[nid]">[title]</a>'),
    t('All'),
    t('%1'),
    t('Page'),
    t('Feed'),
  );
  $export['production_catalog'] = $view;

  return $export;
}
