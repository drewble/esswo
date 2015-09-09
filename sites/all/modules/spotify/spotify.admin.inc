<?php
/**
 * @file
 * Provides administrative functions for the Spotify Metadata API module.
 */

/**
 * Settings forms.
 */
function spotify_settings() {
  $form = array();

  $form['empty'] = array(
    '#value' => t('No settings for this module at this time'),
  );

  return system_settings_form($form);
}
