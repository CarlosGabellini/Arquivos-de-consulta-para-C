#include <stdio.h>

int* obter_array() {

    static int v[5];                    //static serve para os valores do array não se perderem e sendo necessaria ser chamada;

    for (int i = 0; i < 5; i++) {

        v[i] = i;
    }

    return v;
}

/*Basicamente aqui estamos chamando uma função na qual vai retornar praticamente um vetor, e como ela podemos chamar esta função dentro da main
e colocar ela em outra função, conseguimos basicamente guardar um array inteiro assim que ele for chamado*/

int main () {

    int *vetor = obter_array();             //Caso queira retornar um array VOCE PRESCISA fazer o uso do asteriscos;

    for (int j = 0; j < 5; j++) {

        printf ("%d, ", vetor[j]);
    }

    return 0;
}