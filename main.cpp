pavel@debian:~$ sudo ip addr add 192.168.88.100/24 dev eth0
[sudo] пароль для pavel: 
Cannot find device "eth0"
pavel@debian:~$ ip a
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host noprefixroute 
       valid_lft forever preferred_lft forever
2: enp2s0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
    link/ether 40:8d:5c:d0:98:01 brd ff:ff:ff:ff:ff:ff
    inet 192.168.88.66/24 brd 192.168.88.255 scope global dynamic noprefixroute enp2s0
       valid_lft 345sec preferred_lft 345sec
    inet 192.168.88.100/24 scope global secondary enp2s0
       valid_lft forever preferred_lft forever
    inet6 fe80::489:7676:bf3c:a7c3/64 scope link noprefixroute 
       valid_lft forever preferred_lft forever
3: wlx0857003e7951: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc mq state DOWN group default qlen 1000
    link/ether f2:44:f1:bd:92:c4 brd ff:ff:ff:ff:ff:ff permaddr 08:57:00:3e:79:51
4: enxc84d4429a8a0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
    link/ether c8:4d:44:29:a8:a0 brd ff:ff:ff:ff:ff:ff
    inet6 fe80::ce2a:a91:c922:9296/64 scope link noprefixroute 
       valid_lft forever preferred_lft forever
pavel@debian:~$ 


