#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//A funcao calloc eh semelhante a funcao malloc, porém possui dos parametros de entrada:

//O numero de elementos a serem alocados;
//O tamanho desse tipo de elementos;

//Ela tambem inicializa as variaveis com 0;

int main () {

    int qtd;
    float media = 0;
    srand(time(NULL));

    qtd = 5;
    int *array = (int*) calloc(qtd, sizeof(int));       //Aqui sao 2 parametros;

    for (int i = 0; i < qtd; i++) {

        array[i] = 1 + (rand() % 99);
        printf ("%d\n", array[i]);

        media += array[i];
    }

    printf("A media sera de: %.2f\n", media/qtd);
    free(array);

    return 0;
}