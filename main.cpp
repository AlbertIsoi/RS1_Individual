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
pavel@debian:~$ 
