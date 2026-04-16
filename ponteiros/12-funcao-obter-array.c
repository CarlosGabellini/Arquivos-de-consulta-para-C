#include <stdio.h>

typedef struct {

    int *array;
    int tamanho;
} Array_Tamanho;

Array_Tamanho obter_array() {

    Array_Tamanho ar;
    static int array[10];               //O static somente tem como ser usado uma vez, então somente chame a funcao uma unica vez por que o static
                                    //somente usa um espaco da memoria especifico para aquela vez, se chamar 2 ou mais vezes vai dar errado;
    ar.array = array;
    ar.tamanho = 10;

    return ar;
}

void main() {

    Array_Tamanho array = obter_array();

    for (int i = 0; i < array.tamanho; i++) {

        printf ("array.array[%i] = %i\t", i, array.array[i]);

        //Isso daqui tambem da certo;

        printf ("array.array[%i] = %i\n", i, *(array.array + i));       //Daria a mesma coisa, lembre-se de sempre desreferenciar para dar certo;
    }
}