#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    for (int i = 1; i <= 100; i++) {

        int numero_gerado = -43 + (int)rand() % 81;         //Numeros gerados de -43 até 37;

        printf ("Numero gerado foi: %d\n", numero_gerado);
    }

    return 0;
}