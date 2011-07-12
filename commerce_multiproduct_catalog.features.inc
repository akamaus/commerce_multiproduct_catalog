<?php
/**
 * @file
 * commerce_multiproduct_catalog.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function commerce_multiproduct_catalog_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function commerce_multiproduct_catalog_image_default_styles() {
  $styles = array();

  // Exported image style: product_icons
  $styles['product_icons'] = array(
    'name' => 'product_icons',
    'effects' => array(
      3 => array(
        'label' => 'Масштабирование',
        'help' => 'Масштабирование позволяет изменить размеры изображения с сохранением пропорций. Если введён размер только одной стороны, то размер другой будет вычислен автоматически. Если введены два размера, то каждое будет определять максимальный размер по своему направлению и применяться в зависимости от формата изображения.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '75',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
 */
function commerce_multiproduct_catalog_node_info() {
  $items = array(
    'product_series' => array(
      'name' => t('Серия продуктов'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sole_product' => array(
      'name' => t('Единица продукта'),
      'base' => 'node_content',
      'description' => t('Продукты, выставляемые по отдельности'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
