//Making the funcions below;

float potencia(float base, float expoente) {

    float resultado = 1;

    for (float i = 1; i <= expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

float raiz_quadrada(float numero_colocado) {

    float resultado = numero_colocado;

    for (int i = 0; i < 20; i++) {
        resultado = (1.0/2.0) * (resultado + (numero_colocado / resultado));
    }

    return resultado;
}

unsigned int mdc(unsigned int input1, unsigned int input2) {

    unsigned int controle = input1;

    while (input2 != 0) {
        controle = input1 % input2;
        input1 = input2;
        input2 = controle;
    }

    return input1;
}

short int contar_digitos(int numero) {

    short int contador = 0;

    while (numero != 0) {
        numero = numero / 10;
        contador++;
    }

    return contador;
}