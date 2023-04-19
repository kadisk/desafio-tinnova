#include <stdio.h>
#include <stdlib.h>

#define FILENAME "arq.txt"

int main() {
    // a) Crie/abra um arquivo texto de nome "arq.txt"
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // b) Permita que o usuário entre com diversos caracteres nesse arquivo, até que o usuário entre com o caractere '0'
    char input;
    printf("Digite caracteres e pressione ENTER. Digite '0' para finalizar a entrada:\n");
    do {
        scanf(" %c", &input);
        if (input != '0') {
            fprintf(file, "%c", input);
        }
    } while (input != '0');

    // c) Feche o arquivo e abra novamente o arq.txt
    fclose(file);
    file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // d) Lendo-o caractere por caractere, e escrevendo na tela (printf) todos os caracteres armazenados
    printf("Conteúdo do arquivo:\n");
    while ((input = fgetc(file)) != EOF) {
        printf("%c", input);
    }

    // Feche o arquivo
    fclose(file);
    return 0;
}
