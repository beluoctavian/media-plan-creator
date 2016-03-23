<?php
/**
 * @file
 * zeddigital_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function zeddigital_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: content manager.
  $roles['content manager'] = array(
    'name' => 'content manager',
    'weight' => 4,
  );

  // Exported role: super administrator.
  $roles['super administrator'] = array(
    'name' => 'super administrator',
    'weight' => 2,
  );

  // Exported role: supplier.
  $roles['supplier'] = array(
    'name' => 'supplier',
    'weight' => 5,
  );

  return $roles;
}
