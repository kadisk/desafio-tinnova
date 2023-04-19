
#include "funcoes.h"

#define FILENAME "arq.txt"

int main() {
    
    if (EscreveArquivo(FILENAME) != 0) {
        return 1;
    }
    if (LeArquivo(FILENAME) != 0) {
        return 1;
    }

    return 0;
}
