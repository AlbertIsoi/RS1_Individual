pavel@debian:~$ ping 192.168.88.66
PING 192.168.88.66 (192.168.88.66) 56(84) bytes of data.
64 bytes from 192.168.88.66: icmp_seq=1 ttl=64 time=0.018 ms
64 bytes from 192.168.88.66: icmp_seq=2 ttl=64 time=0.021 ms
64 bytes from 192.168.88.66: icmp_seq=3 ttl=64 time=0.022 ms
64 bytes from 192.168.88.66: icmp_seq=4 ttl=64 time=0.027 ms
64 bytes from 192.168.88.66: icmp_seq=5 ttl=64 time=0.029 ms
64 bytes from 192.168.88.66: icmp_seq=6 ttl=64 time=0.036 ms
64 bytes from 192.168.88.66: icmp_seq=7 ttl=64 time=0.021 ms
64 bytes from 192.168.88.66: icmp_seq=8 ttl=64 time=0.047 ms
64 bytes from 192.168.88.66: icmp_seq=9 ttl=64 time=0.056 ms
64 bytes from 192.168.88.66: icmp_seq=10 ttl=64 time=0.044 ms
64 bytes from 192.168.88.66: icmp_seq=11 ttl=64 time=0.035 ms
pavel@debian:~$ mbpoll -b 115200 -t 3 -p none -r 9200 -a 3 /dev/ttyUSB0
mbpoll 1.0-0 - FieldTalk(tm) Modbus(R) Master Simulator
Copyright © 2015-2019 Pascal JEAN, https://github.com/epsilonrt/mbpoll
This program comes with ABSOLUTELY NO WARRANTY.
This is free software, and you are welcome to redistribute it
under certain conditions; type 'mbpoll -w' for details.

mbpoll: Connection failed: No such file or directory.
pavel@debian:~$ mbpoll -m tcp -a 1 -r 9200 -c 1 192.168.88.66
mbpoll 1.0-0 - FieldTalk(tm) Modbus(R) Master Simulator
Copyright © 2015-2019 Pascal JEAN, https://github.com/epsilonrt/mbpoll
This program comes with ABSOLUTELY NO WARRANTY.
This is free software, and you are welcome to redistribute it
under certain conditions; type 'mbpoll -w' for details.

mbpoll: Connection failed: Connection refused.
pavel@debian:~$ mbpoll -m tcp -a 3 -r 9200 -c 1 192.168.88.66
mbpoll 1.0-0 - FieldTalk(tm) Modbus(R) Master Simulator
Copyright © 2015-2019 Pascal JEAN, https://github.com/epsilonrt/mbpoll
This program comes with ABSOLUTELY NO WARRANTY.
This is free software, and you are welcome to redistribute it
under certain conditions; type 'mbpoll -w' for details.

mbpoll: Connection failed: Connection refused.
pavel@debian:~$ sudo apt update
[sudo] пароль для pavel: 
Сущ:1 http://security.debian.org/debian-security bookworm-security InRelease
Сущ:2 http://deb.debian.org/debian bookworm InRelease                          
Сущ:3 http://deb.debian.org/debian bookworm-updates InRelease                  
Сущ:4 https://packages.microsoft.com/repos/code stable InRelease               
Чтение списков пакетов… Готово            
Построение дерева зависимостей… Готово
Чтение информации о состоянии… Готово         
Может быть обновлено 7 пакетов. Запустите «apt list --upgradable» для их показа.
pavel@debian:~$ sudo apt install mbpoll
Чтение списков пакетов… Готово
Построение дерева зависимостей… Готово
Чтение информации о состоянии… Готово         
Уже установлен пакет mbpoll самой новой версии (1.4.11+dfsg-2).
Следующие пакеты устанавливались автоматически и больше не требуются:
  linux-image-6.1.0-25-amd64 linux-image-6.1.0-27-amd64
Для их удаления используйте «sudo apt autoremove».
Обновлено 0 пакетов, установлено 0 новых пакетов, для удаления отмечено 0 пакетов, и 7 пакетов не обновлено.
pavel@debian:~$ 

