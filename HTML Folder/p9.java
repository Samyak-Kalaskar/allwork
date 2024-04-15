<!DOCTYPE html>
<html>
<head>
    <title>Simple Calculator</title>
</head>
<body>
    <h2>Simple Calculator</h2>
    <form method="post" action="">
        <input type="text" name="num1" placeholder="Enter first number" required>
        <select name="operation">
            <option value="add">+</option>
            <option value="subtract">-</option>
            <option value="multiply">*</option>
            <option value="divide">/</option>
        </select>
        <input type="text" name="num2" placeholder="Enter second number" required>
        <input type="submit" name="calculate" value="Calculate">
    </form>

    <?php
    // Check if the form has been submitted
    if(isset($_POST['calculate'])) {
        // Retrieve form data
        $num1 = $_POST['num1'];
        $num2 = $_POST['num2'];
        $operation = $_POST['operation'];
        $result = 0;

        // Perform the calculation based on the selected operation
        switch($operation) {
            case 'add':
                $result = $num1 + $num2;
                break;
            case 'subtract':
                $result = $num1 - $num2;
                break;
            case 'multiply':
                $result = $num1 * $num2;
                break;
            case 'divide':
                // Check if divisor is not zero
                if($num2 != 0)
                    $result = $num1 / $num2;
                else
                    $result = "Cannot divide by zero!";
                break;
            default:
                $result = "Invalid operation";
        }

        // Display the result
        echo "<p>Result: $result</p>";
    }
    ?>
</body>
</html>
