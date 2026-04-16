#include <stdio.h>

int potencia (int numero, int expoente) {

    int resultado = 1;

    for (int i = 1; i <= expoente; i++) {

        resultado *= numero;
    }

    return resultado;
}

int main () {

    int numero_input;
    int numero_expoente;
    int resultado_input;

    printf ("Digite um numero: \n");
    scanf ("%d", &numero_input);

    printf ("Digite outro numero para ser o expoente: \n");
    scanf ("%d", &numero_expoente);

    resultado_input = potencia(numero_input, numero_expoente);

    printf ("O resultado foi: %.2Lf\n", resultado_input);

    return 0;
}