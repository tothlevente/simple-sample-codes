<?php

/* 1a. */
$day = "xxx";
switch ($day) {
    case "Mon": 
        echo "Monday";
    case "Tue": 
        echo "Tuesday";
    case "Wed": 
        echo "Wednesday";
    case "Thu": 
        echo "Thursday";
    case "Fri": 
        echo "Friday";
    case "Sat": 
        echo "Saturday";
    case "Sun": 
        echo "Sunday";
}

/* 1b. */
switch ($day) {
    case "Mon": 
        echo "Monday";
        break;
    case "Tue": 
        echo "Tuesday";
        break;
    case "Wed": 
        echo "Wednesday";
        break;
    case "Thu": 
        echo "Thursday";
        break;
    case "Fri": 
        echo "Friday";
        break;
    case "Sat": 
        echo "Saturday";
        break;
    case "Sun": 
        echo "Sunday";
        break;
    default:
        echo "No information available for that day!";
}