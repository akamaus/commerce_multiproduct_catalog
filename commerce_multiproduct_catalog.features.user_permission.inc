<?php
/**
 * @file
 * commerce_multiproduct_catalog.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function commerce_multiproduct_catalog_user_default_permissions() {
  $permissions = array();

  // Exported permission: access checkout
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access toolbar
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: administer checkout
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: administer commerce_order entities
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(),
  );

  // Exported permission: administer commerce_product entities
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create commerce_order entities
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(),
  );

  // Exported permission: create commerce_order entities of bundle commerce_order
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(),
  );

  // Exported permission: create commerce_product entities
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(),
  );

  // Exported permission: create commerce_product entities of bundle product
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(),
  );

  // Exported permission: create product_series content
  $permissions['create product_series content'] = array(
    'name' => 'create product_series content',
    'roles' => array(),
  );

  // Exported permission: create sole_product content
  $permissions['create sole_product content'] = array(
    'name' => 'create sole_product content',
    'roles' => array(),
  );

  // Exported permission: delete any product_series content
  $permissions['delete any product_series content'] = array(
    'name' => 'delete any product_series content',
    'roles' => array(),
  );

  // Exported permission: delete any sole_product content
  $permissions['delete any sole_product content'] = array(
    'name' => 'delete any sole_product content',
    'roles' => array(),
  );

  // Exported permission: delete terms in 2
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
  );

  // Exported permission: edit any commerce_order entity
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(),
  );

  // Exported permission: edit any commerce_order entity of bundle commerce_order
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(),
  );

  // Exported permission: edit any commerce_product entity
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(),
  );

  // Exported permission: edit any commerce_product entity of bundle product
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(),
  );

  // Exported permission: edit any product_series content
  $permissions['edit any product_series content'] = array(
    'name' => 'edit any product_series content',
    'roles' => array(),
  );

  // Exported permission: edit any sole_product content
  $permissions['edit any sole_product content'] = array(
    'name' => 'edit any sole_product content',
    'roles' => array(),
  );

  // Exported permission: edit terms in 2
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
  );

  // Exported permission: view any commerce_order entity
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(),
  );

  // Exported permission: view any commerce_product entity
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle product
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(),
  );

  // Exported permission: view own commerce_order entities
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(),
  );

  // Exported permission: view own commerce_order entities of bundle commerce_order
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(),
  );

  return $permissions;
}
