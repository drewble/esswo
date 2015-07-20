# namespace jQuery
(($) ->
  # Document.ready
  $ ->

  	# Mobile Menu
  	$('header button').click (e) ->
  		$(this).next().addClass 'show'
  		e.preventDefault()

  	$('<span class="close-menu">×</span>').prependTo('header nav').click (e) ->
  		$('header nav').removeClass 'show'
  		e.preventDefault()


  	# Modal - login/register
  	$('header nav .login a').click (e) ->
  		$('#myModal').modal 'show'
  		e.preventDefault()


) jQuery
