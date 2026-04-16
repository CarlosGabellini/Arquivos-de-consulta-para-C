#include <stdio.h>
#include <string.h>

//Array é uma sequencia de variaveis de tamanho definido.
//String é uma sequencia de variaveis do tipo char (Tamanho definido);

int main () {

    //Possiveis maneiras de inicializar uma string.
    //Maneira 1;

    char str[10];
    str[0] = 'o';
    str[1] = 'i';
    str[2] = '!';
    str[3] = '\0';

    //O \0 significa marcar o fim da string;

    //Maneira numero 2 seria:

    char str2[10] = {'O', 'i', '!', '\0'};

    //Maneira numero 2;

    char str3[10] = "Oi!";      //Em aspas duplas automaticamente ele ja vai ser adicionado.

    return 0;
}