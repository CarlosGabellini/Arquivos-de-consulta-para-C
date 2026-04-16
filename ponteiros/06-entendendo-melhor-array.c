#include <stdio.h>

//Basicamente, o que é um array? 

/*Um array nada mais é do que um ponteiro onde para o primeiro valor de um conjunto de variaveis sem nome, do mesmo tipo e armazenadas
em sequencia na memoria;
*/

//O operador colchentes é a juncão de duas operacoes:
//1. A soma de um ponteiro comum inteiro;
//2. O desreferenciamento do resultado dessa soma;

int main () {

    int a[3];
    
    //Imprimindo o endereco inicial de a;

    printf ("O endereco inicial eh: %p\n", a);

    a[0] = 0;               //Os colchentes são simplesmente uma operacao automatica de se movimentar no array;
    a[1] = 1;
    a[2] = 2;

    printf ("os numeros são: %d %d %d\n", a[0], a[1], a[2]);

    *(a + 0) = 20;
    *(a + 1) = 21;
    *(a + 2) = 22;

    printf ("os numeros agora são: %d %d %d\n", a[0], a[1], a[2]);

    return 0;
}