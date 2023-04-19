#include <stdio.h>
#include <math.h>
#include "constantes.h"
#include "auxiliar.h"

int main() {
  
    struct Comodo comodo;
    float area;
    int total_lampadas;

    MostraApresentacao();
    EscolherComodo(&comodo.tipo);

    while (comodo.tipo != -1) {
        if(comodo.tipo >= 0 && comodo.tipo <= 4){
            EspecificarTamanhoDoComodo(&comodo);
            area = CalcularArea(comodo.largura, comodo.comprimento);
            total_lampadas = CalcularQtdeLampada(comodo.tipo, area);
            MostrarResultado(area, total_lampadas, comodo.tipo);
        } else {
            MostraMensagemDeComodoTipoInvalido();
        }
       
        EscolherComodo(&comodo.tipo);
    }

    return 0;
}
