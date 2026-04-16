#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>         //Adiciona a função sleep no codigo para o terminal não fazer de imediato, assim conseguimos fazer o resultado;

void imprime_cabecalho() {

    system("clear");
    printf ("======================\n\n");
    printf ("Curso de C\n\n");
    printf ("======================\n\n");
}

void imprimir_inicial() {

    printf ("0 - exit\n");
    printf ("1 - Soma\n");
    printf ("2 - Numero ao quadrado\n");
}

void imprime_soma () {

    imprime_cabecalho();

    int a;
    int b;
    int c;

    printf ("Digite um numero: \n");
    scanf ("%d", &a);

    printf ("Digite outro numero: \n");
    scanf ("%d", &b);

    c = a + b;

    printf ("A soma sera de: %d\n", c);
}

void imprime_quadrado() {

        imprime_cabecalho();

        int c;
        printf ("Digite um numero qualquer: \n");
        scanf ("%d", &c);

        c *= c;

        printf ("O quadrado eh: %d\n", c);
}

int main () {

    int opcao;                      //Qualquer que seja o valor aqui ele vai funcionar de qualquer forma por causa do DO WHILE;

    do {

        imprime_cabecalho();
        imprimir_inicial();

        printf ("Escolha uma opção: \n");
        scanf ("%d", &opcao);

        switch (opcao) {

            case 0:
                imprime_cabecalho();
                printf ("Exiting...\n");
                break;
    
            case 1:
                imprime_soma();
                sleep(5);
                break;

            case 2:
                imprime_quadrado();
                sleep(5);
                break;

            default:
                printf ("Numero invalido!\n");
                sleep(5);
                break;
        }

    } while (opcao != 0);

    return 0;
}