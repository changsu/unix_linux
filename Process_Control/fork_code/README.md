1. standord I/O are line buffered if connected to a terminal device, otherwise, full buffered
In this case, if we start the process w/o redirect, connected to a terminal device, when "before fork\n"
is called, it will be flushed due to the new line. And when fork() happened, child process copy over empty
buf. However, in redirection mode, stdout is full buffered, which means that buf will not be flushed and
copied over to child process. Then when child or parent process exit, standard I/O will be flushed and printed
out twice. This is interesting.

2. parenet and child process share text segment, means share the code

<pre>
rlchu-t430s:fork_code chang$ ./fork_code
a write to stdout
before fork
pid = 67131, glob = 7, var = 87
pid = 67129, glob = 6, var = 86
rlchu-t430s:fork_code chang$ ./fork_code > tmp
rlchu-t430s:fork_code chang$ cat tmp
a write to stdout
before fork
pid = 67133, glob = 7, var = 87
before fork
pid = 67132, glob = 6, var = 86
</pre>