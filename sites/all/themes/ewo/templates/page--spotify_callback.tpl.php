<?php
//kpr(get_defined_vars());
//kpr($theme_hook_suggestions);
//template naming
//page--[CONTENT TYPE].tpl.php

?>
<?php if( theme_get_setting('mothership_poorthemers_helper') ){ ?>
<!-- page.tpl.php-->
<?php } ?>


<div class="site-wrapper">
  <div class="site-wrapper-inner">
    <div id="creating" style="text-align: center;">
      <h1>Creating playlist...</h1>
    </div>
    <div id="done" style="display: none; text-align: center;">
      <h1>Done!</h1>
      <p>
        <a class="white-btn btn" id="playlistlink">
          Open playlist in Spotify
        </a>
      </p>
    </div>
  </div>
</div>