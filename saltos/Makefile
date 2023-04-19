CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LDLIBS = -lm
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

all: saltos

saltos: src/main.c
	$(CC) $(CFLAGS) src/main.c $(LDLIBS) -o saltos

install: saltos
	install -D -m 755 saltos $(BINDIR)/saltos

uninstall:
	rm -f $(BINDIR)/saltos

clean:
	rm -f saltos