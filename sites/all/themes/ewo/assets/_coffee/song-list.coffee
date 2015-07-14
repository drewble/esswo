# namespace jQuery
(($) ->

	Drupal.behaviors.songList = attach: (context, settings) ->
		# Sort Flagged/Un-flagged
		$('#view-all', context).on 'click', ->
			$('#edit-flagged').val('All')
			$('#edit-submit-songs').click()
			return false

		$('#view-new', context).on 'click', ->
			$('#edit-flagged').val('1')
			$('#edit-submit-songs').click()
			return false

  # Document.ready
  $ ->

  	# Song Exposed Filters Actions
		$('.views-exposed-form select').each ->
			# Get Label Text
			label = $(this).parents('.views-widget').prev().text().trim()
			# Set Default Placeholder Text to Label, Activate Chosen and force click on change
			$(this).not('#edit-flagged').attr('data-placeholder',label).chosen().on 'change', (evt, params) ->
	  		$('#edit-submit-songs').click()

	  # Title Active State
	  $('#edit-title').on 'focus', ->
	  	$('#edit-title-wrapper').addClass 'active'

	  $('#edit-title').on 'blur', ->
	  	$('#edit-title-wrapper').removeClass 'active'

  	$('#views-exposed-form-songs-page #edit-title-wrapper small').click ->
  		$('#edit-title').blur()

  	$('.play-btn').click ->
  		$(this).siblings('.play-audio').addClass('show')
  		return false

) jQuery
