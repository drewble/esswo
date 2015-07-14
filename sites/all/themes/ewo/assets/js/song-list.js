(function() {
  (function($) {
    return Drupal.behaviors.songList = {
      attach: function(context, settings) {
        $('#view-all', context).on('click', function() {
          $('#edit-flagged').val('All');
          $('#edit-submit-songs').click();
          return false;
        });
        $('#view-new', context).on('click', function() {
          $('#edit-flagged').val('1');
          $('#edit-submit-songs').click();
          return false;
        });
        $(function() {});
        return $('.views-exposed-form select').each(function() {
          var label;
          label = $(this).parents('.views-widget').prev().text().trim();
          $(this).not('#edit-flagged').attr('data-placeholder', label).chosen().on('change', function(evt, params) {
            return $('#edit-submit-songs').click();
          });
          $('#edit-title').on('focus', function() {
            return $('#edit-title-wrapper').addClass('active');
          });
          $('#edit-title').on('blur', function() {
            return $('#edit-title-wrapper').removeClass('active');
          });
          $('#views-exposed-form-songs-page #edit-title-wrapper small').click(function() {
            return $('#edit-title').blur();
          });
          return $('.audio-btn a:first-child').click(function() {
            $(this).addClass('open');
            $(this).parent().siblings('.play-audio').addClass('show');
            $('#remove').click(function() {
              $(this).prev().removeClass('open');
              $(this).parent().siblings('.play-audio').removeClass('show');
              return false;
            });
            return false;
          });
        });
      }
    };
  })(jQuery);

}).call(this);
