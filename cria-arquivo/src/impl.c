#include <stdio.h>

FILE* AbrirArquivoDeGravacao(char* filename){
    return fopen(filename, "w");
}

FILE* AbrirArquivoDeLeitura(char* filename){
    return fopen(filename, "r");
}

int EscreveArquivo(char* filename){
    FILE *file = AbrirArquivoDeGravacao(filename);
    char input;

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    printf("\033[1mDigites caracteres e pressione ENTER. Digite '0' para finalizar a entrada:\033[0m\n");
    while (1) {
        input = getchar();
        if (input == '0') {
            break;
        }
        fprintf(file, "%c", input);
    }
    fclose(file);
    return 0;
}

int LeArquivo(char* filename){
    FILE *file = AbrirArquivoDeLeitura(filename);
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
    return 0;
}
