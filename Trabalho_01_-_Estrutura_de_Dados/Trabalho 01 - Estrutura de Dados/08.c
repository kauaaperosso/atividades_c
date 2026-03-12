#include <stdio.h>

int main() {

    float salario;
    int filhos;

    float somaSalarios = 0;
    int somaFilhos = 0;
    int totalPessoas = 0;

    printf("Salario: ");
    scanf("%f", &salario);

    while (salario >= 0) {

        printf("Filhos: ");
        scanf("%d", &filhos);

        somaSalarios += salario;
        somaFilhos += filhos;
        totalPessoas++;

        printf("Salario: ");
        scanf("%f", &salario);
    }

    if (totalPessoas > 0) {

        float mediaSalarios = somaSalarios / totalPessoas;
        float mediaFilhos = (float)somaFilhos / totalPessoas;

        printf("Media salarios: %.1f\n", mediaSalarios);
        printf("Media filhos: %.1f\n", mediaFilhos);

    }

    return 0;
}