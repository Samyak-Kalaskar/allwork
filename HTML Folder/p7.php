<?php
// File path to store the visitor count
$file_path = "visitor_count.txt";

// Check if the file exists, if not create it
if (!file_exists($file_path)) {
    $file = fopen($file_path, "w");
    fwrite($file, "0");
    fclose($file);
}

// Read the current visitor count
$file = fopen($file_path, "r");
$count = fread($file, filesize($file_path));
fclose($file);

// Increment the visitor count
$count++;
$file = fopen($file_path, "w");
fwrite($file, $count);
fclose($file);

// Display the visitor count
echo "You are visitor number: " . $count;
?>