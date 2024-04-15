<!DOCTYPE html>
<html>
<head>
    <title>Matrix Transpose</title>
</head>
<body>
    <h2>Matrix Transpose</h2>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
        <label for="rows">Enter number of rows:</label>
        <input type="number" name="rows" id="rows" required><br><br>
        
        <label for="cols">Enter number of columns:</label>
        <input type="number" name="cols" id="cols" required><br><br>

        <h3>Enter Matrix Elements:</h3>
        <?php
        // Generate input fields for matrix elements based on user input for rows and columns
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $rows = $_POST["rows"];
            $cols = $_POST["cols"];

            for ($i = 0; $i < $rows; $i++) {
                for ($j = 0; $j < $cols; $j++) {
                    echo "<input type='number' name='matrix[$i][$j]' required>";
                }
                echo "<br>";
            }
        }
        ?>

        <br>
        <input type="submit" value="Find Transpose">
    </form>

    <?php
    // Function to find transpose of a matrix
    function transposeMatrix($matrix) {
        $transposedMatrix = [];
        foreach ($matrix as $row => $columns) {
            foreach ($columns as $col => $value) {
                $transposedMatrix[$col][$row] = $value;
            }
        }
        return $transposedMatrix;
    }

    // Check if form is submitted
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $matrix = $_POST["matrix"];
        echo "<h3>Original Matrix:</h3>";
        // Display original matrix
        foreach ($matrix as $row) {
            foreach ($row as $value) {
                echo "$value ";
            }
            echo "<br>";
        }
        // Find and display transpose of matrix
        $transpose = transposeMatrix($matrix);
        echo "<h3>Transpose of Matrix:</h3>";
        foreach ($transpose as $row) {
            foreach ($row as $value) {
                echo "$value ";
            }
            echo "<br>";
        }
    }
    ?>
</body>
</html>
