#include <stdio.h>

int main () {

    float *x, *y = NULL;

    printf ("\n X = %p, && y = %p\n", x, y);

    //O que acontece se eu tentar imprimir o conteudo de x?

    printf ("Conteudo de X: %Xd\n", *x);

    return 0;
}