(function() {
  (function($) {
    Drupal.behaviors.songList = {
      attach: function(context, settings) {
        if ($('#edit-flagged').val() === 'All') {
          $('#view-all').addClass('active');
        } else {
          $('#view-new').addClass('active');
        }
        $('#view-all', context).on('click', function() {
          $('#edit-flagged').val('All');
          $('#edit-submit-songs').click();
          return false;
        });
        return $('#view-new', context).on('click', function() {
          $('#edit-flagged').val('1');
          $('#edit-submit-songs').click();
          return false;
        });
      }
    };
    return $(function() {
      $('.audio-btn a:first-child').click(function(e) {
        $('.play-audio.show').removeClass('show');
        $('.audio-btn .open').removeClass('open');
        $(this).addClass('open');
        $(this).parent().siblings('.play-audio').addClass('show');
        return e.preventDefault();
      });
      $('.remove').click(function(e) {
        $(this).prev().removeClass('open');
        $(this).parent().siblings('.play-audio').removeClass('show');
        return e.preventDefault();
      });
      $('.clear-filters').click(function(e) {
        $('#edit-reset').click();
        return e.preventDefault();
      });
      $('.views-exposed-form select').each(function() {
        var label;
        label = $(this).parents('.views-widget').prev().text().trim();
        return $(this).not('#edit-flagged').attr('data-placeholder', label).chosen().on('change', function(evt, params) {
          return $('#edit-submit-songs').click();
        });
      });
      $('.views-exposed-form select').on('chosen:showing_dropdown', function(evt, params) {
        return $('.chosen-results li:first-child').text('All');
      });
      $('#edit-title').on('focus', function() {
        return $('#edit-title-wrapper').addClass('active');
      });
      $('#edit-title').on('blur', function() {
        return $('#edit-title-wrapper').removeClass('active');
      });
      return $('#views-exposed-form-songs-page #edit-title-wrapper small').click(function() {
        return $('#edit-title').blur();
      });
    });
  })(jQuery);

}).call(this);
