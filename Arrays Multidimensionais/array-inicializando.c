#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int array [10][10];                                         //Basicamente tamanho do numero de linhas e colunas;
    int linha = 1;

    //Como inicilizar um array?

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            array[i][j] = 0;

            printf ("Os arrays estão com os valores: %d na linha %d \n", array[i][j], linha++);
        }
    }

    //Basicamente inicializamos os arrays com todos igual a 0, e depois podemos atribuir valores neles.

    return 0;
}
