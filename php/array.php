<?php 

/* 1. */
$articles = ["First", "Second", "Third"];

var_dump($articles);
var_dump($articles[1]);

/* 2. */
$art = [1 => "First", "Second", 10 => "Third", "Fourth"];
var_dump($art);

$art = ["one" => "First", "Second", "ten" => "Third", "Fourth"];
var_dump($art);

$art = [
    "one" => "First", 
    "two" => "Second", 
    "three" => "Third", 
    "four" => "Fourth"
];

var_dump($art);

/* 2. */
$count = 7;
$price = 9.99;
$values = [$count, $price];
var_dump($values);

/* 3. */
$multi = [
    ["title" => "one", "content" => "First"],
    ["title" => "two", "content" => "Second"],
    ["title" => "three", "content" => "Third"],
];

var_dump($multi);
var_dump($multi[1]["title"]);
