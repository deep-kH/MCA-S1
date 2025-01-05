<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<style>
    body {
        background-color: black;
        color: black;
        width: 98%;
        height: 80vh;
        display: flex;
        flex-direction: column;
        justify-content: center;
        align-items: center;
    }

    .contain {
        background-color: rgba(255, 255, 255, 0.47);
        padding-left: 60px;
        padding-right: 60px;
        padding-top: 40px;
        padding-bottom: 30px;
        border: rgba(83, 109, 255, 0.47) solid 2px;
    }

    h1 {
        color: whitesmoke;
        position: relative;
    }
</style>

<body>
    <h1>Welcome to Student Registration</h1>
    <div class="contain">
        <form action="" method="post">
            <table>
                <tr>
                    <td><label for="">Name</label></td>
                    <td><input type="text" name="name"></td>
                </tr>
                <tr>
                    <td><label for="">Roll Number</label></td>
                    <td><input type="Number" name="Rnum"></td>
                </tr>
                <tr>
                    <td><label for="">E-Mail</label></td>
                    <td><input type="email" name="mail"></td>
                </tr>
                <tr>
                    <td><label for="">Phone Number</label></td>
                    <td><input type="number" name="Pnum"></td>
                </tr>
                <tr>
                    <td><label for="">Gender</label></td>
                    <td><input type="checkbox" name="gen" id="" value="Male">Male
                        <input type="checkbox" name="gen" id="" value="Female">Female
                    </td>
                </tr>
                <tr>
                    <td><br></td>
                </tr>
                <tr>
                    <td align="center" colspan="2"><input type="submit" name="sub"></td>
                </tr>
            </table>
        </form>
    </div>

    <?php
    session_start();
    $ID = $_SESSION['qwe'];
    if (isset($_POST["sub"])) {
        $name = $_POST["name"];
        $Rnum = $_POST["Rnum"];
        $phone = $_POST["Pnum"];
        $email = $_POST["mail"];
        $gen = $_POST["gen"];

        echo "<h3>$ID</h3>";

        $con = mysqli_connect("localhost", "root", "", "deepak");
        if ($con) {
            $query = "UPDATE students SET Name='$name', RollNumber='$Rnum',Email='$email',Phone='$phone',Gender='$gen' WHERE ID='$ID'";
            $result = mysqli_query($con, $query);

            if (!$result) {
                echo "Failed Update: " . mysqli_error($con);
            } else {
                header("Location: login.php");
            }
        } else {
            echo "<h3>Connection Failed</h3>";
        }
        mysqli_close($con);
    }
    ?>
</body>

</html>