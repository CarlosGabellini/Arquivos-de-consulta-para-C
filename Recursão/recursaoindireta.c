#include <stdio.h>

//Fazendo assinatura para as funções darem certo e já serem reconhecidas no compilador;

void funcaoA (int n);
void funcaoB(int num);

//Função recursiva indireta é quando uma função chama outra função e essa função chama de volta a função original;

//Função A que chama B que chama a função A;

void funcaoA (int n) {

    if (n > 0) {

        printf ("A: %d\n", n);
        funcaoB(n - 1);
    }
}

void funcaoB (int num) {

    if (num > 0) {

        printf ("B: %d\n", num);
        funcaoA(num - 1);
    }
}

void main () {

    funcaoA(20);
}