#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int **ponteiro;         //Cada asterisco equivale a 1 dimensao
    int linhas = 3;
    int colunas = 3;

    srand(time(NULL));

    ponteiro = (int**) malloc(linhas * sizeof(int*));

    for (int i = 0; i < 3; i++) {

        ponteiro[i] = (int*)malloc(colunas * sizeof(int));          //Alocando um espaco para as colunas, dentro do array;

        for (int j = 0; j < 3; j++) {
            ponteiro[i][j] = 1 + rand() % 10;
        }
    }

    //Essa matriz chamada ponteiros aqui na verdade eh a mesma coisa que ponteiro[i][j] = *(*(p + i) + j);

    //Vamos fazer a impressao pra ver se esta ocorrendo tudo certo;

    for (int a = 0; a < 3; a++) {

        for (int b = 0; b < 3; b++) {
            printf("%d\t", ponteiro[a][b]);
        }

        printf("\n");
    }

    for (int a = 0; a < 3; a++) {
        free(ponteiro[a]);
    }

    free(ponteiro);

    return 0;
}