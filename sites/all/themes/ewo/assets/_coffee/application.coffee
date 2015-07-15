# namespace jQuery
(($) ->
  # Document.ready
  $ ->

  	$("#block-views-news-news-front > ul li").click (event) ->
  		$(this).find('.news-copy h2 a').click (event) ->
  			event.stopPropagation()
  			return true

) jQuery
