# namespace jQuery
(($) ->
  # Document.ready
  $ ->

  	# Set Default Placeholder Text
		$('.views-exposed-form select').each ->
			label = $(this).parents('.views-widget').prev().text().trim()
			$(this).attr('data-placeholder',label).chosen().on 'change', (evt, params) ->
	  		$('#edit-submit-songs').click()

  	

) jQuery
