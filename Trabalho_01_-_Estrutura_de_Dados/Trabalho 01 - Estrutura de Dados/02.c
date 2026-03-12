#include <stdio.h>

int main() {
    float preco, final;
    int pagamento;

    printf("Preco: ");
    scanf("%f", &preco);

    printf("Forma de pagamento (1 a vista / 2 a prazo): ");
    scanf("%d", &pagamento);

    if (pagamento == 1) {
        final = preco * 0.95;
        printf("Preco a vista: %.2f\n", final);
    } else {
        final = preco * 1.10;
        printf("Preco a prazo: %.2f\n", final);
    }

    return 0;
}