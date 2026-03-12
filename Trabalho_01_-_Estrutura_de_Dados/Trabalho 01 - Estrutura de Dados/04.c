#include <stdio.h>

int main() {
    int n, positivos = 0, negativos = 0;

    for (int i = 1; i <= 4; i++) {
        printf("N%d: ", i);
        scanf("%d", &n);

        if (n >= 0)
            positivos++;
        else
            negativos++;
    }

    printf("%d (+) e %d (-)\n", positivos, negativos);

    return 0;
}