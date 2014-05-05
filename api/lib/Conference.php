<?php

class Conference
{
    protected $conference_id;

    public function __construct($conference_id)
    {
        $this->conference_id = $conference_id;
    }

    public function mute($user_id)
    {
        $data = $this->runCommand('mute', $user_id);
	    return $data;
    }

    public function unmute($user_id)
    {
        $data = $this->runCommand('unmute', $user_id);
	    return $data;
    }

    protected function runCommand($command, $user_id)
    {
	    $command = "conference $this->conference_id $command $user_id";
        $data = eslCommand($command);
        $data = explode(' ', $data);
        return $data;
    }
       
}
