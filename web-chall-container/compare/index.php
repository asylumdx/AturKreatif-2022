<?php
    include "password_n_flag.php";

    if (!empty($_GET['password'])) {
        $user_password = isset($_GET['password']) ? $_GET['password'] : '';

        if ( strcmp( $user_password, $secret ) == 0 ){
            echo "Yeayy ヽ(´▽`)/ --> " . $flag;
        }else {
	    echo 'Wrong password ಠ‿ಠ';
	}

    } else {
        highlight_file(__FILE__);
    }
?>