<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        <label for="">Name : </label>
        <input type="text" name="name" id=""><br><BR>
        <label for="">E-mail : </label>
        <input type="email" name="email" id=""><br><BR>
        <label for="">Phone Number : </label>
        <input type="number" name="Phone" id=""><br><BR>
        <label for="">Date of Birth : </label>
        <input type="date" name="DOB" id=""><br><BR>
        <label for="">Password : </label>
        <input type="password" name="password" id=""><br><BR>
        <label for="">Confirm Password : </label>
        <input type="password"><br><BR>
        <input type="submit" value="Submit" name="submit">
    </form>

    <?php
    $con = mysqli_connect('localhost','root','','userdb');
    if (isset($_POST['submit']))
    {
        $name = $_POST["name"];
        $email = $_POST["email"];
        $phone = $_POST["Phone"];   
        $dob = $_POST["DOB"];
        $password = $_POST["password"];

        $qory = "INSERT INTO `user`( `Name`, `E-mail`, `Phone Number`, `Date of Birth`, `Password`) VALUES ('$name','$email','$phone','$dob','$password')";
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