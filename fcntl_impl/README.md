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

* Set file status flags for a file descriptor
<pre>
void set_fl(int fd, int flags) {
     int val;
     if ((val = fcntl(fd, F_GETFL, 0)) < 0) {
     	err_sys("fcntl F_GETFL error");
     }    
     val |= flags;
     if (fcntl(fd, F_SETFL, val) < 0) {
     	err_sys("fcntl F_SETFL error");
     }    
}
</pre>