#include <stdio.h>

int main () {

    //Caracteres;
    unsigned char exemplo = 'a';        //Existe unsigned char para o char, e ao inves de -127 e +127, ela vai agora ate 255;
    char palavra = 'a';                 //Tem somente 1 byte na memoria, juntando com vetor multiplica 1 * tamanho_do_vetor;
    char palavras[10] = "Oi!";          //Aqui é uma string;

    //Numeros inteiros;

    short int w = 12;                //Variavel do tipo int curta, tamanho de 2 bytes, simbolo %hd;
    int x = 10;                      //Variavel do tipo int padrao, tamanho de 4 bytes, simbolo %d ou %i;
    long int grande = 100000;        //Variavel do tipo int bem grande, tamanho de 4 ou 8 bytes, simbolo eh %ld;
    unsigned short int e1 = 12;      //Variavel int sem negativos, simbolo eh %hu;

    //Numeros de ponto flutuante;

    float real = 1.4142;                        //Variavel do tipo float padrao, tamanho de 4 bytes, simbolo eh %f;
    double real_2 = 12.431112;                  //Variavel do tipo double, tamanho de 8 bytes, simbolo eh %lf
    long double flutuante_duplo = 124.3211;     //Variavel do tipo long double, tamanho de 10/12/16 bytes, simbolo eh %Lf

    //Long double vai depender do Sistema Operacional pra tamanho;

    //Nao tem unsigned para floats;

    const int Maximum = 100;                    //Existe constante em C, basicamente variaveis constantes nao podem ser alteradas;

    //Sempre inicie variaveis constantes;

    printf ("%d\n", Maximum);

    return 0;
}