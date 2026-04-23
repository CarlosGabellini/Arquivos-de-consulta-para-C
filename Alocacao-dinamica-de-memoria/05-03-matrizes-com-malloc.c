#include <stdio.h>
#include <stdlib.h>

//Melhor forma de mexer com arrays bidimensionais usando malloc;

int main () {

    int linha = 3;
    int coluna = 3;

    int (*matriz)[coluna] = malloc(linha * sizeof *matriz);         //A coluna aqui eh tamanho fixo;
    int *incrementador = (int*) malloc(sizeof(int));

    //Incrementador com malloc aqui eh desnecessario, somente usado para aprendizado;

    *incrementador = 1;

    for (int i = 0; i < linha; i++) {

        for (int j = 0; j < coluna; j++) {

            matriz[i][j] = *incrementador;
            printf("[%d]\t", matriz[i][j]);

            (*incrementador)++;
        }

        printf("\n");
    }

    /*Aqui temos vantagens claras, onde a sintaxe eh preservada com os beneficios abaixo:
    
    - Uma unica alocacao;
    - Memoria continua;
    - Codigo mais simples;          (Simplicidade eh tudo);
    - Menor risco de erro;
    */

    free(matriz);
    free(incrementador);

    return 0;
}