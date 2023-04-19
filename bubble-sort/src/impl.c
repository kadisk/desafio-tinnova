#include <stdio.h>

void OrdenarBubbleSort(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void LerSequencia(char *linha, int max_tamanho){
    printf("Digite uma sequencia de inteiros para ser ordenada (pressione Enter para terminar): ");
    fgets(linha, max_tamanho, stdin);
}

void ConverterLinhaEmVetor(char *linha, int *tamanho, int **vetor){
    int temp;
    char *ptr = linha;
    while (sscanf(ptr, "%d", &temp) == 1) {
        *tamanho = *tamanho + 1;
        *vetor = realloc(*vetor, *tamanho * sizeof(int));
        (*vetor)[*tamanho - 1] = temp;
        ptr = strchr(ptr, ' ');
        if (!ptr) break;
        ptr++;
    }
}

void MostrarListaOrdenada(int vetor[], int tamanho){
    printf("\nLista Ordenada:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}