#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        printf("\nRodada %d\n", i + 1);
        printf("==================================================\n");
        for (j = 0; j < tamanho - 1 - i; j++) {
            printf("(%d  %d) ", vetor[j], vetor[j + 1]);
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                printf("trocamos\n");
            } else {
                printf("mantemos <----\n");
            }
        }
    }
}

int main() {
    int *vetor = NULL;
    int tamanho = 0, temp;
    char linha[1024], *ptr;

    printf("Digite uma sequencia de inteiros para ser ordenada (pressione Enter para terminar): ");
    fgets(linha, sizeof(linha), stdin);

    ptr = linha;
    while (sscanf(ptr, "%d", &temp) == 1) {
        tamanho++;
        vetor = realloc(vetor, tamanho * sizeof(int));
        vetor[tamanho - 1] = temp;
        ptr = strchr(ptr, ' '); // Procura pelo próximo espaço na linha
        if (!ptr) break;
        ptr++; // Avança para o próximo número
    }

    bubble_sort(vetor, tamanho);

    printf("\nLista Ordenada:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}
