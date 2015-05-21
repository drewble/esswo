<?php
/**
 * @file
 * d7_tpl_featurettes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function d7_tpl_featurettes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create featurettes content'.
  $permissions['create featurettes content'] = array(
    'name' => 'create featurettes content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any featurettes content'.
  $permissions['delete any featurettes content'] = array(
    'name' => 'delete any featurettes content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own featurettes content'.
  $permissions['delete own featurettes content'] = array(
    'name' => 'delete own featurettes content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any featurettes content'.
  $permissions['edit any featurettes content'] = array(
    'name' => 'edit any featurettes content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own featurettes content'.
  $permissions['edit own featurettes content'] = array(
    'name' => 'edit own featurettes content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
