#include <stdio.h>

//Passagem de valor vs passagem de refencia;

//Vendo como funciona uma passagem de valor por referencia;

void funcao_dobrar(int *pa) {

    *pa = *pa * 2;

    //A funcao não é mais por conteudo, e sim em endereco, podemos fazer chamada por referencia agora para funcoes;
}

int main () {

    int a = 10;
    
    printf ("Valor de a: %d\n", a);

    funcao_dobrar(&a);

    printf ("Valor de a agora: %d\n", a);

    return 0;
}