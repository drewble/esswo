(function() {
  (function($) {
    $(function() {});
    return $('.views-exposed-form select').each(function() {
      var label;
      label = $(this).parents('.views-widget').prev().text().trim();
      $(this).attr('data-placeholder', label).chosen().on('change', function(evt, params) {
        return $('#edit-submit-songs').click();
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
