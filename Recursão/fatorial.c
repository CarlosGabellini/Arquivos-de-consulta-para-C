#include <stdio.h>

int fatorial (int n) {

    int resultado = n;

    for (int i = 1; i < n; i++) {

        resultado *= i;
    }

    return resultado;
}

int fatorial_recursivo (int num) {

    if (num < 1) {
        return 1;
    }

    return num * fatorial_recursivo(num - 1);
}

int main () {

    int x = 4;

    printf ("%d\n", fatorial(x));
    printf ("%d\n", fatorial_recursivo(x));

    return 0;
}