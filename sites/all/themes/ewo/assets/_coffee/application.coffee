# namespace jQuery
(($) ->
  # Document.ready
  $ ->

  	$('header nav .login a').click (e) ->
  		$('#myModal').modal 'show'
  		e.preventDefault()


) jQuery
