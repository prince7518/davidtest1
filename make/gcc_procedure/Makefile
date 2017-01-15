SUBS=1 2 3 4 proj so

all:
	for i in $(SUBS);do	\
		make -C $$i ;	\
	done
clean:
	for i in $(SUBS);do make -C $$i clean;done
	
