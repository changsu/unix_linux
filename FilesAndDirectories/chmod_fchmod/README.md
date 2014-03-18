result

<pre>
chang-mbp:chmod_fchmod chang$ chmod 777 bar
chang-mbp:chmod_fchmod chang$ ls -l
total 64
-rw-r--r--  1 chang  1876110778    244 Mar 17 23:15 Makefile
-rwxrwxrwx  1 chang  1876110778      0 Mar 17 23:19 bar
-rwxr-xr-x  1 chang  1876110778  14004 Mar 17 23:19 chmod_fchmod
-rw-r--r--  1 chang  1876110778    455 Mar 17 23:19 chmod_fchmod.c
-rw-r--r--  1 chang  1876110778   5528 Mar 17 23:19 chmod_fchmod.o
-rw-r-Sr--  1 chang  1876110778      0 Mar 17 23:19 foo
chang-mbp:chmod_fchmod chang$ ./chmod_fchmod
chang-mbp:chmod_fchmod chang$ ls -l
total 64
-rw-r--r--  1 chang  1876110778    244 Mar 17 23:15 Makefile
-rw-r--r--  1 chang  1876110778      0 Mar 17 23:19 bar
-rwxr-xr-x  1 chang  1876110778  14004 Mar 17 23:19 chmod_fchmod
-rw-r--r--  1 chang  1876110778    455 Mar 17 23:19 chmod_fchmod.c
-rw-r--r--  1 chang  1876110778   5528 Mar 17 23:19 chmod_fchmod.o
-rw-r-Sr--  1 chang  1876110778      0 Mar 17 23:19 foo
chang-mbp:chmod_fchmod chang$ chmod 741 bar
chang-mbp:chmod_fchmod chang$ ls -l
total 64
-rw-r--r--  1 chang  1876110778    244 Mar 17 23:15 Makefile
-rwxr----x  1 chang  1876110778      0 Mar 17 23:19 bar
-rwxr-xr-x  1 chang  1876110778  14004 Mar 17 23:19 chmod_fchmod
-rw-r--r--  1 chang  1876110778    455 Mar 17 23:19 chmod_fchmod.c
-rw-r--r--  1 chang  1876110778   5528 Mar 17 23:19 chmod_fchmod.o
-rw-r-Sr--  1 chang  1876110778      0 Mar 17 23:19 foo
chang-mbp:chmod_fchmod chang$ man chmod
</pre>