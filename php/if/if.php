<?php

/* 1. */
if (true) {
    echo "The condition is true!";
}

/* 2a. */
$art = [];
var_dump(empty($art));

if (empty($art)) {
    echo "The array is empty!";
}

$values = ["First", "Second", "Third"];
var_dump(empty($values));

if (empty($values)) {
    echo "The array is empty!";
} else {
    echo "The array is not empty!";
}

/* 3. */
$hour = 17;
if ($hour < 12) {
    echo "Good morning!";
} elseif ($hour < 18) {
    echo "Good afternoon!";
} elseif ($hour < 22) {
    echo "Good evening!";
} else {
    echo "Good night!";
}
