# ---
# generated by js2coffee 2.1.0

# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    g_access_token = ''
    g_username = ''
    g_tracks = []

    getUsername = (callback) ->
      console.log 'getUsername'
      url = 'https://api.spotify.com/v1/me'
      $.ajax url,
        dataType: 'json'
        headers: 'Authorization': 'Bearer ' + g_access_token
        success: (r) ->
          console.log 'got username response', r
          callback r.id
          return
        error: (r) ->
          callback null
          return
      return

    createPlaylist = (username, name, callback) ->
      console.log 'createPlaylist', username, name
      url = 'https://api.spotify.com/v1/users/' + username + '/playlists'
      # console.log($.get(url)) 
      $.ajax url,
        type: 'GET'
        dataType: 'json'
        async: false
        headers:
          'Authorization': 'Bearer ' + g_access_token
          'Content-Type': 'application/json'
        success: (r) ->
          i = 0
          spotify_id = ''
          while i < r.items.length
            if r.items[i].name == 'essential-worship'
              spotify_id = r.items[i].id
            i++
          if spotify_id.length == 0
            $.ajax url,
              method: 'POST'
              data: JSON.stringify(
                'name': name
                'public': false)
              dataType: 'json'
              headers:
                'Authorization': 'Bearer ' + g_access_token
                'Content-Type': 'application/json'
              success: (r) ->
                console.log 'create playlist response', r
                callback r.id
                return
              error: (r) ->
                callback null
                return
            return
          else
            callback spotify_id



    addTracksToPlaylist = (username, playlist, tracks, callback) ->
      console.log 'addTracksToPlaylist', username, playlist, tracks
      url = 'https://api.spotify.com/v1/users/' + username + '/playlists/' + playlist + '/tracks'
      # ?uris='+encodeURIComponent(tracks.join(','));
      $.ajax url,
        method: 'POST'
        data: JSON.stringify(tracks)
        dataType: 'text'
        headers:
          'Authorization': 'Bearer ' + g_access_token
          'Content-Type': 'application/json'
        success: (r) ->
          console.log 'add track response', r
          callback r.id
          return
        error: (r) ->
          callback null
          return
      return

    doit = ->
      # parse hash
      hash = location.hash.replace(/#/g, '')
      all = hash.split('&')
      args = {}
      console.log 'all', all
      all.forEach (keyvalue) ->
        idx = keyvalue.indexOf('=')
        key = keyvalue.substring(0, idx)
        val = keyvalue.substring(idx + 1)
        args[key] = val
        return
      g_name = localStorage.getItem('createplaylist-name')
      g_tracks = JSON.parse(localStorage.getItem('createplaylist-tracks'))
      console.log 'got args', args
      if typeof args['access_token'] != 'undefined'
        # got access token
        console.log 'got access token', args['access_token']
        g_access_token = args['access_token']
      getUsername (username) ->
        console.log 'got username', username
        createPlaylist username, g_name, (playlist) ->
          console.log 'created playlist', playlist
          addTracksToPlaylist username, playlist, g_tracks, ->
            console.log 'tracks added.'
            $('#playlistlink').attr 'href', 'spotify:user:' + username + ':playlist:' + playlist
            $('#creating').hide()
            $('#done').show()
            return
          return
        return
      return

    doit()

) jQuery
