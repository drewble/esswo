<?php

/**
 * @file
 * Implementation of Spotify API methods.
 */
/**
 * Spotify web services.
 */
define('SPOTIFY_LOOKUP_WS', 'http://ws.spotify.com/lookup/1/.json');
define('SPOTIFY_SEARCH_WS', 'http://ws.spotify.com/search/1/');
define('SPOTIFY_IMAGE', 'https://embed.spotify.com/oembed/');

/**
 * Filter results based on territorial settings.
 *
 * @todo: fix this.
 */
function _spotify_filter_results($results, $what) {
  $selected_territories = variable_get('spotify_territories', NULL);
  if (is_null($selected_territories) || empty($selected_territories)) {
    return $results;
  }
  $selected_territories = explode(',', $selected_territories);
  if ($what == 'album') {

    foreach ($results['albums'] as $album) {
      if (!strpos($album['availability']['territories'], 'SE') === false) {
        $albumsfiltred[] = $album;
      }
    }
    if (isset($albumsfiltred)) {
      $results['albums'] = $albumsfiltred;

      return $results;
    }
  } else {
    return $results;
  }
}

/**
 * Perform request to Spotify Metadata API.
 *
 * @param $url
 *   Web service URL.
 * @return
 *   XML response on success or FALSE on failure.
 */
function _spotify_request($url) {
  // Generate cache key.
  $key = md5($url);
  // Check cache for query.
  $response = cache_get($key, 'cache');
  // No cache found, do request.
  if (!$response) {

    // Make request.
    $response = drupal_http_request($url, array(), 'GET', NULL, 3);

    // Check response.
    if ($response->code != 200) {
      watchdog('spotify', $response->error);
      return FALSE;
    } else {
      // Set cache item.
      cache_set($key, $response, 'cache');

      $response = cache_get($key, 'cache');
    }
  }

  return $response->data;
}

/**
 * Perform search.
 *
 * @param $what
 *   Type of search: album, artist or track; required.
 * @param $q
 *   Search string encoded in UTF-8; required.
 * @param $page
 *   The page of the result set to return; defaults to 1.
 * @return
 *   json response on success or FALSE on failure.
 */
function _spotify_search($what, $q, $page = 1) {
  if (strlen($q) < 3) {
    return FALSE;
  }
  $url = SPOTIFY_SEARCH_WS . $what . '.json?q=' . $q . '&page=' . $page;
  $results = _spotify_request($url);
  if (isset($results->data)) {
    $result = drupal_json_decode($results->data);
    $resultfiltred = _spotify_filter_results($result, $what);
    return $resultfiltred;
  }
}

/**
 * Perform lookup.
 *
 * @param $what
 *   Type of lookup: album, artist or track; required.
 * @param $uri
 *   A Spotify URI; required.
 * @param $extras
 *   A comma-separated list of words that defines the detail level expected in
 *   the response. Either album or albumdetail.
 */
function spotify_lookup($uri, $extras = NULL) {
  // Assemble url.
  $url = SPOTIFY_LOOKUP_WS . '?uri=' . $uri;
  if (!is_null($extras)) {
    $url .= '&extras=' . $extras;
  }
  return _spotify_request($url);
}

/**
 * Search album.
 *
 * @param $q
 *   Search string encoded in UTF-8; required.
 * @param $page
 *   The page of the result set to return; defaults to 1.
 */
function spotify_search_album($q, $page = 1) {

  return _spotify_search('album', $q, $page);
}

/**
 * Search artist.
 *
 * @param $q
 *   Search string encoded in UTF-8; required.
 * @param $page
 *   The page of the result set to return; defaults to 1.
 */
function spotify_search_artist($q, $page = 1) {
  return _spotify_search('artist', $q, $page);
}

/**
 * Search track.
 *
 * @param $q
 *   Search string encoded in UTF-8; required.
 * @param $page
 *   The page of the result set to return; defaults to 1.
 */
function spotify_search_track($q, $page = 1) {
  return _spotify_search('track', $q, $page);
}
