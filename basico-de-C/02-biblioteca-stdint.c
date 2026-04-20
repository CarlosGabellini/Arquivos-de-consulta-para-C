#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//Quero aprender melhor sobre a biblioteca stdint.h, onde ela me dara o controle exato sobre tipos de variaveis;

int main () {

    int8_t variavel_b = 124;
    int32_t input_1 = 0;

    printf ("O valor eh %" PRId8 "\n", variavel_b);         //A entrada funciona dessa forma;

    printf ("Digite um numero: \n");
    scanf ("%" SCNd32, &input_1);

    printf ("O numero digitado eh %" PRId32 "\n", input_1);

    return 0;
}