#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "salto-lib.h"

char* TrazerOrdinalPorExtenso(int indice){
    switch (indice) {
        case 0:
            return "Primeiro";
        case 1:
            return "Segundo";
        case 2:
            return "Terceiro";
        case 3:
            return "Quarto";
        case 4:
            return "Quinto";
    }
}

int LerNomeAtleta(char *nome){
    printf("\nDigite o nome do atleta: ");
    fgets(nome, 50, stdin);
    if (nome[0] == '\n') {
        return 0;
    }
    return 1;
}

float LerSalto(int i){
    float salto;
    char entrada[50];
    while (1) {
        printf("\t %s Salto: ", TrazerOrdinalPorExtenso(i));
        fgets(entrada, 50, stdin);
        if (sscanf(entrada, "%f", &salto) == 1) {
            return salto;
        } else {
            printf("\t Entrada inválida. Tente novamente.\n");
        }
    }
}

void LerSaltos(float *saltos){
    for (int i = 0; i < NUM_SALTOS; i++) {
        saltos[i] = LerSalto(i);
    }
}

void CalcularResultado(struct Atleta *atleta){
    atleta->melhor_salto = atleta->saltos[0];
    atleta->pior_salto = atleta->saltos[0];
    atleta->soma_saltos = atleta->saltos[0];

    for (int i = 1; i < NUM_SALTOS; i++) {
        if (atleta->saltos[i] > atleta->melhor_salto) {
            atleta->melhor_salto = atleta->saltos[i];
        }
        if (atleta->saltos[i] < atleta->pior_salto) {
            atleta->pior_salto = atleta->saltos[i];
        }
        atleta->soma_saltos += atleta->saltos[i];
    }

    atleta->media = (atleta->soma_saltos - atleta->melhor_salto - atleta->pior_salto) / NUM_SALTOS_VALIDOS;
}

void MostrarResultado(struct Atleta atleta){
    printf("\nMelhor salto: %.2f m\n", atleta.melhor_salto);
    printf("Pior salto: %.2f m\n", atleta.pior_salto);
    printf("Media dos demais saltos: %.2f m\n", atleta.media);
    printf("Resultado final:\n");
    printf("\tNome:%s", atleta.nome);
    printf("\tSalto: %.2f m\n", atleta.media);
}