#include <stdio.h>

//Função recursiva em cauda é aquela que a chamada recursiva é a ultima instrução;

int fatorialAux (int n, int acumulador);
int fatorial (int n);

int fatorialAux(int n, int acumulador) {

    if (n < 1) {
        return acumulador;
    }

    return fatorialAux (n - 1, n * acumulador);
}

int fatorial (int n) {

    return fatorialAux(n - 1, 1);
}

void main () {

    printf ("Fatorial de 5: %d\n", fatorial(5));
}