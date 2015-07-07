# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    # Spotify Button
    $('<a id="spotify-add" href=""><span>+</span>Add to Spotify</a>').appendTo('.field-type-spotifyfield');

    # Video Modal
    $('.video > a').click ->
      window.location.hash = $(this).next().text()
      src = $(this).attr('href')
      src_vid = src.substring src.indexOf('=') + 1
      vid = 'https://www.youtube.com/embed/' + src_vid + '?autoplay=1'
      $('#myModal').modal 'show'
      $('#myModal iframe').attr 'src', vid
      return false

    $('#myModal button').click ->
      $('#myModal iframe').removeAttr 'src'

    if window.location.hash
      hash = window.location.hash.substr(1)
      $('.vid-description:contains("' + hash + '")').prev().click()

) jQuery
