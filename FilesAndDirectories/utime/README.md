<pre>
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  30 Mar 23 19:25 testfile
chang-mbp:utime chang$ ls -lu testfile
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  30 Mar 23 19:25 testfile
chang-mbp:utime chang$ ls -lc testfile
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  30 Mar 23 19:25 testfile
chang-mbp:utime chang$ make
make: Nothing to be done for `all'.
chang-mbp:utime chang$ ./utime_test testfile
chang-mbp:utime chang$ ls -l testfile
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  0 Mar 23 19:25 testfile
chang-mbp:utime chang$ ls -lu testfile
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  0 Mar 23 19:25 testfile
chang-mbp:utime chang$ ls -lc testfile
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  0 Mar 23 19:26 testfile
chang-mbp:utime chang$ emacsls
-bash: emacsls: command not found
chang-mbp:utime chang$ emacs utime_test.c
chang-mbp:utime chang$ make
g++ -c -Wall utime_test.c
utime_test.c: In function ‘int main(int, char**)’:
utime_test.c:10: warning: unused variable ‘timebuf’
g++ utime_test.o -o utime_test
chang-mbp:utime chang$ emacs utime_test.c
chang-mbp:utime chang$ make
g++ -c -Wall utime_test.c
g++ utime_test.o -o utime_test
chang-mbp:utime chang$ ls -l testfile
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  0 Mar 23 19:25 testfile
chang-mbp:utime chang$ ls -lu testfile
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  0 Mar 23 19:25 testfile
chang-mbp:utime chang$ ls -lc testfile
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  0 Mar 23 19:26 testfile
chang-mbp:utime chang$ ./utime_test testfile
chang-mbp:utime chang$ ls -l testfile
-rw-r--r--  1 chang  THEFACEBOOK\Domain Users  0 Mar 23 19:27 testfile
</pre>