#include <stdio.h>

int main () {

    //Fazendo a limpeza do buffer;

    char str[50];
    
    printf ("Digite uma string: \n");

    //Com a limpeza do buffer nao prescisamos mais utilizar o espaco no scanf para entrada de dados;
    setbuf(stdin, NULL);
    scanf ("%s", str);
    setbuf (stdin, NULL);

    //Fazendo a limpeza do Buffer.

    printf ("A string digitada foi: %s\n", str);

    return 0;
}