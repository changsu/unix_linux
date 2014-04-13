<pre>
hlit420:signal_suspend chang$ ./sigsuspend
program start:
in critical region: SIGINT
^C^C^C
 in sig_int: SIGINTSIGUSR1
after return from sigsuspend: SIGINT
program exit:
hlit420:signal_suspend chang$ ./sigsuspend
program start:
in critical region: SIGINT
^C
 in sig_int: SIGINTSIGUSR1
after return from sigsuspend: SIGINT
program exit:
</pre>