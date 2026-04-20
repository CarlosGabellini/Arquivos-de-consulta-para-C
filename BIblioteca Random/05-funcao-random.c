#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srandom(time(NULL));        //Esse eh o equivalente para sempre gerar valores aleatorios;

    short int x = random() % 100;

    //Podemos fazer isso daqui com o Random tambem, eh a mesma ideia do rand();

    for (int i = 1; i <= 276; i++) {

        short int y = -276 + (random() % 277);
        printf ("%hd\n", y);
    }

    //A regra sempre eh:
    //minimo + (random() % (maximo - minimo + 1)), sempre lembrar dessa formula;

    return 0;
}