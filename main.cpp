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
       valid_lft 415sec preferred_lft 415sec
    inet 192.168.88.100/24 scope global secondary enp2s0
       valid_lft forever preferred_lft forever
    inet6 fe80::489:7676:bf3c:a7c3/64 scope link noprefixroute 
       valid_lft forever preferred_lft forever
3: wlx0857003e7951: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc mq state DOWN group default qlen 1000
    link/ether f2:21:82:f1:c5:b1 brd ff:ff:ff:ff:ff:ff permaddr 08:57:00:3e:79:51
4: enxc84d4429a8a0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc fq_codel state DOWN group default qlen 1000
    link/ether c8:4d:44:29:a8:a0 brd ff:ff:ff:ff:ff:ff
pavel@debian:~$ ip a | grep 192.168.88
    inet 192.168.88.66/24 brd 192.168.88.255 scope global dynamic noprefixroute enp2s0
    inet 192.168.88.100/24 scope global secondary enp2s0
pavel@debian:~$ arp -a
bash: arp: команда не найдена
pavel@debian:~$ ip route
default via 192.168.88.1 dev enp2s0 proto dhcp src 192.168.88.66 metric 100 
192.168.88.0/24 dev enp2s0 proto kernel scope link src 192.168.88.66 metric 100 
pavel@debian:~$ ping 192.168.88.66
PING 192.168.88.66 (192.168.88.66) 56(84) bytes of data.
64 bytes from 192.168.88.66: icmp_seq=1 ttl=64 time=0.020 ms
64 bytes from 192.168.88.66: icmp_seq=2 ttl=64 time=0.021 ms
64 bytes from 192.168.88.66: icmp_seq=3 ttl=64 time=0.024 ms
64 bytes from 192.168.88.66: icmp_seq=4 ttl=64 time=0.033 ms
^C
--- 192.168.88.66 ping statistics ---
4 packets transmitted, 4 received, 0% packet loss, time 3059ms
rtt min/avg/max/mdev = 0.020/0.024/0.033/0.005 ms
pavel@debian:~$ sudo ip neigh flush all
pavel@debian:~$ sudo ip route flush cache
pavel@debian:~$ ping 192.168.88.66
PING 192.168.88.66 (192.168.88.66) 56(84) bytes of data.
64 bytes from 192.168.88.66: icmp_seq=1 ttl=64 time=0.021 ms
64 bytes from 192.168.88.66: icmp_seq=2 ttl=64 time=0.021 ms
64 bytes from 192.168.88.66: icmp_seq=3 ttl=64 time=0.023 ms
64 bytes from 192.168.88.66: icmp_seq=4 ttl=64 time=0.033 ms
64 bytes from 192.168.88.66: icmp_seq=5 ttl=64 time=0.045 ms
64 bytes from 192.168.88.66: icmp_seq=6 ttl=64 time=0.047 ms
^C
--- 192.168.88.66 ping statistics ---
6 packets transmitted, 6 received, 0% packet loss, time 5123ms
rtt min/avg/max/mdev = 0.021/0.031/0.047/0.010 ms
pavel@debian:~$ 

