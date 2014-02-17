result
<pre>
chang-mbp:error chang$ ./error_exp
EACCES: Permission denied
./error_exp: No such file or directory
</pre>

Error Recovery
* fatal error: best we can do is print and error message on the screen or write and error message into a log file and then exit.
* nonfatal error. recoverable, resource shortage, may try later. say network connection or access shared resources in lock. different bakeoff algorithms