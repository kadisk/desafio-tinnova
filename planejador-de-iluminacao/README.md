# Planejador de Iluminação

Este é um software de cálculo de iluminação por ambiente, projetado para ajudar o usuário a determinar a quantidade de lâmpadas necessárias para garantir uma iluminação adequada em qualquer cômodo da casa ou escritório.

O software começa com uma apresentação e, em seguida, apresenta uma tabela de tipos de cômodos com potências recomendadas. O usuário seleciona o tipo de cômodo desejado e insere as informações de largura e comprimento do cômodo. O software calcula a área do cômodo e a quantidade de lâmpadas necessárias com base na potência recomendada e na potência da lâmpada selecionada.

O resultado é exibido ao usuário com a quantidade de lâmpadas necessárias para o cômodo especificado. O usuário pode continuar a especificar outros cômodos ou sair do programa.

## Requisitos
- GCC (GNU Compiler Collection)
- Make


## Compilação e Execução

Para compilar o programa, é necessário ter o GCC instalado no sistema. Basta abrir um terminal na pasta do projeto e executar o comando `make`. Será gerado um arquivo executável chamado `planejador-de-iluminacao`.

Para executar o programa, basta rodar o comando `./planejador-de-iluminacao` no terminal. O programa irá solicitar as informações necessárias e apresentar o resultado na tela.

## Instalação e Desinstalação

Para instalar o programa no sistema, basta abrir um terminal na pasta do projeto e executar o comando `sudo make install`. Isso irá copiar o arquivo executável para a pasta `/usr/local/bin`.

Para desinstalar o programa, basta abrir um terminal na pasta do projeto e executar o comando `sudo make uninstall`. Isso irá remover o arquivo executável da pasta `/usr/local/bin`.
