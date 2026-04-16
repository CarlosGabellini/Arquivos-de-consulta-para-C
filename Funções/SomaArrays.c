#include <stdio.h>

//Fazendo uma função de soma simples de arrays em C, na qual é um bom aprendizado;

int SomaElementos (int vetor[], int tamanho) {

    int soma = 0;

    while (--tamanho >= 0) {

        soma += vetor[tamanho];
    }

    return soma;
}

void main () {

    int numeros[5] = {1, 2, 3, 4, 5};

    printf ("\nSoma: %s\n", SomaElementos(numeros, 4));
}