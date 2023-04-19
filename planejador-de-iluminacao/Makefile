CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LDLIBS = -lm
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

all: planejador-de-iluminacao

planejador-de-iluminacao: src/main.c src/auxiliar.c src/auxiliar.h src/constantes.h
	$(CC) $(CFLAGS) src/main.c src/auxiliar.c $(LDLIBS) -o planejador-de-iluminacao

install: planejador-de-iluminacao
	install -D -m 755 planejador-de-iluminacao $(BINDIR)/planejador-de-iluminacao

uninstall:
	rm -f $(BINDIR)/planejador-de-iluminacao

clean:
	rm -f planejador-de-iluminacao