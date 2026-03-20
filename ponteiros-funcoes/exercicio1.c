#include <stdio.h>

int diferenca(int,int);

int main() {
    int a, b, resultado;
    scanf("%d %d", &a, &b);
    resultado = diferenca(a,b);
    printf("A diferença entre %d e %d = %d\n",a,b,resultado);
    return 0;
}

int diferenca(int val1, int val2) {
    return val1-val2;
}