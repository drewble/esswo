<?php
/**
 * @file
 * d7_base_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function d7_base_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/config
  $menu_links['management:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/help
  $menu_links['management:admin/help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Reference for usage, configuration, and modules.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'parent_path' => 'admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Configuration');
  t('Help');


  return $menu_links;
}
