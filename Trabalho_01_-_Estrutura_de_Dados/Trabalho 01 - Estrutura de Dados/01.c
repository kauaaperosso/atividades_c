#include <stdio.h>

int main() {
    int horas;
    float valorHora, salario;

    printf("Horas: ");
    scanf("%d", &horas);

    printf("Valor: ");
    scanf("%f", &valorHora);

    salario = horas * valorHora;

    if (horas > 200) {
        salario = salario * 1.05;
    }

    printf("Salario: %.2f\n", salario);

    return 0;
}