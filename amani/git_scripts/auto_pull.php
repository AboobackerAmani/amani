<?php

echo"Starting...";
try {
  $payload = json_decode($_REQUEST['payload']);
}
catch(Exception $e) {
  exit(0);
}

if ($payload->ref === 'refs/heads/develop') {
  echo"Pulling develop branch.";
  // path to your site deployment script
  exec('./build.sh');
}
