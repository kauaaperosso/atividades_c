#include <stdio.h>

int main() {
    int a, b, resultado = 0;

    printf("Numero 1: ");
    scanf("%d", &a);

    printf("Numero 2: ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        resultado += a;
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}