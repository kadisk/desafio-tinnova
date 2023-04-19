#include <stdio.h>
#include <stdlib.h>

#define FILENAME "arq.txt"

FILE* AbrirArquivoDeGravacao(){
    return fopen(FILENAME, "w");
}

FILE* AbrirArquivoDeLeitura(){
    return fopen(FILENAME, "r");
}

void EscreveArquivo(){
    FILE *file = AbrirArquivoDeGravacao();
    char input;

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    printf("\033[1mDigite caracteres e pressione ENTER. Digite '0' para finalizar a entrada:\033[0m\n");
    do {
        scanf(" %c", &input);
        if (input != '0') {
            fprintf(file, "%c", input);
        }
    } while (input != '0');
    fclose(file);
}

void LeArquivo(){
    FILE *file = AbrirArquivoDeLeitura();
    char input;

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("\n\033[1mConteúdo do arquivo:\033[0m\n");
    while ((input = fgetc(file)) != EOF) {
        printf("%c", input);
    }

    fclose(file);
}

int main() {
    
    EscreveArquivo();
    LeArquivo();

    return 0;
}
