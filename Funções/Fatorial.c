#include <stdio.h>

//Basicamente o INCLUDE são funções e bibliotecas ja prontas para o uso, por isso SEMPRE devemos colocar ela primeiro;

int calculo_fatorial(int n) {

    //LEMBRE-SE de que, a função MAIN é a principal do codigo, por isso prescisamos colocar nossas funções PRIMEIRO antes de usar a principal;

    int fat = 1;
    
    for (int i = n; i > 1; i--) {

        fat = fat * i;
    }

    return fat;
}

void main () {

    //Agora chamamos a função main;
    //Ela sempre vem DEPOIS;

    int numero_input;

    printf ("Digite um numero: \n");
    scanf ("%d", &numero_input);;

    printf ("Resultado de: %d\n", calculo_fatorial(numero_input));          //Chamando a função e utilizando ela para o codigo;
}