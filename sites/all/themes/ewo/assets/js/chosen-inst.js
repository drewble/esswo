(function() {
  (function($) {
    $(function() {});
    return $('.views-exposed-form select').each(function() {
      var label;
      label = $(this).parents('.views-widget').prev().text().trim();
      return $(this).attr('data-placeholder', label).chosen().on('change', function(evt, params) {
        return $('#edit-submit-songs').click();
      });
    });
  })(jQuery);

}).call(this);
