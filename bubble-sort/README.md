# Bubble Sort
Este programa implementa o algoritmo de ordenação Bubble Sort para ordenar uma sequência de inteiros fornecida pelo usuário. O usuário insere a sequência de números inteiros, e o programa ordena a sequência e exibe a lista ordenada como saída.

## Requisitos
- GCC (GNU Compiler Collection)
- Make

## Como compilar e executar no Linux
Abra o terminal e navegue até o diretório onde os arquivos estão armazenados.
Digite o seguinte comando para compilar o programa:
``` bash
make
```
Isso compilará o programa e gerará o arquivo executável "ordenacao-bubble-sort".

## Execução
Para executar o programa, execute o seguinte comando:

``` bash
./bubble_sort
```
Em seguida, insira a sequência de inteiros separados por espaços e pressione Enter para terminar:

``` bash
Digite uma sequencia de inteiros para ser ordenada (pressione Enter para terminar): 5 3 2 4 7 1 0 6
```
O programa exibirá a lista ordenada:

``` bash
Lista Ordenada:
0 1 2 3 4 5 6 7
```

## Instalação
Para instalar o programa, basta utilizar o seguinte comando no terminal (é necessário ter permissão de administrador):

``` bash
sudo make install
```

Esse comando irá copiar o arquivo executável saltos para o diretório /usr/local/bin, permitindo que o programa seja executado de qualquer diretório do sistema.

## Desinstalação
Para desinstalar o programa, basta utilizar o seguinte comando no terminal (é necessário ter permissão de administrador):

``` bash
sudo make uninstall
```
Esse comando irá remover o arquivo executável saltos do diretório /usr/local/bin, desinstalando o programa do sistema.