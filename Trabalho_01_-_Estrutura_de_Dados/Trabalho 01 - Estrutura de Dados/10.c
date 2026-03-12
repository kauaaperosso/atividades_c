#include <stdio.h>

int main() {

    int n;
    long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);
    if(fatorial )
    for (int i = n; i >= 1; i--) {
        fatorial *= i;
    }

    printf("Fatorial: %lld\n", fatorial);

    return 0;
}