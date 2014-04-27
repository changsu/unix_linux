<pre>
chang-mbp:addrinfo chang$ ./addrinfo chang-mbp.local ssh
flags 0  family inet type datagram protocol UDP
      host chang-mbp.local address 10.0.0.6 port 22
flags 0  family inet type stream protocol TCP
      host chang-mbp.local address 10.0.0.6 port 22
flags 0  family inet6 type datagram protocol UDP
      host chang-mbp.local
flags 0  family inet6 type stream protocol TCP
      host chang-mbp.local
chang-mbp:addrinfo chang$ ./addrinfo chang-mbp.local telnet
flags 0  family inet type datagram protocol UDP
      host chang-mbp.local address 10.0.0.6 port 23
flags 0  family inet type stream protocol TCP
      host chang-mbp.local address 10.0.0.6 port 23
flags 0  family inet6 type datagram protocol UDP
      host chang-mbp.local
flags 0  family inet6 type stream protocol TCP
      host chang-mbp.local
chang-mbp:addrinfo chang$ ./addrinfo chang-mbp.local nimhub
flags 0  family inet type datagram protocol UDP
      host chang-mbp.local address 10.0.0.6 port 48002
flags 0  family inet type stream protocol TCP
      host chang-mbp.local address 10.0.0.6 port 48002
flags 0  family inet6 type datagram protocol UDP
      host chang-mbp.local
flags 0  family inet6 type stream protocol TCP
      host chang-mbp.local
</pre>
