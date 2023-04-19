CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LDLIBS = -lm
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

all: ordenacao-bubble-sort

ordenacao-bubble-sort: src/main.c
	$(CC) $(CFLAGS) src/main.c $(LDLIBS) -o ordenacao-bubble-sort

install: ordenacao-bubble-sort
	install -D -m 755 ordenacao-bubble-sort $(BINDIR)/ordenacao-bubble-sort

uninstall:
	rm -f $(BINDIR)/ordenacao-bubble-sort

clean:
	rm -f ordenacao-bubble-sort