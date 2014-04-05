tempname
<pre>
chang-mbp:tmp_file chang$ ./tmp_file /home/chang TEMP
/var/tmp/TEMP9lIfDV
chang-mbp:tmp_file chang$ ./tmp_file
usage: a.out <dir> <prefix>
chang-mbp:tmp_file chang$ ./tmp_file "" PFX
/var/tmp/PFXW2A7VT
chang-mbp:tmp_file chang$ pwd
/Users/chang/Documents/Self_Learning/unix_linux/StandardIO_Lib/tmp_file
chang-mbp:tmp_file chang$ ./tmp_file /Users/chang/ TEMP
/Users/chang/TEMPxhqezG
chang-mbp:tmp_file chang$ ls -l /Users/chang/TEMPxhqezG
ls: /Users/chang/TEMPxhqezG: No such file or directory
</pre>