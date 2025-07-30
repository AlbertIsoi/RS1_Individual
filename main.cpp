pavel@debian:~$ ping 192.168.88.66
PING 192.168.88.66 (192.168.88.66) 56(84) bytes of data.
From 192.168.88.100 icmp_seq=1 Destination Host Unreachable
From 192.168.88.100 icmp_seq=2 Destination Host Unreachable
From 192.168.88.100 icmp_seq=3 Destination Host Unreachable
From 192.168.88.100 icmp_seq=4 Destination Host Unreachable
From 192.168.88.100 icmp_seq=5 Destination Host Unreachable
From 192.168.88.100 icmp_seq=6 Destination Host Unreachable
From 192.168.88.100 icmp_seq=7 Destination Host Unreachable
From 192.168.88.100 icmp_seq=8 Destination Host Unreachable
From 192.168.88.100 icmp_seq=9 Destination Host Unreachable
From 192.168.88.100 icmp_seq=10 Destination Host Unreachable
From 192.168.88.100 icmp_seq=11 Destination Host Unreachable
From 192.168.88.100 icmp_seq=12 Destination Host Unreachable
From 192.168.88.100 icmp_seq=13 Destination Host Unreachable
From 192.168.88.100 icmp_seq=14 Destination Host Unreachable
From 192.168.88.100 icmp_seq=15 Destination Host Unreachable
From 192.168.88.100 icmp_seq=16 Destination Host Unreachable
From 192.168.88.100 icmp_seq=17 Destination Host Unreachable
From 192.168.88.100 icmp_seq=18 Destination Host Unreachable
From 192.168.88.100 icmp_seq=19 Destination Host Unreachable
From 192.168.88.100 icmp_seq=20 Destination Host Unreachable
From 192.168.88.100 icmp_seq=21 Destination Host Unreachable
From 192.168.88.100 icmp_seq=22 Destination Host Unreachable
From 192.168.88.100 icmp_seq=23 Destination Host Unreachable
From 192.168.88.100 icmp_seq=24 Destination Host Unreachable
From 192.168.88.100 icmp_seq=25 Destination Host Unreachable
From 192.168.88.100 icmp_seq=26 Destination Host Unreachable
From 192.168.88.100 icmp_seq=27 Destination Host Unreachable
^C
--- 192.168.88.66 ping statistics ---
28 packets transmitted, 0 received, +27 errors, 100% packet loss, time 27634ms
pipe 4
pavel@debian:~$ ping 192.168.88.66
ping: connect: Сеть недоступна
pavel@debian:~$ ping 192.168.88.66
PING 192.168.88.66 (192.168.88.66) 56(84) bytes of data.
64 bytes from 192.168.88.66: icmp_seq=1 ttl=64 time=0.030 ms
64 bytes from 192.168.88.66: icmp_seq=2 ttl=64 time=0.032 ms
64 bytes from 192.168.88.66: icmp_seq=3 ttl=64 time=0.035 ms
64 bytes from 192.168.88.66: icmp_seq=4 ttl=64 time=0.041 ms
64 bytes from 192.168.88.66: icmp_seq=5 ttl=64 time=0.046 ms
64 bytes from 192.168.88.66: icmp_seq=6 ttl=64 time=0.046 ms
64 bytes from 192.168.88.66: icmp_seq=7 ttl=64 time=0.088 ms
64 bytes from 192.168.88.66: icmp_seq=8 ttl=64 time=0.057 ms
64 bytes from 192.168.88.66: icmp_seq=9 ttl=64 time=0.055 ms
64 bytes from 192.168.88.66: icmp_seq=10 ttl=64 time=0.108 ms
64 bytes from 192.168.88.66: icmp_seq=11 ttl=64 time=0.046 ms
64 bytes from 192.168.88.66: icmp_seq=12 ttl=64 time=0.057 ms
64 bytes from 192.168.88.66: icmp_seq=13 ttl=64 time=0.064 ms
64 bytes from 192.168.88.66: icmp_seq=14 ttl=64 time=0.056 ms
64 bytes from 192.168.88.66: icmp_seq=15 ttl=64 time=0.096 ms
64 bytes from 192.168.88.66: icmp_seq=16 ttl=64 time=0.074 ms
64 bytes from 192.168.88.66: icmp_seq=17 ttl=64 time=0.050 ms
64 bytes from 192.168.88.66: icmp_seq=18 ttl=64 time=0.066 ms
64 bytes from 192.168.88.66: icmp_seq=19 ttl=64 time=0.065 ms
64 bytes from 192.168.88.66: icmp_seq=20 ttl=64 time=0.066 ms
64 bytes from 192.168.88.66: icmp_seq=21 ttl=64 time=0.088 ms
64 bytes from 192.168.88.66: icmp_seq=22 ttl=64 time=0.027 ms
64 bytes from 192.168.88.66: icmp_seq=23 ttl=64 time=0.051 ms
64 bytes from 192.168.88.66: icmp_seq=24 ttl=64 time=0.026 ms
64 bytes from 192.168.88.66: icmp_seq=25 ttl=64 time=0.062 ms
64 bytes from 192.168.88.66: icmp_seq=26 ttl=64 time=0.059 ms
64 bytes from 192.168.88.66: icmp_seq=27 ttl=64 time=0.069 ms
64 bytes from 192.168.88.66: icmp_seq=28 ttl=64 time=0.061 ms
64 bytes from 192.168.88.66: icmp_seq=29 ttl=64 time=0.028 ms
^C
--- 192.168.88.66 ping statistics ---
29 packets transmitted, 29 received, 0% packet loss, time 28663ms
rtt min/avg/max/mdev = 0.026/0.056/0.108/0.020 ms
pavel@debian:~$ ping 192.168.88.66
PING 192.168.88.66 (192.168.88.66) 56(84) bytes of data.
64 bytes from 192.168.88.66: icmp_seq=1 ttl=64 time=0.041 ms
64 bytes from 192.168.88.66: icmp_seq=2 ttl=64 time=0.031 ms
64 bytes from 192.168.88.66: icmp_seq=3 ttl=64 time=0.030 ms
64 bytes from 192.168.88.66: icmp_seq=4 ttl=64 time=0.035 ms
64 bytes from 192.168.88.66: icmp_seq=5 ttl=64 time=0.041 ms
64 bytes from 192.168.88.66: icmp_seq=6 ttl=64 time=0.055 ms
64 bytes from 192.168.88.66: icmp_seq=7 ttl=64 time=0.069 ms
64 bytes from 192.168.88.66: icmp_seq=8 ttl=64 time=0.062 ms
^C
--- 192.168.88.66 ping statistics ---
8 packets transmitted, 8 received, 0% packet loss, time 7163ms
rtt min/avg/max/mdev = 0.030/0.045/0.069/0.013 ms
pavel@debian:~$  ip a
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host noprefixroute 
       valid_lft forever preferred_lft forever
2: enp2s0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
    link/ether 40:8d:5c:d0:98:01 brd ff:ff:ff:ff:ff:ff
    inet 192.168.88.66/24 brd 192.168.88.255 scope global dynamic noprefixroute enp2s0
       valid_lft 539sec preferred_lft 539sec
    inet6 fe80::489:7676:bf3c:a7c3/64 scope link noprefixroute 
       valid_lft forever preferred_lft forever
4: enxc84d4429a8a0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc fq_codel state DOWN group default qlen 1000
    link/ether c8:4d:44:29:a8:a0 brd ff:ff:ff:ff:ff:ff
5: wlx0857003e7951: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc mq state DOWN group default qlen 1000
    link/ether 4a:20:ab:53:e1:36 brd ff:ff:ff:ff:ff:ff permaddr 08:57:00:3e:79:51
pavel@debian:~$ 
pavel@debian:~$ 

