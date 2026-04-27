#include <stdio.h>
#include <stdlib.h>

//Vamos fazer uma funcao que retorna um endereco;

int *soma(int a, int b) {

    int *resultado = malloc(sizeof(int));
    *resultado = a + b;

    return resultado;           //Retornando o endereco na heap, ele ainda continua valido mesmo quando a funcao finaliza;
}

int main () {

    int a = 10;
    int b = 12;

    int *res = soma(a, b);          //Aqui se torna o mesmo endereco que estava na nossa funcao;

    //O que importa nao eh o nome da variavel, mas sim o endereco que ela guarda;

    printf ("A soma deu: %d\n", *res);

    free(res);          //Liberando finalmente o endereco que estava na heap;

    return 0;
}