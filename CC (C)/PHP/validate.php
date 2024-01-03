<?php
$name = $_GET['username'];
$pass = $_GET['password'];
if ($name == Ishika && $pass == 20051971) {
    header('Location: valid.html');
    exit();
} else {
    header('Location: invalid.html');
    exit();
}
?>
