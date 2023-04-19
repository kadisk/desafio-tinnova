#ifndef AUXILIAR_H
#define AUXILIAR_H

struct Comodo {
    int tipo;
    float largura;
    float comprimento;
};

void MostraApresentacao();
void EscolherComodo(int* tipo);
void EspecificarTamanhoDoComodo(struct Comodo *comodo);
void MostrarResultado(float area, int total_lampadas, int tipo);
void MostraMensagemDeComodoTipoInvalido();

float CalcularArea(float largura, float comprimento);
int CalcularQtdeLampada(int tipoComodo, float areaComodo);

#endif