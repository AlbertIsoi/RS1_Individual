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
pavel@debian:~$ sudo ip addr flush dev enp2s0
pavel@debian:~$ sudo ip addr add 192.168.88.100/24 dev enp2s0
pavel@debian:~$ sudo apt install nmap
Чтение списков пакетов… Готово
Построение дерева зависимостей… Готово
Чтение информации о состоянии… Готово         
Уже установлен пакет nmap самой новой версии (7.93+dfsg1-1).
Следующие пакеты устанавливались автоматически и больше не требуются:
  linux-image-6.1.0-25-amd64 linux-image-6.1.0-27-amd64
Для их удаления используйте «sudo apt autoremove».
Обновлено 0 пакетов, установлено 0 новых пакетов, для удаления отмечено 0 пакетов, и 7 пакетов не обновлено.
pavel@debian:~$ nmap -sP 192.168.88.0/24
Starting Nmap 7.93 ( https://nmap.org ) at 2025-07-30 10:40 +05
Nmap scan report for 192.168.88.1
Host is up (0.00054s latency).
Nmap scan report for 192.168.88.2
Host is up (0.043s latency).
Nmap scan report for 192.168.88.3
Host is up (0.0035s latency).
Nmap scan report for 192.168.88.4
Host is up (0.0066s latency).
Nmap scan report for 192.168.88.5
Host is up (0.0034s latency).
Nmap scan report for 192.168.88.6
Host is up (0.0033s latency).
Nmap scan report for 192.168.88.10
Host is up (0.0013s latency).
Nmap scan report for 192.168.88.11
Host is up (0.0018s latency).
Nmap scan report for 192.168.88.13
Host is up (0.0013s latency).
Nmap scan report for 192.168.88.22
Host is up (0.054s latency).
Nmap scan report for 192.168.88.30
Host is up (0.00091s latency).
Nmap scan report for 192.168.88.39
Host is up (0.0015s latency).
Nmap scan report for 192.168.88.40
Host is up (0.0015s latency).
Nmap scan report for 192.168.88.41
Host is up (0.00087s latency).
Nmap scan report for 192.168.88.42
Host is up (0.00083s latency).
Nmap scan report for 192.168.88.43
Host is up (0.0022s latency).
Nmap scan report for 192.168.88.44
Host is up (0.0022s latency).
Nmap scan report for 192.168.88.45
Host is up (0.0025s latency).
Nmap scan report for 192.168.88.46
Host is up (0.0014s latency).
Nmap scan report for 192.168.88.47
Host is up (0.0025s latency).
Nmap scan report for 192.168.88.48
Host is up (0.0046s latency).
Nmap scan report for 192.168.88.49
Host is up (0.0012s latency).
Nmap scan report for 192.168.88.50
Host is up (0.0011s latency).
Nmap scan report for 192.168.88.51
Host is up (0.0011s latency).
Nmap scan report for 192.168.88.52
Host is up (0.0013s latency).
Nmap scan report for 192.168.88.54
Host is up (0.0026s latency).
Nmap scan report for 192.168.88.57
Host is up (0.0021s latency).
Nmap scan report for 192.168.88.73
Host is up (0.0025s latency).
Nmap scan report for 192.168.88.100
Host is up (0.00019s latency).
Nmap scan report for 192.168.88.108
Host is up (0.0022s latency).
Nmap scan report for 192.168.88.131
Host is up (0.0015s latency).
Nmap scan report for 192.168.88.142
Host is up (0.0012s latency).
Nmap scan report for 192.168.88.148
Host is up (0.00081s latency).
Nmap scan report for 192.168.88.149
Host is up (0.00077s latency).
Nmap scan report for 192.168.88.158
Host is up (0.0011s latency).
Nmap scan report for 192.168.88.188
Host is up (0.0011s latency).
Nmap scan report for 192.168.88.216
Host is up (0.0016s latency).
Nmap scan report for 192.168.88.228
Host is up (0.0011s latency).
Nmap scan report for 192.168.88.236
Host is up (0.0041s latency).
Nmap scan report for 192.168.88.240
Host is up (0.089s latency).
Nmap scan report for 192.168.88.243
Host is up (0.0020s latency).
Nmap done: 256 IP addresses (41 hosts up) scanned in 19.26 seconds
pavel@debian:~$ nmap -sP 192.168.88.0/24
Starting Nmap 7.93 ( https://nmap.org ) at 2025-07-30 10:41 +05
Nmap scan report for 192.168.88.1
Host is up (0.00047s latency).
Nmap scan report for 192.168.88.3
Host is up (0.0017s latency).
Nmap scan report for 192.168.88.4
Host is up (0.0020s latency).
Nmap scan report for 192.168.88.5
Host is up (0.0016s latency).
Nmap scan report for 192.168.88.6
Host is up (0.0019s latency).
Nmap scan report for 192.168.88.8
Host is up (0.0072s latency).
Nmap scan report for 192.168.88.10
Host is up (0.0023s latency).
Nmap scan report for 192.168.88.11
Host is up (0.00097s latency).
Nmap scan report for 192.168.88.13
Host is up (0.0047s latency).
Nmap scan report for 192.168.88.22
Host is up (0.094s latency).
Nmap scan report for 192.168.88.30
Host is up (0.00035s latency).
Nmap scan report for 192.168.88.39
Host is up (0.00063s latency).
Nmap scan report for 192.168.88.40
Host is up (0.00078s latency).
Nmap scan report for 192.168.88.41
Host is up (0.0027s latency).
Nmap scan report for 192.168.88.42
Host is up (0.00048s latency).
Nmap scan report for 192.168.88.43
Host is up (0.00051s latency).
Nmap scan report for 192.168.88.44
Host is up (0.0028s latency).
Nmap scan report for 192.168.88.45
Host is up (0.0013s latency).
Nmap scan report for 192.168.88.46
Host is up (0.0012s latency).
Nmap scan report for 192.168.88.47
Host is up (0.0024s latency).
Nmap scan report for 192.168.88.48
Host is up (0.0013s latency).
Nmap scan report for 192.168.88.49
Host is up (0.0012s latency).
Nmap scan report for 192.168.88.50
Host is up (0.0011s latency).
Nmap scan report for 192.168.88.51
Host is up (0.00051s latency).
Nmap scan report for 192.168.88.52
Host is up (0.0022s latency).
Nmap scan report for 192.168.88.54
Host is up (0.00070s latency).
Nmap scan report for 192.168.88.57
Host is up (0.00059s latency).
Nmap scan report for 192.168.88.73
Host is up (0.00086s latency).
Nmap scan report for 192.168.88.100
Host is up (0.00018s latency).
Nmap scan report for 192.168.88.108
Host is up (0.00053s latency).
Nmap scan report for 192.168.88.131
Host is up (0.0025s latency).
Nmap scan report for 192.168.88.142
Host is up (0.0026s latency).
Nmap scan report for 192.168.88.148
Host is up (0.0044s latency).
Nmap scan report for 192.168.88.149
Host is up (0.00098s latency).
Nmap scan report for 192.168.88.158
Host is up (0.0037s latency).
Nmap scan report for 192.168.88.180
Host is up (0.16s latency).
Nmap scan report for 192.168.88.188
Host is up (0.0031s latency).
Nmap scan report for 192.168.88.216
Host is up (0.00075s latency).
Nmap scan report for 192.168.88.228
Host is up (0.0018s latency).
Nmap scan report for 192.168.88.236
Host is up (0.00088s latency).
Nmap scan report for 192.168.88.240
Host is up (0.088s latency).
Nmap scan report for 192.168.88.243
Host is up (0.0012s latency).
Nmap done: 256 IP addresses (42 hosts up) scanned in 25.01 seconds
