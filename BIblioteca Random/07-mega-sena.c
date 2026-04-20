#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srandom(time(NULL));

    printf ("Os numeros gerados foram: ");

    for (int a = 0; a < 6; a++) {
        short int b = 1 + (random() % 60);
        printf("%hd, ", b);
    }

    return 0;
}