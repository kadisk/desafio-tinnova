#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_SALTOS 5
#define NUM_SALTOS_VALIDOS 3

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
    printf("Digite o nome do atleta: ");
    fgets(nome, 50, stdin);
    return strcmp(nome, "\n");
}

void LerSaltos(float *saltos){
    for (int i = 0; i < NUM_SALTOS; i++) {
        printf("\t %s Salto: ", TrazerOrdinalPorExtenso(i));
        scanf("%f", &saltos[i]);
        getchar();
    }
}

void CalcularResultado(float *saltos, float *melhor_salto, float *pior_salto, float *soma_saltos, float *media){
    *melhor_salto = saltos[0];
    *pior_salto = saltos[0];
    *soma_saltos = saltos[0];

    for (int i = 1; i < NUM_SALTOS; i++) {
        if (saltos[i] > *melhor_salto) {
            *melhor_salto = saltos[i];
        }
        if (saltos[i] < *pior_salto) {
            *pior_salto = saltos[i];
        }
        *soma_saltos += saltos[i];
    }

    *media = (*soma_saltos - *melhor_salto - *pior_salto) / NUM_SALTOS_VALIDOS;
}

void MostrarResultado(char *nome, float melhor_salto, float pior_salto, float media){
    printf("\nMelhor salto: %.2f m\n", melhor_salto);
    printf("Pior salto: %.2f m\n", pior_salto);
    printf("Media dos demais saltos: %.2f m\n", media);
    printf("Resultado final:\n%s: %.2f m\n", nome, media);
}

int main() {
    float saltos[NUM_SALTOS];
    float media = 0.0;
    float melhor_salto = 0.0;
    float pior_salto = 0.0;
    float soma_saltos = 0.0;
    char nome[50];

    while (1) {
        if(LerNomeAtleta(nome) == 0){
            break;
        }
        LerSaltos(saltos);
        CalcularResultado(saltos, &melhor_salto, &pior_salto, &soma_saltos, &media);
        MostrarResultado(nome, melhor_salto, pior_salto, media);
    }

    return 0;
}
