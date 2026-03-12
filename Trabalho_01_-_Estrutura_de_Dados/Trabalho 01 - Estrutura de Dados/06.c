#include <stdio.h>

int main() {

    int valor;
    int soma = 0;

    printf("Digite: ");
    scanf("%d", &valor);

    for (int i = 1; i <= valor; i++) {
        soma += i;
    }

    printf("Soma: %d\n", soma);

    return 0;
}