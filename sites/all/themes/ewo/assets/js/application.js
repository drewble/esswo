(function() {
  (function($) {
    return $(function() {
      $('header button').click(function(e) {
        $(this).next().addClass('show');
        return e.preventDefault();
      });
      $('<span class="close-menu">×</span>').prependTo('header nav').click(function(e) {
        $('header nav').removeClass('show');
        return e.preventDefault();
      });
      return $('header nav .login a').click(function(e) {
        $('#myModal').modal('show');
        return e.preventDefault();
      });
    });
  })(jQuery);

}).call(this);
