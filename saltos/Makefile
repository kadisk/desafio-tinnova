CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LDLIBS = -lm
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

all: saltos

saltos: src/main.c src/salto-lib.h src/salto-lib-impl.c
	$(CC) $(CFLAGS) src/main.c src/salto-lib-impl.c $(LDLIBS) -o saltos

install: saltos
	install -D -m 755 saltos $(BINDIR)/saltos

uninstall:
	rm -f $(BINDIR)/saltos

clean:
	rm -f saltos