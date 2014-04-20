<pre>
chang-mbp:record_locking chang$ ./deadlock
child: got the lock ,byte 0
child: got the lock ,byte 1
child: write_lock error: Resource temporarily unavailable
chang-mbp:record_locking chang$ ./deadlock
child: got the lock ,byte 0
child: got the lock ,byte 1
child: write_lock error: Resource temporarily unavailable
chang-mbp:record_locking chang$ ./deadlock
child: got the lock ,byte 0
child: got the lock ,byte 1
child: write_lock error: Resource temporarily unavailable
</pre>