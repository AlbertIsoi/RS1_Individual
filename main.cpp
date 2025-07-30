pavel@debian:~$ sudo ip addr add 192.168.88.100/24 dev enp2s0
pavel@debian:~$ ip a show enp2s0
2: enp2s0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
    link/ether 40:8d:5c:d0:98:01 brd ff:ff:ff:ff:ff:ff
    inet 192.168.88.100/24 scope global enp2s0
       valid_lft forever preferred_lft forever
pavel@debian:~$ ping 192.168.88.88
PING 192.168.88.88 (192.168.88.88) 56(84) bytes of data.
pavel@debian:~$ sudo nmap -p 502 192.168.88.88
[sudo] пароль для pavel: 
Starting Nmap 7.93 ( https://nmap.org ) at 2025-07-30 11:34 +05
setup_target: failed to determine route to 192.168.88.88
WARNING: No targets were specified, so 0 hosts scanned.
Nmap done: 0 IP addresses (0 hosts up) scanned in 0.03 seconds
pavel@debian:~$ ip addr show enp2s0
2: enp2s0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
    link/ether 40:8d:5c:d0:98:01 brd ff:ff:ff:ff:ff:ff
    inet6 fe80::489:7676:bf3c:a7c3/64 scope link noprefixroute 
       valid_lft forever preferred_lft forever
pavel@debian:~$ sudo nmap -Pn -p 502 192.168.88.88
Starting Nmap 7.93 ( https://nmap.org ) at 2025-07-30 11:37 +05
mass_dns: warning: Unable to determine any DNS servers. Reverse DNS is disabled. Try using --system-dns or specify valid servers with --dns-servers
Nmap scan report for 192.168.88.88
Host is up (0.00022s latency).

PORT    STATE SERVICE
502/tcp open  mbap
MAC Address: 58:A1:5F:29:E4:1D (Unknown)

Nmap done: 1 IP address (1 host up) scanned in 0.17 seconds
pavel@debian:~$ mbpoll -m tcp -a 2 -r 0 -c 1 192.168.88.88
mbpoll: start reference out of range (0) ! Try -h for help.
pavel@debian:~$ 






