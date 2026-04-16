#include <stdio.h>

int main () {

    char str[100];                  //Sempre prescisa ter o tamanho definido;

    //scanf ("%d %d"); o scanf sempre considera o espaco utilizado;

    printf ("Digite uma string: ");
    scanf (" %s", str);             //Aqui prescisamos usar este espaco para nao ter lixo a partir do buffer.

    //O & é opcional;

    printf ("Sua string: %s", str);

    return 0;
}