<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        <label for="E-mail">E-Mail : </label>
        <input type="email" name="email">
        <label for="Password">Password</label>
        <input type="password" name="Password" id="">
        <input type="submit" name="submit" value="submit" id="">
    </form>

    <?php

    $con = mysqli_connect('localhost','root','','userdb');
    if (isset($_POST['submit']))
    {
        $email = $_POST["email"];
        $password = $_POST["password"];

        $qory = "select * from user where email=$email and password=$password";
        $nidal = mysqli_query($con,$qory);

        

        if($nidal)
        {
            echo "Adichu monee !";
        }
        else
        {
            echo "CHaambi!";
        }
    }
    ?>
</body>
</html>