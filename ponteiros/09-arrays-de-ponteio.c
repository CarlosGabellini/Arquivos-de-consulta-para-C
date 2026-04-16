#include <stdio.h>

void main () {

    int x = 10;
    int y[2] = {20, 30};

    int *ponteiro[2];

    //A posicao 0 do array de ponteiros aponta para x;
    //A posicao 1 aponta para o inicio do array y.
    
    ponteiro[0] = &x;
    ponteiro[1] = y;

    printf ("\np[0]: %p\n", ponteiro[0]);
    printf ("\np[1]: %p\n", ponteiro[1]);               //Mas perai, como estamos armazenando todo o y, o que realmente está acontecendo?

    printf ("\n*p[1]: %d\n", *(ponteiro[1] + 1));       //Aqui fazemos um desreferenciamento para imprimir o valor da terceira posicao;

    //Podemos fazer tambem este autismo aqui para imprimir a segunda posicao;

    printf ("\np[1][1] = %i\n", ponteiro[1][1]);        //Sim, isso mesmo, podemos fazer uma impressao como se fosse um segundo vetor;

    //Parece que o compilador ve isso como se fosse 1 + 1 para acessar a segunda posicao ou sei la, e a primeira posicao seria [1][0];
}