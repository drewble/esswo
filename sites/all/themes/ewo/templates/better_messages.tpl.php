<?php 
/*
Available variables are:
$content  The messages to put inside Better Messages. Drupal originally calls theme_status_messages() to theme this output.
      With this module enabled you'll always have to call theme_better_messages_content() instead of theme_status_messages().
*/
?>
<div id="better-messages-default">
  <button type="button" class="close" data-dismiss="modal" aria-hidden="true">×</button>
  <?php print $content ?>
  <div class="footer"><span class="message-timer"></span><a class="message-close" href="#"></a></div>
</div>
