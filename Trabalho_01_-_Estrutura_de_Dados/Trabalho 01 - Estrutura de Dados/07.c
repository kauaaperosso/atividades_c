#include <stdio.h>

int main() {

    int numero;
    int total = 0;
    int entre = 0;
    float percentual;

    do {

        printf("Numero: ");
        scanf("%d", &numero);

        if (numero > 0) {

            total++;

            if (numero >= 10 && numero <= 20) {
                entre++;
            }

        }

    } while (numero > 0);

    if (total > 0) {
        percentual = (entre * 100.0) / total;
        printf("%% entre 10 e 20: %.0f%%\n", percentual);
    }

    return 0;
}