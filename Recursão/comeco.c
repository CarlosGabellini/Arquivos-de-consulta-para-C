#include <stdio.h>

//Aprendendo a usar função recursiva;

int fatorial (int n) {

    if (n < 1) return 1;
    
    return n * fatorial(n - 1);
}

int main () {

    int x = 4;

    printf ("fatorial de x: %d\n", fatorial(x));

    return 0;
}