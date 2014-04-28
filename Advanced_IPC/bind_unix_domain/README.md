<pre>
chang-mbp:bind_unix_domain chang$ ./bind_unix_domain
UNIX domain socket bound
chang-mbp:bind_unix_domain chang$ ls
Makefile		   	  bind_unix_domain	bind_unix_domain.c	bind_unix_domain.c~	bind_unix_domain.o foo.socket
chang-mbp:bind_unix_domain chang$ rm *~
chang-mbp:bind_unix_domain chang$ ./bind_unix_domain
bind failed: Address already in use
chang-mbp:bind_unix_domain chang$ rm foo.socket
chang-mbp:bind_unix_domain chang$ ./bind_unix_domain
UNIX domain socket bound
</pre>