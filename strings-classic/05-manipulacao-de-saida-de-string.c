#include <stdio.h>

int main () {

    char nome[] = "Felipe Aramaico";
    printf ("%s", &nome[7]);

    //Ja sei o que esta fazendo aqui, basicamente colocamos o endereco para indicar para o printf qual a posicao inicial.
    //Podemos fazer o uso do indice;

    return 0;
}