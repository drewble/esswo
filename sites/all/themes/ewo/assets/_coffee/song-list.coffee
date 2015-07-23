# namespace jQuery
(($) ->

	Drupal.behaviors.songList = attach: (context, settings) ->

		if $('#edit-flagged').val() == 'All'
			$('#view-all').addClass 'active'
		else
			$('#view-new').addClass 'active'

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
			console.log(label)
			# Set Default Placeholder Text to Label, Activate Chosen and force click on change
			$(this).not('#edit-flagged').attr('data-placeholder',label).chosen().on 'change', (evt, params) ->
	  		$('#edit-submit-songs').click()

	  $('.views-exposed-form select').on 'chosen:showing_dropdown', (evt, params) ->
  		$('.chosen-results li:first-child').text 'All'

	  # Title Active State
	  $('#edit-title').on 'focus', ->
	  	$('#edit-title-wrapper').addClass 'active'

	  $('#edit-title').on 'blur', ->
	  	$('#edit-title-wrapper').removeClass 'active'

  	$('#views-exposed-form-songs-page #edit-title-wrapper small').click ->
  		$('#edit-title').blur()

  	$('.audio-btn a:first-child').click ->
  		$(this).addClass 'open'
  		$(this).parent().siblings('.play-audio').addClass('show')
  		$('#remove').click ->
	  		$(this).prev().removeClass 'open'
	  		$(this).parent().siblings('.play-audio').removeClass('show')
	  		return false
	  	return false


) jQuery
