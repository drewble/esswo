# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    Playlist = ->

    g_access_token = ''
    g_name = 'essential-worship'
    g_username = ''
    g_tracks = [$('.field-type-spotifyfield iframe').attr('src').split("?uri=").pop()]
    client_id = '0f2b3341b0ca41ada07b9002c69adea0'
    redirect_uri = 'http://127.0.0.1:8888/spotify-callback'

    doLogin = (callback) ->
      url = 'https://accounts.spotify.com/authorize?client_id=' + client_id + '&response_type=token' + '&scope=playlist-read-private%20playlist-modify%20playlist-modify-private' + '&redirect_uri=' + encodeURIComponent(redirect_uri)
      localStorage.setItem('createplaylist-tracks', JSON.stringify(g_tracks));
      localStorage.setItem 'createplaylist-name', g_name
      w = window.open(url, 'asdf', 'WIDTH=400,HEIGHT=500')

    # Spotify Button
    $('<a id="spotify-add" href=""><span>+</span>Add to Spotify</a>').appendTo('.group-song').click (e) ->
      doLogin ->
      e.preventDefault()

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
