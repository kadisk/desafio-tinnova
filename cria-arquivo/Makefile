CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LDLIBS = -lm
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

all: cria-arquivo

cria-arquivo: src/main.c src/funcoes.h src/impl.c
	$(CC) $(CFLAGS) src/main.c src/impl.c $(LDLIBS) -o cria-arquivo

install: cria-arquivo
	install -D -m 755 cria-arquivo $(BINDIR)/cria-arquivo

uninstall:
	rm -f $(BINDIR)/cria-arquivo

clean:
	rm -f cria-arquivo