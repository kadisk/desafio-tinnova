
#include "salto-lib.h"

int main() {

    struct Atleta atleta;
    atleta.melhor_salto = 0.0;
    atleta.pior_salto = 0.0;
    atleta.soma_saltos = 0.0;
    atleta.saltos = malloc(NUM_SALTOS * sizeof(float));

    while (1) {
        if(LerNomeAtleta(atleta.nome) == 0){
            break;
        }
        LerSaltos(atleta.saltos);
        CalcularResultado(&atleta);
        MostrarResultado(atleta);
    }

    free(atleta.saltos);

    return 0;
}
