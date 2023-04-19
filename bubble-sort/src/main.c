#include <stdlib.h>
#include "funcoes.h"

int main() {
    int *vetor = NULL;
    int tamanho = 0, temp;
    char linha[1024], *ptr;
    LerSequencia(linha, sizeof(linha));
    ConverterLinhaEmVetor(linha, &tamanho, &vetor);
    OrdenarBubbleSort(vetor, tamanho);
    MostrarListaOrdenada(vetor, tamanho);
    free(vetor);
    return 0;
}