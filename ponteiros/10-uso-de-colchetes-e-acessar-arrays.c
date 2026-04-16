#include <stdio.h>

void main () {

    int array0[10];
    int array1[10];
    int array2[10];
    int array3[10];

    int *array_ponteiro[4];
    array_ponteiro[0] = array0;
    array_ponteiro[1] = array1;
    array_ponteiro[2] = array2;
    array_ponteiro[3] = array3;

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 10; j++) {

            printf ("Array_ponteiros[%i][%i]\n", i, j);
            printf ("Impressao do valor sera de: %i\n", array_ponteiro[i][j]);

            printf ("\n");
        }
    }
}