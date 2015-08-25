(function() {
  (function($) {
    $(function() {
      return $('<button id="subscribe"><span>Subscribe</span><span class="icon icon-icons_close"></span></button>').prependTo('#block-mailchimp-signup-registration').click(function() {
        return $(this).parent().toggleClass('show');
      });
    });
    $('header button').click(function(e) {
      $(this).next().addClass('show');
      return e.preventDefault();
    });
    $('<span class="close-menu">×</span>').prependTo('header nav').click(function(e) {
      $('header nav').removeClass('show');
      return e.preventDefault();
    });
    $('.not-logged-in header nav .login a').click(function(e) {
      $('#myModal').modal('show');
      return e.preventDefault();
    });
    $('#better-messages-default .close').click(function() {
      return $('#better-messages-default a.message-close').click();
    });
    $(window).load(function() {
      return $('.password-strength, .password-confirm').hide();
    });
    $('.password-field').keyup(function() {
      if ($(this).val() !== '') {
        return $('.password-strength, .password-confirm').show();
      } else {
        return $('.password-strength, .password-confirm').hide();
      }
    });
    return $('input.password-field, input.password-confirm').attr('placeholder', 'Password');
  })(jQuery);

}).call(this);
