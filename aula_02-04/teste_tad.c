#include <stdio.h>
#include "teste_tad.h"

void atribuicao(Fracao *f, int a, int b){
    f -> a = a;
    f -> b = b;
}

Fracao multi(Fracao f1, Fracao f2){
    Fracao result;

    result.a = f1.a *f2.a;
    result.b = f1.b *f2.b;

    return result;
}


