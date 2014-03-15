* the fcntl function can change the properties of a file that is already open
* Result
<pre>
chang-mbp:fcntl_impl chang$ ./fcntl_impl 0
read write
chang-mbp:fcntl_impl chang$ ./fcntl_impl 0 < /dev/tty
read only
chang-mbp:fcntl_impl chang$ ./fcntl_impl 1
read write
chang-mbp:fcntl_impl chang$ ./fcntl_impl 1 > temp.foo
chang-mbp:fcntl_impl chang$ cat temp.foo
write only
chang-mbp:fcntl_impl chang$ ./fcntl_impl 2 2>>temp.foo
write only, append
chang-mbp:fcntl_impl chang$ ./fcntl_impl 5 5<>temp.foo
read write
chang-mbp:fcntl_impl chang$ cat temp.foo
write only
chang-mbp:fcntl_impl chang$ ./fcntl_impl 5 5<>temp.foo2
read write
</pre>

Turn on flag:
<pre>
val |= flags
</pre>

Turn off flag:
<pre>
val &= ~flags
</pre>