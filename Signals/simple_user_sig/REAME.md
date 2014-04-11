<pre>
chang-mbp:simple_user_sig chang$ ./simple_user_sig &
[1] 10957
chang-mbp:simple_user_sig chang$ kill -USER1 10957
-bash: kill: USER1: invalid signal specification
chang-mbp:simple_user_sig chang$ kill -USR1 10957
receive SIGUSER1
chang-mbp:simple_user_sig chang$ kill -USR2 10957
receive SIGUSER2
chang-mbp:simple_user_sig chang$ kill -USR1 10957
receive SIGUSER1
chang-mbp:simple_user_sig chang$ kill -USR2 10957
receive SIGUSER2
chang-mbp:simple_user_sig chang$ kill -USR2 10957
receive SIGUSER2
chang-mbp:simple_user_sig chang$ kill 10957
chang-mbp:simple_user_sig chang$
[1]+  Terminated: 15          ./simple_user_sig
</pre>