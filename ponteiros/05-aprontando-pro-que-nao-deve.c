#include <stdio.h>

//Ao acessar conteudo de endereço null o programa interrompe;
//Ao acessar conteudo que nao deveria:

//1. O programa pode acessar (endereço de memoria valido, sorte ou azar?);
//2. O programa pode interromper informando erro ou não;

int main () {

    int a;
    int *pa = &a;

    for (int i = 0; i < 1000; i++) {

        printf ("Indice I; %d\n", i);
        printf ("Endereço salvo em pa: %X\n", pa);
        printf ("Conteudo de endereço salvo em pa: %d\n", *pa);

        printf ("\n");

        *pa = 10;
        pa = pa - 1000;
    }

    return 0;
}