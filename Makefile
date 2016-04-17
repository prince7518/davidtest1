SUBS=adv_io file fork gdb inotify make pipe signal

all:
	for i in $(SUBS);do make -C $$i ;done
clean:
	for i in $(SUBS);do make -C $$i clean;done
	
