#include <stdio.h>
#include "1-lib-matematica.h"

int main () {

    short int numero_digitado;

    printf ("Digite um numero: ");
    scanf ("%hd", &numero_digitado);

    printf ("A raiz quadrada desse numero eh? %.2f\n", raiz_quadrada(numero_digitado));

    return 0;
}