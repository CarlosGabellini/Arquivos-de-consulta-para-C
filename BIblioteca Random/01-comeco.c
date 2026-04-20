#include <stdio.h>
#include <stdlib.h>

//Basicamente podemos usar a biblioteca stdlib para gerar numeros aleatorios em C.
//Vamos desvendar um pouco mais como ela eh.

int main () {

    short int numero = rand();

    //O problema eh que esse numero sera o mesmo depois, entao prescisamos de outro truque.

    printf ("O numero gerado eh: %d\n", numero);

    return 0;
}