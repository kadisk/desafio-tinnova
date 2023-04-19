# Programa de Cálculo de Média de Saltos em Distância
Este é um programa que calcula a média dos saltos em distância realizados por um atleta em uma competição de salto em distância, após eliminar o melhor e o pior resultado dentre os cinco saltos realizados. O programa faz uso de uma lista para armazenar os saltos.

## Compilação
Para compilar o programa, basta utilizar o seguinte comando no terminal:

``` bash
make
```
Esse comando irá gerar um arquivo executável chamado saltos no diretório atual.

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

## Utilização do Programa
Para utilizar o programa, execute-o no terminal com o seguinte comando:

``` bash
./saltos
```
O programa irá solicitar o nome do atleta e as cinco distâncias alcançadas em seus saltos, e em seguida irá calcular e exibir a média dos três valores restantes, conforme a descrição informada no início deste documento. O programa continuará solicitando os dados de novos atletas até que não seja informado o nome de um atleta.

## Exemplo de Saída
``` bash
Atleta: Joãozinho da Silva
Primeiro Salto: 5.4
Segundo Salto: 5.3
Terceiro Salto: 6.5
Quarto Salto: 6.2
Quinto Salto: 6.1

Melhor salto: 6.50 m
Pior salto: 5.30 m
Media dos demais saltos: 5.93 m

Resultado final:
    Nome: Joãozinho da Silva
    Salto: 5.93 m
```