<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="" method="post">
        <label for="NUMBER"> Enter the number for factorial </label>
        <input type="number" name="number">
        <input type="submit" value="Get Factorial" name="sub">

        <?php
        $num = $_POST['number'];

        function fact($num)
        {
            if ($num == 0)
                return 1;
            else {
                return $num * fact($num - 1);
            }
        }
        echo "\nYour factorial is : ", fact($num);
        ?>

    </form>
</body>

</html>