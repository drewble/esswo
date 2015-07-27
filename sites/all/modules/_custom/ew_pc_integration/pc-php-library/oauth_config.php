<?php
define("CONSUMER_KEY", "8vpSpyf23GBw50nnA1W8");
define("CONSUMER_SECRET", "9xRs5MbXT0MyPNoWG8ZdB15BXeWB9uRaPtCe8LYg");
$callback_url = "http".(isset($_SERVER['HTTPS']) ? 's' : '').'://'.$_SERVER['HTTP_HOST']."/pc-api-callback";
define("CALLBACK_URL", $callback_url);

?>
