(function() {
  (function($) {
    return $(function() {
      var hash;
      $('<a id="spotify-add" href=""><span>+</span>Add to Spotify</a>').appendTo('.group-song');
      if ($('.hero .btns a').css('margin-top') === '0px') {
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
        window.location.hash = '';
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
