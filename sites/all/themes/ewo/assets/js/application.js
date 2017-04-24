(function ($) {

/**
 * Send click event to GA.
 */
Drupal.behaviors.ewoGAEvent = {
  attach: function (context, settings) {
    $('a').click(function(e) {
      ga('send', 'event', {
        eventCategory: 'Link',
        eventAction: 'click',
        eventLabel: event.target.innerHTML + ' - going to url: ' + event.target.href
      });
    });
  }
};

})(jQuery);

(function() {
  (function($) {
    return $(function() {
      $('<button id="subscribe"><span>Subscribe</span><span class="icon icon-icons_close"></span></button>').prependTo('#block-mailchimp-signup-registration').click(function() {
        return $(this).parent().toggleClass('show');
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
        $('#myModal .modal-body .password-suggestions').prependTo('#myModal .modal-body .confirm-parent');
        return e.preventDefault();
      });
      $('#better-messages-default .close').click(function() {
        return $('#better-messages-default a.message-close').click();
      });
      $(window).load(function() {
        return $('#myModal .password-strength, #myModal .password-confirm').hide();
      });
      $('#myModal .password-field').keyup(function() {
        if ($(this).val() !== '') {
          return $('.password-strength, .password-confirm').show();
        } else {
          return $('.password-strength, .password-confirm').hide();
        }
      });
      $('#myModal .password-field').focus(function() {
        if ($(this).val() !== '') {
          return $('.password-strength, .password-confirm').show();
        } else {
          return $('.password-strength, .password-confirm').hide();
        }
      });
      $('input.password-field').attr('placeholder', 'Password');
      return $('input.password-confirm').attr('placeholder', 'Confirm Password');
    });
  })(jQuery);

}).call(this);
