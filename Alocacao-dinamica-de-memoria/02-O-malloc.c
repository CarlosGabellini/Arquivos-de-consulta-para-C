#include <stdio.h>
#include <stdlib.h>

int main () {

    int *x = (int*) malloc(sizeof(int));        //Sempre prescisa colocar int ou float por que o malloc retorna um void;

    //Quando reservamos um espaco na Heap com o Malloc, ele sempre comeca com lixo de memoria;

    *x = 10;

    printf ("O valor da variavel x eh %d\n", *x);
    printf ("O endereco de x eh %p\n", x);

    free(x);        //Sem esse programa, ele pode consumir toda a memoria do PC caso fique usando ele o tempo todo;

    //Eh bem importante sempre usar o free para essa memoria ser liberada;

    return 0;
}