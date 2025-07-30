pavel@debian:~$ sudo nmap -sV 192.168.88.0/24
Starting Nmap 7.93 ( https://nmap.org ) at 2025-07-30 10:44 +05
Warning: 192.168.88.240 giving up on port because retransmission cap hit (10).

pavel@debian:~$ sudo apt install net-tools
[sudo] пароль для pavel: 
Чтение списков пакетов… Готово
Построение дерева зависимостей… Готово
Чтение информации о состоянии… Готово         
Следующие пакеты устанавливались автоматически и больше не требуются:
  linux-image-6.1.0-25-amd64 linux-image-6.1.0-27-amd64
Для их удаления используйте «sudo apt autoremove».
Следующие НОВЫЕ пакеты будут установлены:
  net-tools
Обновлено 0 пакетов, установлено 1 новых пакетов, для удаления отмечено 0 пакетов, и 7 пакетов не обновлено.
Необходимо скачать 243 kB архивов.
После данной операции объём занятого дискового пространства возрастёт на 1 001 kB.
Пол:1 http://security.debian.org/debian-security bookworm-security/main amd64 net-tools amd64 2.10-0.1+deb12u2 [243 kB]
Получено 243 kB за 0с (662 kB/s)    
Выбор ранее не выбранного пакета net-tools.
(Чтение базы данных … на данный момент установлено 207029 файлов и каталогов.)
Подготовка к распаковке …/net-tools_2.10-0.1+deb12u2_amd64.deb …
Распаковывается net-tools (2.10-0.1+deb12u2) …
Настраивается пакет net-tools (2.10-0.1+deb12u2) …
Обрабатываются триггеры для man-db (2.11.2-2) …
pavel@debian:~$ arp -a
bash: arp: команда не найдена
pavel@debian:~$ ip neigh
192.168.88.30 dev enp2s0 lladdr 30:9c:23:1c:64:27 REACHABLE 
192.168.88.22 dev enp2s0 lladdr 32:08:3a:74:0d:19 REACHABLE 
192.168.88.47 dev enp2s0 lladdr 00:12:41:7f:51:15 REACHABLE 
192.168.88.14 dev enp2s0 lladdr 70:85:c2:99:18:ea REACHABLE 
192.168.88.39 dev enp2s0 lladdr 4c:36:4e:f3:ba:1b REACHABLE 
192.168.88.6 dev enp2s0 lladdr 00:12:15:74:69:56 REACHABLE 
192.168.88.52 dev enp2s0 lladdr 58:11:22:bc:cf:1a REACHABLE 
192.168.88.23 dev enp2s0 lladdr e8:80:88:63:c1:3e REACHABLE 
192.168.88.44 dev enp2s0 lladdr 00:12:31:57:0b:33 REACHABLE 
192.168.88.73 dev enp2s0 lladdr f8:b1:56:c8:18:15 REACHABLE 
192.168.88.131 dev enp2s0 lladdr 4c:36:4e:b7:2f:dd REACHABLE 
192.168.88.243 dev enp2s0 lladdr e0:3f:49:07:de:e0 REACHABLE 
192.168.88.45 dev enp2s0 lladdr 00:12:41:5c:29:1b REACHABLE 
192.168.88.4 dev enp2s0 lladdr 4c:36:4e:9a:78:61 STALE 
192.168.88.70 dev enp2s0 lladdr 00:25:22:be:3a:52 REACHABLE 
192.168.88.240 dev enp2s0 lladdr 00:17:c8:98:40:eb REACHABLE 
192.168.88.50 dev enp2s0 lladdr 00:12:41:7f:5b:bf REACHABLE 
192.168.88.13 dev enp2s0 lladdr bc:c3:42:03:13:11 REACHABLE 
192.168.88.108 dev enp2s0 lladdr c8:22:02:48:f3:15 REACHABLE 
192.168.88.42 dev enp2s0 lladdr 00:12:41:8a:60:16 REACHABLE 
192.168.88.5 dev enp2s0 lladdr b8:27:eb:8f:75:e0 REACHABLE 
192.168.88.158 dev enp2s0 lladdr e4:18:6b:5a:ea:96 REACHABLE 
192.168.88.216 dev enp2s0 lladdr 4c:36:4e:48:31:3e REACHABLE 
192.168.88.59 dev enp2s0 lladdr 84:ef:18:d4:19:1c REACHABLE 
192.168.88.26 dev enp2s0 lladdr b0:a4:60:10:63:37 REACHABLE 
192.168.88.51 dev enp2s0 lladdr 00:12:41:89:d6:f6 REACHABLE 
192.168.88.18 dev enp2s0 lladdr 70:85:c2:47:5b:6d REACHABLE 
192.168.88.109 dev enp2s0 lladdr 90:2b:34:16:6b:8a REACHABLE 
192.168.88.142 dev enp2s0 lladdr 10:2f:a3:2f:a6:cd REACHABLE 
192.168.88.43 dev enp2s0 lladdr 00:12:41:7f:57:09 REACHABLE 
192.168.88.10 dev enp2s0 lladdr bc:c3:42:03:0d:5b REACHABLE 
192.168.88.188 dev enp2s0 lladdr 00:12:41:c9:63:9b REACHABLE 
192.168.88.180 dev enp2s0 lladdr 56:92:0f:5b:b2:2f REACHABLE 
192.168.88.48 dev enp2s0 lladdr 00:12:31:08:29:bc REACHABLE 
192.168.88.40 dev enp2s0 lladdr 00:12:43:80:d0:c0 REACHABLE 
192.168.88.11 dev enp2s0 lladdr 4c:36:4e:9a:7b:44 REACHABLE 
192.168.88.3 dev enp2s0 lladdr b8:27:eb:e1:fd:ee REACHABLE 
192.168.88.57 dev enp2s0 lladdr 2c:fd:a1:60:43:a0 REACHABLE 
192.168.88.24 dev enp2s0 lladdr 20:1a:06:3b:15:a5 REACHABLE 
192.168.88.148 dev enp2s0 lladdr 00:12:41:7f:5e:81 REACHABLE 
192.168.88.49 dev enp2s0 lladdr 00:12:31:45:fd:3d REACHABLE 
192.168.88.41 dev enp2s0 lladdr 00:88:09:19:e6:b0 REACHABLE 
192.168.88.8 dev enp2s0 lladdr 62:41:1b:f0:01:bc REACHABLE 
192.168.88.25 dev enp2s0 lladdr 14:18:c3:94:6c:3b REACHABLE 
192.168.88.149 dev enp2s0 lladdr 00:12:41:7f:5d:72 REACHABLE 
192.168.88.54 dev enp2s0 lladdr 00:88:09:15:a8:42 REACHABLE 
192.168.88.17 dev enp2s0 lladdr 76:3b:f1:72:2a:5e REACHABLE 
192.168.88.236 dev enp2s0 lladdr 00:12:16:b2:5a:59 REACHABLE 
192.168.88.46 dev enp2s0 lladdr 00:12:41:c8:ba:98 REACHABLE 
192.168.88.228 dev enp2s0 lladdr 00:12:16:b3:12:34 REACHABLE 
192.168.88.1 dev enp2s0 lladdr 6c:3b:6b:0b:d3:b7 REACHABLE 
pavel@debian:~$ 

