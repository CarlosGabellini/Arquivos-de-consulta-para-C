#include <stdio.h>

int main () {

    char str[50];

    printf ("Digite uma string: \n");
    fgets (str, 50, stdin);                     //Conseguimos especificar com o fgets o espaco, use por que eh mais seguro;

    //O fgets armazena tudo incluindo o \n, basicamente o enter;

    printf ("Sua string: %s\n", str);

    return 0;
}