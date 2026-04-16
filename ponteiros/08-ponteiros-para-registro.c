#include <stdio.h>

typedef struct {

    float x, y;
} Ponto;

int main() {

    Ponto ponto = {2.5, 4.0};

    Ponto *p = &ponto;

    printf ("%.1f e %.1f\n", ponto.x, ponto.y);

    //Tambem aqui pode se fazer o seguinte:

    printf ("%.1f e %.1f\n", (*p).x, (*p).y);               //Aqui fizemos o desreferenciamento;'
    printf ("%.1f e %.1f\n", p->x, p->y);

    //Vamos ver o que vai acontecer com isso daqui;

    return 0;
}