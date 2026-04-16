#include <stdio.h>

/*Alguns cuidados com ponteiros:
    
    1. A declaração de um ponteiro, por exemplo float *p;
    2. Desreferenciamento de um ponteiro. por exemplo *p = 10;
    3. Multiplicação. como x * y;
*/

//O exemplo do aviso é dado abaixo quando fazemos o desreferenciamento e então imprimimos 10 duas vezes;

int main () {

    float a = 5.0f, b = 2.0;

    //1.Declaração de um poteiro;
    float *pa = &a, *pb = &b;

    //3.Multiplicação;
    float r1 = a * b;

    //2.Desreferenciamento e multiplicação;
    float r2 = *pa * *pb;

    printf ("r1: %.2f\n", r1);
    printf ("r2: %.2f\n", r2);

    return 0;
}