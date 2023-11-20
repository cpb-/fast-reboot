
DESTDIR ?= /usr/local/sbin

all: fast-reboot

fast-reboot: fast-reboot.o
	$(CC) $(LDFLAGS) -o $@ $^

fast-reboot.o: fast-reboot.c
	$(CC) $(FLAGS) -c $<

clean:
	rm -f fast-reboot *.o

install: fast-reboot
	cp fast-reboot $(DESTDIR)/
