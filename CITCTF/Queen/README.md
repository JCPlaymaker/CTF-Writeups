# Queen's Gambit (Forensics - Easy)
Not many people solved it because the flag was a bit troll but we get an image of the queen.

By using ``zteg`` we can see we get:

```zsteg Queen.png
b1,r,msb,xy         .. text: "P`@`TdD`@dD`dDd@`@`"
b1,rgb,lsb,xy       .. text: "a8 a7 a6 a5 b8 c7 b6 d5 e4 f5 g4 h5 c1 c2 c3 d2 e1 e2 e3 "
```
which are coordinates in a chess board.

Once we put them all on the board, it spell pwn, therefore

``CIT{pwn}``
