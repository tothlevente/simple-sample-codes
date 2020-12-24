<?php 

/* 1. */
$count = 10;
$size = 2;

var_dump($count + 5);
var_dump($count * $size);

/* 2. */
$message = "Hello";
$name = "Levente";

echo $message . " " . $name;

/* 3. */
$price = 3;
$quantity = "150";
$price = $price * $quantity;

var_dump($price);

/* 4. */
$editor = true;
$admin = false;

var_dump($editor);
var_dump(!$editor); 

var_dump($editor and $admin);
