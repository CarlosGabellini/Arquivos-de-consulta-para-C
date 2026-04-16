#include <stdio.h>

int main () {

    int a = 10;
    int b = 12;

    void *ponteiro_a = &a;
    void *ponteiro_b = &b;

    int c;

    c = *(int *)ponteiro_a + *(int *)ponteiro_b;

    //Desreferenciando e apontando para qual tipo de variavel temos, devemos fazer isso toda vez que temos um void para ponteiros;

    printf ("O valor do ponteiro sera de: %i\n", c);

    return 0;
}