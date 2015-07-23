<?php
define("CONSUMER_KEY", "");
define("CONSUMER_SECRET", "");
$callback_url = "http".(isset($_SERVER['HTTPS']) ? 's' : '').'://'.$_SERVER['HTTP_HOST']."/pc-api-callback";
define("CALLBACK_URL", $callback_url);

?>
