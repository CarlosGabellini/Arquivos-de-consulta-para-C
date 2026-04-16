#include <stdio.h>

int main () {

    int x = 10;
    int *ponteiro1 = &x;
    int **pp = &ponteiro1;          //Um ponteiro que aponta para outro ponteiro que por sua vez aponta pra uma variavel;

    //Conteudo do ponteiro;
    printf ("Conteudo de pp: %p\n", pp);
    printf ("Conteudo desreferenciado de pp: %p\n", *pp);
    printf ("Conteudo desreferenciado na segunda vez: %i\n", **pp);

    return 0;
}