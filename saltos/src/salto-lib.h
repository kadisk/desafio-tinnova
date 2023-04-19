#ifndef SALTO_LIB_H
#define SALTO_LIB_H

#define NUM_SALTOS 5
#define NUM_SALTOS_VALIDOS 3

struct Atleta {
    char nome[50];
    float* saltos;
    float comprimento;
    float media;
    float melhor_salto;
    float pior_salto;
    float soma_saltos;
};

int LerNomeAtleta(char *nome);
void LerSaltos(float *saltos);
void CalcularResultado(struct Atleta *atleta);
void MostrarResultado(struct Atleta atleta);

#endif /* SALTO_LIB_H */