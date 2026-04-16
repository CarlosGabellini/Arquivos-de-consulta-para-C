#include <stdio.h>

int main () {

    //Nome, endereço, tipo, escopo e tempo de vida cada variavel possui.

    int a = 5;

    printf ("Valor de a eh %d.\n", a);
    printf ("Endereço de a: %X.\n", &a);

    //X é usado para imprimir numeros inteiros em formato hexadecimal, mas também temos o %p, que é melhor pra usar na maioria dos casos;

    int *p = &a;

    printf ("Endereço de p: %X.\n", &p);
    printf ("Endereço que p guarda: %X.\n", p);         //Mesmo endereço de a;

    //salvando o endereço de a no nosso programa, ISSO É PONTEIRO!

    //Mas e se eu quiser mostrar o verdadeiro conteudo de a em p? como faço?

    printf ("Conteudo da variavel cujo endereço está salvo em p: %d.\n", *p);

    /*Alguns cuidados com ponteiros:
    
    1. A declaração de um ponteiro, por exemplo float *p;
    2. Desreferenciamento de um ponteiro. por exemplo *p = 10;
    3. Multiplicação. como x * y;
    
    */

    return 0;
}