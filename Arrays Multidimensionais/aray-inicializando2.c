#include <stdio.h>
#include <math.h>

int main () {

    //Inicializando um array de 3 dimensões.

    int vetor1 [2][4][10];
    int linha = 0;

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 4; j++) {

            for (int k = 0; k < 10; k++) {

                vetor1[i][j][k] = 0;

                printf ("O vetor na posição [%d] [%d] [%d] = %d na linha %d \n", i, j, k, vetor1[i][j][k], linha++);
            }
        }
    }

    return 0;
}