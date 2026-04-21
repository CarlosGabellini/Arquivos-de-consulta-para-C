#include <stdio.h>
#include <stdlib.h>

void fun () {

    int *x = (int*) malloc(sizeof(int));
    *x = 5;

    printf ("%d\n", *x);
}

int main () {

    fun();

    //O programa ainda continua, mas o endereco se perde assim que a funcao retorna;

    //A variavel x aqui foi destruida, somente ela sabia o endereco certo da memoria;

    //Mas infelizmente o endereco foi perdido para sempre, voce tem o valor, mas perdeu totalmente o endereco;
    //Eh como se eu trancasse uma casa, jogasse a chave fora e esquecesse, voce ate sabe o que tem la dentro, mas nao tem
    //mais acesso.

    return 0;
}