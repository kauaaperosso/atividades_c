#include <stdio.h>

int main() {
    int inicio, fim, duracao;

    printf("Inicio: ");
    scanf("%d", &inicio);

    printf("Fim: ");
    scanf("%d", &fim);

    if (fim >= inicio)
        duracao = fim - inicio;
    else
        duracao = (24 - inicio) + fim;

    printf("Duracao: %d horas\n", duracao);

    return 0;
}