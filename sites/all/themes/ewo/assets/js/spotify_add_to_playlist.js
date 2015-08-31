(function() {
  (function($) {
    return $(function() {
      var addTracksToPlaylist, createPlaylist, doit, g_access_token, g_tracks, g_username, getUsername;
      g_access_token = '';
      g_username = '';
      g_tracks = [];
      getUsername = function(callback) {
        var url;
        url = 'https://api.spotify.com/v1/me';
        $.ajax(url, {
          dataType: 'json',
          headers: {
            'Authorization': 'Bearer ' + g_access_token
          },
          success: function(r) {
            callback(r.id);
          },
          error: function(r) {
            callback(null);
          }
        });
      };
      createPlaylist = function(username, name, callback) {
        var url;
        url = 'https://api.spotify.com/v1/users/' + username + '/playlists';
        return $.ajax(url, {
          type: 'GET',
          dataType: 'json',
          async: false,
          headers: {
            'Authorization': 'Bearer ' + g_access_token,
            'Content-Type': 'application/json'
          },
          success: function(r) {
            var i, spotify_id;
            i = 0;
            spotify_id = '';
            while (i < r.items.length) {
              if (r.items[i].name === 'Essential Worship') {
                spotify_id = r.items[i].id;
              }
              i++;
            }
            if (spotify_id.length === 0) {
              $('#creating h1').text('Creating Playlist');
              $.ajax(url, {
                method: 'POST',
                data: JSON.stringify({
                  'name': name,
                  'public': false
                }),
                dataType: 'json',
                headers: {
                  'Authorization': 'Bearer ' + g_access_token,
                  'Content-Type': 'application/json'
                },
                success: function(r) {
                  callback(r.id);
                },
                error: function(r) {
                  callback(null);
                }
              });
            } else {
              $('#creating h1').text('Found Playlist');
              return callback(spotify_id);
            }
          }
        });
      };
      addTracksToPlaylist = function(username, playlist, tracks, callback) {
        var url;
        url = 'https://api.spotify.com/v1/users/' + username + '/playlists/' + playlist + '/tracks';
        $.ajax(url, {
          method: 'POST',
          data: JSON.stringify(tracks),
          dataType: 'text',
          headers: {
            'Authorization': 'Bearer ' + g_access_token,
            'Content-Type': 'application/json'
          },
          success: function(r) {
            callback(r.id);
          },
          error: function(r) {
            callback(null);
          }
        });
      };
      doit = function() {
        var all, args, g_name, hash;
        hash = location.hash.replace(/#/g, '');
        all = hash.split('&');
        args = {};
        all.forEach(function(keyvalue) {
          var idx, key, val;
          idx = keyvalue.indexOf('=');
          key = keyvalue.substring(0, idx);
          val = keyvalue.substring(idx + 1);
          args[key] = val;
        });
        g_name = localStorage.getItem('spotifyplaylist-name');
        g_tracks = JSON.parse(localStorage.getItem('spotifyplaylist-tracks'));
        if (typeof args['access_token'] !== 'undefined') {
          g_access_token = args['access_token'];
        }
        getUsername(function(username) {
          createPlaylist(username, g_name, function(playlist) {
            addTracksToPlaylist(username, playlist, g_tracks, function() {
              $('#playlistlink').attr('href', 'spotify:user:' + username + ':playlist:' + playlist);
              $('#creating').hide();
              $('#done').show();
            });
          });
        });
      };
      return doit();
    });
  })(jQuery);

}).call(this);
