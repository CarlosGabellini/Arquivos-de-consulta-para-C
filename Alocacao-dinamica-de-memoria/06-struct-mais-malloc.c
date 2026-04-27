#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char nome[100];
    int *idade;
    float *altura;
} Aluno;

/*Basicamente aqui estamos criando um enderenco dentro da struct para uma variavel futura, entao agora devemos alocar ela 
dinamicamente com malloc e depois liberar, somente o nome aqui tem um endereco fixo e está na stack*/

int main () {

    Aluno a;

    a.idade = (int*) malloc(sizeof(int));               //Sempre faca isso primeiro para o ponteiro ter um endereco valido;
    a.altura = (float*) malloc(sizeof(float));
    
    *a.idade = 18;
    *a.altura = 1.77f;
    
    strcpy(a.nome, "Daniel");

    printf ("Seu nome eh %s e ele tem %d anos de idade com uma altura de %.2f\n", a.nome, *a.idade, *a.altura);

    free(a.idade);
    free(a.altura);

    return 0;
}