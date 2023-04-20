# Programa de Manipulação de Arquivos
Este programa em C permite ao usuário criar ou abrir um arquivo de texto chamado "arq.txt", inserir caracteres nesse arquivo até que o caractere '0' seja digitado, indicando o fim da entrada de dados. Em seguida, o programa exibe o conteúdo do arquivo, respeitando as quebras de linha, na tela do terminal.

## Requisitos
- GCC (GNU Compiler Collection)
- Make

## Como compilar e executar no Linux
Abra o terminal e navegue até o diretório onde os arquivos estão armazenados.
Digite o seguinte comando para compilar o programa:
``` bash
make
```
Isso compilará o programa e gerará o arquivo executável "cria-arquivo".

Agora, para executar o programa, digite o seguinte comando no terminal:
``` bash
./cria-arquivo
```
Siga as instruções exibidas na tela para inserir caracteres no arquivo "arq.txt". Para encerrar a entrada de dados, digite o caractere '0'.

Após inserir os caracteres, o programa exibirá o conteúdo do arquivo "arq.txt" na tela do terminal, respeitando as quebras de linha.

## Limpar arquivos gerados pela compilação
Para remover os arquivos gerados pela compilação, como arquivos objeto e executáveis, digite o seguinte comando no terminal:

``` bash
make clean
```
Isso excluirá os arquivos "main.o" e "programa" gerados durante a compilação.

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