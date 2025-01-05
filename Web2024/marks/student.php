<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    session_start();
    $id = $_SESSION["id"];
    $_SESSION["id"] = $id;
    ?>
    <a href="streg.php">click Here for registration</a>
    <a href="markcard.php">Click Here for viewing marks Card</a>
</body>

</html>