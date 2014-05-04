<pre>
chang-mbp:ttyname chang$ ./ttyname
fd 1: /dev/ttys000
fd 0: /dev/ttys000
fd 2: /dev/ttys000
chang-mbp:ttyname chang$ ./ttyname  < /dev/console 2> /dev/null
fd 1: /dev/console
fd 0: /dev/ttys000
fd 2: not a tty
</pre>