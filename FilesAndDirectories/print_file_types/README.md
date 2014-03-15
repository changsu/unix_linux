lstat can detect symbolic link, stat can not

Result
<pre>
/dev/ptyud: character special
chang-mbp:print_file_types chang$ ./file_types /dev/ptyv0
/dev/ptyv0: character special
chang-mbp:print_file_types chang$ ./file_types /etc/passwd
/etc/passwd: regular
chang-mbp:print_file_types chang$ ./file_types /dev/ptyv0
/dev/ptyv0: character special
chang-mbp:print_file_types chang$ ./file_types /dev
/dev: direcotry
chang-mbp:print_file_types chang$ ./file_types >
-bash: syntax error near unexpected token `newline'
chang-mbp:print_file_types chang$ ./file_types /dev/cdrom
/dev/cdrom: lstat erro: No such file or directory
chang-mbp:print_file_types chang$ ./file_types ~/
/Users/chang/: direcotry
</pre>