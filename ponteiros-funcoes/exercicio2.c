#include <stdio.h>

int omaior(int,int);

int main() {
    int a, b, resultado;
    scanf("%d %d", &a, &b);
    resultado = omaior(a,b);
    printf("O maior número entre %d e %d é o número %d\n",a,b,resultado);
    return 0;
}

int omaior(int val1, int val2) {
    if(val1 == val2){
        return val2;
    }
    else{
        if(val1>val2){
            return val1;
        }else{
            return val2;
        }
    }
}