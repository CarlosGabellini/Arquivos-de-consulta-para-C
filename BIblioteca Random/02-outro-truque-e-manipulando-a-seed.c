#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));              //Muda a seed toda vez;

    short int numero_gerado = rand();           //Agora vamos ver o que acontece;

    //Vamos tentar limitar agora, quero somente gerar inteiros positivos em um intervalo de 1 a 100;

    for (int i = 0; i < 100; i++) {

        short int numero_gerado2 = rand() % -100;
        printf ("O numero gerado foi %d\n", numero_gerado2);
    }    

    return 0;
}