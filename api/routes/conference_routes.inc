<?php

/**
	User Routes
*/

$app->post('/conference/:confroom/mute/:participant',function($confroom,$participant) use ($app) {
	$conference = new Conference($confroom);
	$data = $conference->mute($participant);
        $results = trim($data[0]);
        $app->render(200,array('msg' => $results, 'command' => $command));
});

$app->post('/conference/:confroom/unmute/:participant',function($confroom,$participant) use ($app) {
	$conference = new Conference($confroom);
	$data = $conference->unmute($participant);
        $results = trim($data[0]);
        $app->render(200,array('msg' => $results, 'command' => $command));
});


#1788;sofia/external/+18185646266@74.120.95.35:5060;efc33efe-d6b6-4626-8eb1-5396210ea24b;+18185646266;+18185646266;hear|speak|floor;0;0;0;20
#1786;sofia/external/+18185646266@74.120.95.35:5060;7c2bd773-b52c-4163-90f1-e9dfa9d01832;+18185646266;+18185646266;hear|speak|moderator;0;0;0;20

