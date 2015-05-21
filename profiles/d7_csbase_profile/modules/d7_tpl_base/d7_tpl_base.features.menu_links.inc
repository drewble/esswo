<?php
/**
 * @file
 * d7_tpl_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function d7_tpl_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-switch-themes_basic-color:<front>
  $menu_links['menu-switch-themes_basic-color:<front>'] = array(
    'menu_name' => 'menu-switch-themes',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Basic Color',
    'options' => array(
      'query' => array(
        'display' => 'refills1',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-switch-themes_basic-color:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-switch-themes_full-color:<front>
  $menu_links['menu-switch-themes_full-color:<front>'] = array(
    'menu_name' => 'menu-switch-themes',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Full Color',
    'options' => array(
      'query' => array(
        'display' => 'refills4',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-switch-themes_full-color:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-switch-themes_simple--color:<front>
  $menu_links['menu-switch-themes_simple--color:<front>'] = array(
    'menu_name' => 'menu-switch-themes',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Simple + Color',
    'options' => array(
      'query' => array(
        'display' => 'refills3',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-switch-themes_simple--color:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-switch-themes_simple:<front>
  $menu_links['menu-switch-themes_simple:<front>'] = array(
    'menu_name' => 'menu-switch-themes',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Simple',
    'options' => array(
      'query' => array(
        'display' => 'refills2',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-switch-themes_simple:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Color');
  t('Full Color');
  t('Simple');
  t('Simple + Color');


  return $menu_links;
}
