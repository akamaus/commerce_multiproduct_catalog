<?php
/**
 * @file
 * commerce_multiproduct_catalog.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function commerce_multiproduct_catalog_user_default_roles() {
  $roles = array();

  // Exported role: store manager
  $roles['store manager'] = array(
    'name' => 'store manager',
    'weight' => '4',
  );

  return $roles;
}
