* Calendar time: counts the number of seconds since the Epoch:00:00:00 Jan 1, 1970
* Process time (CPU time): measure the central processor resources used by a process. Measured in clock ticks, e.g. 100 ticks per second

Unix System maintains theree values for a process:
* Clock time
* User CPU time: attributed to user instruactions
* System CPU time: attributed to the kernel

User CPU time + System CPU time = CPU time
<pre>
cd /usr/include
time -p grep _POSIX_SOURCE */*.h > /dev/nul
</pre>