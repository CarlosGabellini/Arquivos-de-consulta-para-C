#include <stdio.h>
#include <stdlib.h>

void main () {

    int *y, *x = (int*) malloc(sizeof(int));

    *x = 10;
    y = x;

    printf ("\n%d\n", *x);

    free(x);
    
    *y = 10;                //Ainda tenho o endereco salvo na y, mas o que acontece quando o y aponta pra algo que ja
                        //foi liberado?

    //Isso aqui pode gerar um puta problema, qualquer coisa pode acontecer com o programa;
    //por que y esta apontando pra algo que nao existe mais;

    /*Uma analogia bem interessante eh como se eu tivessse pagando aluguel de um apartamento e mexendo nele normalmente,
    entao num belo dia, eu paro de pagar o apartamento e dou a chave pro sindico que seria o free(x), o problema comeca
    comigo tendo a copia da chave (que eh o y), ai uma nova pessoa se muda e fico jogando as coisas dela fora e colocando
    as minhas coisas, qualquer coisa pode acontecer, o sindico pode barrar minha entrada (Segmetation fault), o programa
    funciona normalmente com dados sobrescritos (tiras as coisas do outro inquilino fora e colocar as minhas) ou o 
    apartamento esta vazio e coloco minhas coisas normalmente, sendo o caso mais perigoso.
    */

    printf ("\n%d\n", *x);
}