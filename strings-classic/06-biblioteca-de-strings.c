#include <stdio.h>
#include <string.h>

/*Funcoes que vamos aprender em strings abaixo:

strlen() - Verifica a quantidade de caracteres em uma dada string;
strcpy() - copia uma string;
strcat() - Concatena uma string igual em JS, onde adiciona o final o conteudo de outra;
strcmp() - Avalia se duas strings sao iguais;
strchr() - Encontra a primeira ocorrencia de um dado caractere;

Pesquisa no navegador "String.h", ai voce vai pode ir em algum site para saber mais sobre strings;
*/

int main () {

    char nome[100];

    printf ("Digite seu nome: ");
    fgets (nome, 100, stdin);

    printf ("Seu nome eh: %s\n", nome);
    printf ("O tamanho da string eh %d\n", strlen(nome));

    return 0;
}