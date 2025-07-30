pavel@debian:~$ sudo ip addr flush dev enp2s0
pavel@debian:~$ sudo ip addr add 192.168.88.100/24 dev enp2s0
pavel@debian:~$ ping 192.168.88.88]
ping: 192.168.88.88]: Неизвестное имя или служба
pavel@debian:~$ ping 192.168.88.88
PING 192.168.88.88 (192.168.88.88) 56(84) bytes of data.
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
^C
--- 192.168.88.88 ping statistics ---
27 packets transmitted, 0 received, +24 errors, 100% packet loss, time 26610ms
pipe 4
pavel@debian:~$ ping 192.168.88.88
PING 192.168.88.88 (192.168.88.88) 56(84) bytes of data.
From 192.168.88.100 icmp_seq=1 Destination Host Unreachable
From 192.168.88.100 icmp_seq=2 Destination Host Unreachable
From 192.168.88.100 icmp_seq=3 Destination Host Unreachable
^C
--- 192.168.88.88 ping statistics ---
5 packets transmitted, 0 received, +3 errors, 100% packet loss, time 4087ms
pipe 4
pavel@debian:~$ sudo nmap -p 502 192.168.88.88
Starting Nmap 7.93 ( https://nmap.org ) at 2025-07-30 11:17 +05
Note: Host seems down. If it is really up, but blocking our ping probes, try -Pn
Nmap done: 1 IP address (0 hosts up) scanned in 1.49 seconds
pavel@debian:~$ 

