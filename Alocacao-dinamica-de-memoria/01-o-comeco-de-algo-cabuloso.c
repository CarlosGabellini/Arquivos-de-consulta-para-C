#include <stdio.h>

//Vamos ver como eh o comando sizeof;

int main () {

    //Aqui estamos nos habituando melhor sobre o que o comando sizeof faz em nossa memoria;

    short int a = 10;
    short int tamanho_de_a = sizeof(a);
    int tamanho_double = sizeof(double);

    printf ("A variavel 'a' ocupa o comando: %d bytes\n", tamanho_de_a);
    printf ("O tipo double ocupa na memoria: %d bytes\n", tamanho_double);

    return 0;
}