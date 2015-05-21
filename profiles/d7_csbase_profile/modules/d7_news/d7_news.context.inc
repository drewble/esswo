<?php
/**
 * @file
 * d7_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function d7_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_news_block';
  $context->description = 'Places Home News Block';
  $context->tag = 'default layout';
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
        'views-news-news_front' => array(
          'module' => 'views',
          'delta' => 'news-news_front',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places Home News Block');
  t('default layout');
  $export['home_news_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_block';
  $context->description = 'Places sidebar news block';
  $context->tag = 'default layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~<front>' => '~<front>',
        '~news' => '~news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-news_sidebar' => array(
          'module' => 'views',
          'delta' => 'news-news_sidebar',
          'region' => 'aside',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places sidebar news block');
  t('default layout');
  $export['news_block'] = $context;

  return $export;
}
