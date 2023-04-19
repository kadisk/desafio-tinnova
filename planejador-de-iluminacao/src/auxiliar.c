#include "constantes.h"
#include "auxiliar.h"

void MostraApresentacao() {
    printf("Bem-vindo(a) ao nosso software de cálculo de iluminação por ambiente!\n");
    printf("Com ele, você poderá determinar a quantidade de lâmpadas de %d watts necessárias\n", POTENCIA_LAMPADA);
    printf("para garantir uma iluminação adequada em qualquer cômodo da sua casa ou escritório.\n\n");
}

void MostraTabelaTiposDeComodos(){
    printf("Menu de tipos de cômodos:\n\n");
    printf("| Tipo de Cômodo     | Potência recomendada (watt/m²) |\n");
    printf("|--------------------|---------------------------------|\n");
    printf("|          0         | %d                              |\n", WATTS_POR_METRO_QUADRADO_TIPO_0);
    printf("|          1         | %d                              |\n", WATTS_POR_METRO_QUADRADO_TIPO_1);
    printf("|          2         | %d                              |\n", WATTS_POR_METRO_QUADRADO_TIPO_2);
    printf("|          3         | %d                              |\n", WATTS_POR_METRO_QUADRADO_TIPO_3);
    printf("|          4         | %d                              |\n", WATTS_POR_METRO_QUADRADO_TIPO_4);
    printf("\n");
}

void EscolherComodo(int* tipo){
    MostraTabelaTiposDeComodos();
    printf("Digite o tipo de cômodo (-1 para sair): ");
    if (scanf("%d", tipo) != 1) {
        MostraMensagemDeComodoTipoInvalido();
        while (getchar() != '\n');
        EscolherComodo(tipo);
    }
}

void LerPontoFlutuante(char *msg, float *inteiro){
     printf(msg);
    if (scanf("%f", inteiro)!=1){
        while (getchar() != '\n');
        LerPontoFlutuante(msg, inteiro);
    }
}

void EspecificarTamanhoDoComodo(struct Comodo *comodo){
        printf("\n\033[1mInformações do comôdo(em metros): \033[0m\n");
        LerPontoFlutuante("Digite a largura: ", &comodo->largura);
        LerPontoFlutuante("Digite o comprimento: ", &comodo->comprimento);
}

void MostrarResultado(float area, int total_lampadas, int tipo){
    printf("\n===============================================================================\n");
    printf("\033[32mPara um cômodo do tipo \033[1m%d\033[0m\033[32m com \033[1m%.2f m²\033[0m,\033[32m são necessárias \033[1m%d\033[0m\033[32m lâmpadas de %d watts.\n\033[0m", tipo, area, total_lampadas, POTENCIA_LAMPADA);
    printf("===============================================================================\n");
    printf("\nPressione qualquer tecla para continuar...\n\n");
    getchar();
    getchar();
}

void MostraMensagemDeComodoTipoInvalido(){
    printf("\n================================================\n");
    printf("\033[31mO cômodo de tipo inválido!\n\033[0m");
    printf("================================================\n");
}


float CalcularArea(float largura, float comprimento) {
    return largura * comprimento;
}

int CalcularQtdeLampada(int tipoComodo, float areaComodo) {
    float watts_por_metro_quadrado;
    int total_lampadas;

    switch (tipoComodo) {
        case 0:
            watts_por_metro_quadrado = WATTS_POR_METRO_QUADRADO_TIPO_0;
            break;
        case 1:
            watts_por_metro_quadrado = WATTS_POR_METRO_QUADRADO_TIPO_1;
            break;
        case 2:
            watts_por_metro_quadrado = WATTS_POR_METRO_QUADRADO_TIPO_2;
            break;
        case 3:
            watts_por_metro_quadrado = WATTS_POR_METRO_QUADRADO_TIPO_3;
            break;
        case 4:
            watts_por_metro_quadrado = WATTS_POR_METRO_QUADRADO_TIPO_4;
            break;
        default:
            MostraMensagemDeComodoTipoInvalido();
            break;
    }

    total_lampadas = ceil(watts_por_metro_quadrado * areaComodo / POTENCIA_LAMPADA);

    return total_lampadas;
}