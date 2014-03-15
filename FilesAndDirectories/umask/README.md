<pre>
chang-mbp:umask chang$ ls -l foo bar
-rw-------  1 chang  1876110778  0 Mar 15 16:04 bar
-rw-rw-rw-  1 chang  1876110778  0 Mar 15 16:04 foo

chang-mbp:umask chang$ umask
0022
chang-mbp:umask chang$ umask -S
u=rwx,g=rx,o=rx
chang-mbp:umask chang$ umask 027
chang-mbp:umask chang$ umask -S
u=rwx,g=rx,o=
</pre>