(function() {
  (function($) {
    return $(function() {
      return $("#block-views-news-news-front > ul li").click(function(event) {
        return $(this).find('.news-copy h2 a').click(function(event) {
          event.stopPropagation();
          return true;
        });
      });
    });
  })(jQuery);

}).call(this);
