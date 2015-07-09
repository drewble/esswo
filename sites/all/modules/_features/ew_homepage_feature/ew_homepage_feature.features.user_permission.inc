<?php
/**
 * @file
 * ew_homepage_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ew_homepage_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create homepage_feature content'.
  $permissions['create homepage_feature content'] = array(
    'name' => 'create homepage_feature content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any homepage_feature content'.
  $permissions['delete any homepage_feature content'] = array(
    'name' => 'delete any homepage_feature content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own homepage_feature content'.
  $permissions['delete own homepage_feature content'] = array(
    'name' => 'delete own homepage_feature content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any homepage_feature content'.
  $permissions['edit any homepage_feature content'] = array(
    'name' => 'edit any homepage_feature content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own homepage_feature content'.
  $permissions['edit own homepage_feature content'] = array(
    'name' => 'edit own homepage_feature content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
