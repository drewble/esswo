(function() {
  (function($) {
    return $(function() {
      var client_id, g_access_token, g_name, g_tracks, g_username, hash, redirect_uri, spotifyLogin;
      g_access_token = '';
      g_name = 'Essential Worship';
      g_username = '';
      g_tracks = [$('.field-type-spotifyfield iframe').attr('src').split("?uri=").pop()];
      client_id = '0f2b3341b0ca41ada07b9002c69adea0';
      redirect_uri = location.origin + '/spotify-callback';
      spotifyLogin = function(callback) {
        var url, w;
        url = 'https://accounts.spotify.com/authorize?client_id=' + client_id + '&response_type=token' + '&scope=playlist-read-private%20playlist-modify%20playlist-modify-private' + '&redirect_uri=' + encodeURIComponent(redirect_uri);
        localStorage.removeItem('spotifyplaylist-tracks');
        localStorage.setItem('spotifyplaylist-tracks', JSON.stringify(g_tracks));
        localStorage.setItem('spotifyplaylist-name', g_name);
        return w = window.open(url, 'asdf', 'WIDTH=400,HEIGHT=500');
      };
      $('<a id="spotify-add" href="" title="Add Song to an Essential Worship Spotify Playlist"><span>+</span>Add to Spotify</a>').appendTo('.group-song').click(function(e) {
        spotifyLogin(function() {});
        return e.preventDefault();
      });
      if ($('header button.icon').css('margin-top') === '30px') {
        $('.video > a').click(function() {
          var src, src_vid, vid;
          window.location.hash = $(this).next().text().replace(/\s/g, '+');
          src = $(this).attr('href');
          src_vid = src.substring(src.indexOf('=') + 1);
          vid = 'https://www.youtube.com/embed/' + src_vid + '?autoplay=1';
          $('#songModal').modal('show');
          $('#songModal iframe').attr('src', vid);
          $('.modal-body').fitVids();
          return false;
        });
      }
      $('#songModal button').on('click', function() {
        window.location.hash = 'main-content';
        return $('#songModal iframe').removeAttr('src');
      });
      if (window.location.hash) {
        hash = window.location.hash.substr(1).replace('+', ' ');
        $('.vid-description:contains("' + hash + '")').prev().click();
      }
      if ($('.field-type-spotifyfield').length) {
        return $('.field-type-spotifyfield + div').remove();
      }
    });
  })(jQuery);

}).call(this);
