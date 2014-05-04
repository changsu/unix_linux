<pre>
chang-mbp:isatty chang$ ./isatt
fd 0: tty
fd 1: tty
fd 2: tty
chang-mbp:isatty chang$ ./isatt </etc/passwd 2>/dev/null
fd 0: not a tty
fd 1: tty
fd 2: not a tty
</pre>