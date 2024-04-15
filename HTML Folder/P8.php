<?php
date_default_timezone_set('Asia/Kolkata'); // Set timezone to Indian Standard Time
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Display Indian Time using PHP</title>
</head>
<body>
    <h1>Current Time in Indian Time Zone (IST):</h1>
    <p><?php echo date('h:i:s A'); ?></p>
</body>
</html>
