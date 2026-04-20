#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    float ponto_flutuante = (float)rand() / RAND_MAX * (-10 - (10));  //Aqui vai do 0 até -20;
    float ponto_gerado2 = -10 + (float)rand() / RAND_MAX * 20;


    printf ("Numero gerado foi: %.2f\n", ponto_flutuante);
    printf ("Numero 2 gerado: %.2f\n", ponto_gerado2);
    
    return 0;
}