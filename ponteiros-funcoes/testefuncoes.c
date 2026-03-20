#include <stdio.h>

int elevaAoQuadrado(int);

int main() {
    int a, resultado;
    scanf("%d",&a);
    resultado = elevaAoQuadrado(a);
    printf("%d^2 = %d\n",a,resultado);
    return 0;
}

int elevaAoQuadrado(int val) {
    return val*val;
}