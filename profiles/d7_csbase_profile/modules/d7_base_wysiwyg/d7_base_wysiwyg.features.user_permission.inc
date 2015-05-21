<?php
/**
 * @file
 * d7_base_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function d7_base_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer ckeditor link'.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'administer media wysiwyg view mode'.
  $permissions['administer media wysiwyg view mode'] = array(
    'name' => 'administer media wysiwyg view mode',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'media_wysiwyg_view_mode',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'ckeditor',
  );

  return $permissions;
}
