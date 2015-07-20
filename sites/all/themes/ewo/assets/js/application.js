(function() {
  (function($) {
    return $(function() {
      return $('header nav .login a').click(function(e) {
        $('#myModal').modal('show');
        return e.preventDefault();
      });
    });
  })(jQuery);

}).call(this);
