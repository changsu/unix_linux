
* There's a hole in the file
<pre>
chang-mbp:file_hole chang$ ls -l file.hole
-rw-r--r--  1 chang  1876110778  16394 Feb 17 21:31 file.hole
chang-mbp:file_hole chang$ od -c file.hole
0000000    a   b   c   d   e   f   g   h   i   j  \0  \0  \0  \0  \0  \0
0000020   \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0
*
0040000    A   B   C   D   E   F   G   H   I   J
0040012
</pre>

<b>The return value of write sld be the same with the bytes assigned in the argument, otherwise, it means some
error occurs say filling up a disk or so</b>