pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 4096 192.168.88.88 17076 0
mbpoll: Unable to write read-only element ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 4112 192.168.88.88 100000
mbpoll: Unable to write read-only element ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 1 -r 4200 192.168.88.88 1
mbpoll: Unable to write read-only element ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 4096 192.168.88.88 34464 1
mbpoll: Unable to write read-only element ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 12288 192.168.88.88 34464 1
mbpoll: Unable to write read-only element ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 12288 192.168.88.88 1
mbpoll: Unable to write read-only element ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -r 2048 -c 2 192.168.88.88 
mbpoll 1.0-0 - FieldTalk(tm) Modbus(R) Master Simulator
Copyright © 2015-2019 Pascal JEAN, https://github.com/epsilonrt/mbpoll
This program comes with ABSOLUTELY NO WARRANTY.
This is free software, and you are welcome to redistribute it
under certain conditions; type 'mbpoll -w' for details.

Protocol configuration: Modbus TCP
Slave configuration...: address = [2]
                        start reference = 2048, count = 2
Communication.........: 192.168.88.88, port 502, t/o 1.00 s, poll rate 1000 ms
Data type.............: 16-bit register, output (holding) register table

-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
-- Polling slave 2... Ctrl-C to stop)
[2048]: 	65535 (-1)
[2049]: 	65535 (-1)
^C--- 192.168.88.88 poll statistics ---
32 frames transmitted, 32 received, 0 errors, 0.0% frame loss

everything was closed.
Have a nice day !
pavel@debian:~$ 

