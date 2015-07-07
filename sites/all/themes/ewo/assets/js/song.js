(function() {
  (function($) {
    return $(function() {
      var hash;
      $('<a id="spotify-add" href=""><span>+</span>Add to Spotify</a>').appendTo('.field-type-spotifyfield');
      $('.video > a').click(function() {
        var src, src_vid, vid;
        window.location.hash = $(this).next().text();
        src = $(this).attr('href');
        src_vid = src.substring(src.indexOf('=') + 1);
        vid = 'https://www.youtube.com/embed/' + src_vid + '?autoplay=1';
        $('#myModal').modal('show');
        $('#myModal iframe').attr('src', vid);
        return false;
      });
      $('#myModal button').click(function() {
        return $('#myModal iframe').removeAttr('src');
      });
      if (window.location.hash) {
        hash = window.location.hash.substr(1);
        return $('.vid-description:contains("' + hash + '")').prev().click();
      }
    });
  })(jQuery);

}).call(this);
