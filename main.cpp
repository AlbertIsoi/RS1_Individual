everything was closed.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 4096 -c 4 192.168.88.88 17076 0 
mbpoll: -c parameter must not be specified for writing ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 4096 -c 2 192.168.88.88 17076 0 
mbpoll: -c parameter must not be specified for writing ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 4096 -c 2 192.168.88.88 17076 0 
mbpoll: -c parameter must not be specified for writing ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 4096 -c 4 192.168.88.88 17076 0 
mbpoll: -c parameter must not be specified for writing ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -r 0 -c 1 192.168.88.88
mbpoll: start reference out of range (0) ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -r 0 -c 1 192.168.88.88
mbpoll: start reference out of range (0) ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -r 1 -c 4 192.168.88.88
mbpoll 1.0-0 - FieldTalk(tm) Modbus(R) Master Simulator
Copyright © 2015-2019 Pascal JEAN, https://github.com/epsilonrt/mbpoll
This program comes with ABSOLUTELY NO WARRANTY.
This is free software, and you are welcome to redistribute it
under certain conditions; type 'mbpoll -w' for details.

Protocol configuration: Modbus TCP
Slave configuration...: address = [2]
                        start reference = 1, count = 4
Communication.........: 192.168.88.88, port 502, t/o 1.00 s, poll rate 1000 ms
Data type.............: 16-bit register, output (holding) register table

-- Polling slave 2... Ctrl-C to stop)
[1]: 	30
[2]: 	18499
[3]: 	11601
[4]: 	17197
-- Polling slave 2... Ctrl-C to stop)
[1]: 	30
[2]: 	18499
[3]: 	11601
[4]: 	17197
-- Polling slave 2... Ctrl-C to stop)
[1]: 	30
[2]: 	18499
[3]: 	11601
[4]: 	17197
^C--- 192.168.88.88 poll statistics ---
3 frames transmitted, 3 received, 0 errors, 0.0% frame loss

everything was closed.
Have a nice day !
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 1 -c 1 192.168.88.88 1
mbpoll: -c parameter must not be specified for writing ! Try -h for help.
pavel@debian:~$ mbpoll -m tcp -a 2 -0 -t 3:int -r 3 -c 1 192.168.88.88 1
mbpoll: -c parameter must not be specified for writing ! Try -h for help.
pavel@debian:~$ 

