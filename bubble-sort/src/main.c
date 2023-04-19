#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exibir_vetor(int vetor[], int tamanho, int i, int j) {
    for (int k = 0; k < tamanho; k++) {
        if (k == j) {
            printf("(%d  %d) ", vetor[k], vetor[k + 1]);
        } else if (k != j + 1) {
            printf("%d  ", vetor[k]);
        }
    }
    printf("\n");
}

void bubble_sort(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        printf("\nRodada %d\n", i + 1);
        printf("==================================================\n");
        for (j = 0; j < tamanho - 1 - i; j++) {
            exibir_vetor(vetor, tamanho, i, j);
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                printf("%*s--", 3 * j, "");
                exibir_vetor(vetor, tamanho, i, j);
                printf("trocamos\n");
            } else {
                printf("mantemos <----\n");
            }
        }
        printf("\n");
        for (int k = 0; k < tamanho - 1 - i; k++) {
            printf("%d  ", vetor[k]);
        }
        for (int k = tamanho - 1 - i; k < tamanho; k++) {
            printf("[%d] ", vetor[k]);
        }
        printf("final da rodada %d\n", i + 1);
    }
}

char LerSequencia(char *linha){
    printf("Digite uma sequencia de inteiros para ser ordenada (pressione Enter para terminar): ");
    fgets(linha, sizeof(linha), stdin);
    return linha;
}

void ConverterLinhaEmVetor(char *linha, int *tamanho, int *vetor){
    int temp;
    char *ptr = linha;
    while (sscanf(ptr, "%d", &temp) == 1) {
        *tamanho++;
        vetor = realloc(vetor, *tamanho * sizeof(int));
        vetor[*tamanho - 1] = temp;
        ptr = strchr(ptr, ' ');
        if (!ptr) break;
        ptr++;
    }

}

int main() {
    int *vetor = NULL;
    int tamanho = 0, temp;
    char linha[1024], *ptr;

    LerSequencia(linha);
    ConverterLinhaEmVetor(linha, &tamanho, vetor);

    bubble_sort(vetor, tamanho);

    printf("\nLista Ordenada:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}
