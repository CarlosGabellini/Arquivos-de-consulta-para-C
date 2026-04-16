#include <stdio.h>

//Operações com ponteiros;

int main () {

    int a;
    int *p = &a;

    printf ("%p + 1 = %X\n", p, p + 1);
    printf ("%p - 1 = %X\n", p, p - 1);

    return 0;
}