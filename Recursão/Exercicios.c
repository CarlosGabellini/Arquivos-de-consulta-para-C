#include <stdio.h>

//Faça um programa que calcula a média de n números digitados pelo usuario até ele informar 0;

int contador_numeros_informados = 0;
int soma_global = 0;

void calcula_media () {

    int entrada;

    printf ("Digite um numero: \n");
    scanf ("%d", &entrada);

    if (entrada == 0) {
        return;
    }

    soma_global += entrada;
    contador_numeros_informados++;

    return calcula_media();
}

void main () {

    calcula_media();

    printf ("Media: %.2f\n", (float) soma_global / contador_numeros_informados);
}