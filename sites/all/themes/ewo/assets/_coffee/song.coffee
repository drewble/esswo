# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    # Spotify Button
    $('<a id="spotify-add" href=""><span>+</span>Add to Spotify</a>').appendTo('.group-song');

    # Video Modal
    if $('.hero .btns a').css('margin-top') == '0px'
      $('.video > a').click ->
        window.location.hash = $(this).next().text().replace(/\s/g, '+');
        src = $(this).attr('href')
        src_vid = src.substring src.indexOf('=') + 1
        vid = 'https://www.youtube.com/embed/' + src_vid + '?autoplay=1'
        $('#songModal').modal 'show'
        $('#songModal iframe').attr('src', vid)
        $('.modal-body').fitVids()
        return false

    $('#songModal button').on 'click', ->
      window.location.hash = ''
      $('#songModal iframe').removeAttr 'src'

    if window.location.hash
      hash = window.location.hash.substr(1).replace('+', ' ');
      $('.vid-description:contains("' + hash + '")').prev().click()

    # Remove MP3 if Spotify Link is present - SHOULD BE MOVED TO PHP
    if $('.field-type-spotifyfield').length
      $('.field-type-spotifyfield + div').remove()

) jQuery
