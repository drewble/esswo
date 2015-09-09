# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    # Subscribe
    $('<button id="subscribe"><span>Subscribe</span><span class="icon icon-icons_close"></span></button>').prependTo('#block-mailchimp-signup-registration').click ->
      $(this).parent().toggleClass 'show'

  	# Mobile Menu
  	$('header button').click (e) ->
  		$(this).next().addClass 'show'
  		e.preventDefault()

  	$('<span class="close-menu">×</span>').prependTo('header nav').click (e) ->
  		$('header nav').removeClass 'show'
  		e.preventDefault()


  	# Modal - login/register
  	$('.not-logged-in header nav .login a').click (e) ->
  		$('#myModal').modal 'show'
  		$('#myModal .modal-body .password-suggestions').prependTo('#myModal .modal-body .confirm-parent')
  		e.preventDefault()

  	# Close button
  	$('#better-messages-default .close').click ->
  		$('#better-messages-default a.message-close').click()

  	$(window).load ->
  		$('#myModal .password-strength, #myModal .password-confirm').hide();

  	$('#myModal .password-field').keyup ->
  		if $(this).val() isnt ''
  			$('.password-strength, .password-confirm').show();
  		else
  			$('.password-strength, .password-confirm').hide();

  	$('#myModal .password-field').focus ->
  		if $(this).val() isnt ''
  			$('.password-strength, .password-confirm').show();
  		else
  			$('.password-strength, .password-confirm').hide();

  	# Password placeholder value (couldn't get it to work with a form alter and only needed in js modal)
  	$('input.password-field').attr('placeholder','Password');
  	$('input.password-confirm').attr('placeholder','Confirm Password');


) jQuery
