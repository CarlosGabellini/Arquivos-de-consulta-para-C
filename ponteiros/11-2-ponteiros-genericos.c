#include <stdio.h>

int main () {

    int a = 2;
    float b = 2.0f;
    char c = 'c';

    void *ponteiro;

    ponteiro = &a;
    printf ("a: %i\n", *(int *)ponteiro);

    ponteiro = &b;
    printf ("b: %.2f\n", *(float *)ponteiro);

    ponteiro = &c;
    printf ("c: %c\n", *(char *)ponteiro);

    return 0;
}