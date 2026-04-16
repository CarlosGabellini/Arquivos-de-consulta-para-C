#include <stdio.h>

int main () {

    //int Array [3][4];           //Aqui temos basicamente [0][0], [0][1], e vai até 12 espaços, é praticamente um array de 2 dimensões.
    
    //Indice (inteiro) --> dado (Qualquer tipo).
    //Indice (inteiro, inteiro) --> dado (Qualquer tipo).   

    int estudo [6][12][31];
    int linha = 0;

    for (int i = 0; i < 28; i++) {

        printf ("%d na linha %d \n", estudo[0][1][i], linha++);
    }

    //Basicamente podemos usar matriz para qualquer coisa.
    

    return 0;
}