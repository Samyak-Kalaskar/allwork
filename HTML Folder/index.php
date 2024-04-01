<html>  
<body>  
<form method="post">  
    Enter a number:  
    <input type="number" name="number">  
    <button>Submit</button> 
</form>  
</body>  
</html>  
<?php   
    if($_POST){  
        $number = $_POST['number'];   
        if(($number % 2) == 0){  
            echo "$number is an Even number";  
        }else{  
            echo "$number is Odd number";  
        }  
    }  
?> 