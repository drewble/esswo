<?php
/**
 * @file
 * d7_base_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function d7_base_feature_user_default_roles() {
  $roles = array();

  // Exported role: client.
  $roles['client'] = array(
    'name' => 'client',
    'weight' => 2,
  );

  return $roles;
}
