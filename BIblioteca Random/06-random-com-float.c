#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srandom(time(NULL));

    //Verificando agora como faz o random para double e float;

    float y = -10.45f + (float)random() / (float)RAND_MAX * (14.421f - (-10.45f));//Fazendo a formula do intervalo aqui;

    //Prescisa fazer tambem a conversao para o RAND_MAX;
    //Aqui depois do rand_max fazemos (Maximo - minimo);

    //Tente usar o RAND_MAX com o random padrao, ele nao funciona bem com o random;


    printf ("O resultado deu: %.2f\n", y);

    return 0;
}