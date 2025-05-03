So when we go to the link we get greeted with a ``So, the three platforms Kenya - Slovakia - World are the COOLEST EVER. DON'T BE SAD :-{ The flag is close :-}.``

So by following the hints given to us before we check the source and we get this:

```
```html
<html>
 <body>
   <span>S</span>o, the three platforms <span>K</span>enya - Slovakia
   <span>-</span> World are the <span>C</span>OOL<span>E</span>ST
   EVE<span>R</span>. DON'<span>T</span> BE SAD :-<span>{</span>
   T<span>he</span> f<span>l</span>ag is c<span>lo</span>se
   :-<span>}</span>.
 </body>
</html>
```

So we see that the flag is within the spans so we can copypaste it into a file.html and run the following command:


``grep -o '<span>[^<]*</span>' file.html | sed 's/<[^>]*>//g' | tr -d '\n' | sed 's/.*\(SK-CERT{[^}]*}\).*/\1/'``

and we get the flag:

SK-CERT{hello}

