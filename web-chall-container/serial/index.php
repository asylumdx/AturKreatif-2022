<?php
$flagDir = md5(date("Y") . "aturkreatif@2022_1");
$flag = $flagDir . "/flag.php";
$currentDir = getcwd();

class AK {
    private $file = false;

    public function __destruct() {
        global $currentDir;
        
        if ($this->file) {
            $a = file_get_contents($currentDir . "/" . $this->file);
            echo $a;
        }   
    }
}

if (!empty($_GET['iwantflag'])) {
    $iwantflag = base64_decode($_GET['iwantflag']);
    $a = unserialize($iwantflag);
} else {
    highlight_file(__FILE__);
}