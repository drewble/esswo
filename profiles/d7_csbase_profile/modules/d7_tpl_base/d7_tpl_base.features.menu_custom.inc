<?php
/**
 * @file
 * d7_tpl_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function d7_tpl_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-switch-themes.
  $menus['menu-switch-themes'] = array(
    'menu_name' => 'menu-switch-themes',
    'title' => 'Switch Themes',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Switch Themes');


  return $menus;
}
