<?php
/**
 * @file
 * ew_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ew_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front Page/Homepage';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-homepage_feature-block' => array(
          'module' => 'views',
          'delta' => 'homepage_feature-block',
          'region' => 'hero',
          'weight' => '-10',
        ),
        'views--exp-songs-page' => array(
          'module' => 'views',
          'delta' => '-exp-songs-page',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-popular_content-block' => array(
          'module' => 'views',
          'delta' => 'popular_content-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-new_content-block' => array(
          'module' => 'views',
          'delta' => 'new_content-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-banners-banner_sidebar_top' => array(
          'module' => 'views',
          'delta' => 'banners-banner_sidebar_top',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-news-news_front' => array(
          'module' => 'views',
          'delta' => 'news-news_front',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page/Homepage');
  t('theme');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = 'Site Wide (All Pages)';
  $context->tag = 'theme';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-get-in-touch' => array(
          'module' => 'menu',
          'delta' => 'menu-get-in-touch',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'modal',
          'weight' => '-10',
        ),
        'formblock-user_register' => array(
          'module' => 'formblock',
          'delta' => 'user_register',
          'region' => 'modal',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site Wide (All Pages)');
  t('theme');
  $export['site_wide'] = $context;

  return $export;
}
