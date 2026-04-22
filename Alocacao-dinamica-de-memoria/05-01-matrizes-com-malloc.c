#include <stdio.h>
#include <stdlib.h>

int main () {

    short int linha_da_matriz = 3;
    short int coluna_da_matriz = 3;

    short int *matriz = (short int*) malloc(linha_da_matriz * coluna_da_matriz * sizeof(short int));

    //Agora podemos acessar e fazer matrizes de uma outra forma, mais dinamica e com mais memoria;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            matriz[i * coluna_da_matriz + j] = 1 + rand() % 10;
        }
    }

    //Vamos fazer a impressao pra ver se esta ocorrendo tudo certo;

    for (int a = 0; a < 3; a++) {

        for (int b = 0; b < 3; b++) {
            printf("%hd\t", matriz[a * coluna_da_matriz + b]);
        }

        printf("\n");
    }

    free(matriz);

    return 0;
}