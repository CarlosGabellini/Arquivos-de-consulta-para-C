#include <stdio.h>

float raiz_quadrada (float numero1) {

    float resultado = numero1;

    for (int i = 0; i < 20; i++) {

        resultado = (1.0f/2.0f) * (resultado + (numero1 / resultado));
    }

    return resultado;
}

int main () {

    float numero_input;

    printf ("Digite um numero: \n");
    scanf ("%f", &numero_input);

    printf ("A raiz quadrada dele sera de: %.2f\n", raiz_quadrada(numero_input));

    return 0;
}