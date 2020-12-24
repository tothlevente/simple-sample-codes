<?php

/* 1. */
$articles = ["First", "Second", "Third"];

foreach($articles as $article) {
    echo $article, " , ";
}

/* 2. */
foreach($articles as $index => $article) {
    echo $index . " " . $article, ", ";
}

/* 3. */
$articles = [
    "a" => "First", 
    "b" => "Second", 
    "c" => "Third"
];

foreach($articles as $index => $article) {
    echo $index . " " . $article, ", ";
}
