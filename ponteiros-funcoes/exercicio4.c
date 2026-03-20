#include <stdio.h>

int celsius(int,int);
int red(int,int);

int main() {
    int a, b, resultado;
    printf("---------- Conversão Celsius/Fahrenheit ----------\n");
    printf("\nA temperatura é Celsius ou Fahrenheit(1 - Celsius | 2-Fahrenheit): ");
    scanf("%d", &a);
    printf("\nDigite o valor da temperatura: ");
    scanf("%d", &b);
    resultado = red(a,b);
    printf("\nO resultado da conversão é:%d\n ",resultado);
    return 0;
}

int red(int x, int y){
    if(x==1){
        return (9*y/5)+32;
    }else{
        return 5*(y-32)/9;
    }
}
