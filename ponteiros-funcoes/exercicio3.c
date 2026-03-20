#include <stdio.h>

int omaior(int,int,int);
int recebe3(int,int,int,int);

int main() {
    int a, b, c, resultado;
    scanf("%d %d %d", &a, &b, &c);
    resultado = recebe3(a,b,c,resultado);
    printf("O maior número entre %d e %d e %d é o número %d\n",a,b,c,resultado);
    return 0;
}

int recebe3(int a, int b, int c, int resultado){
    resultado = omaior(a,b,c);
    return resultado;
}

int omaior(int val1, int val2, int val3) {
    if(val1 == val2 && val2==val3){
        return val3;
    }
    else{
        if(val1>val2 && val1>val3){
            return val1;
        }else{
            if(val2>val3 && val2>val1){
                return val2;
        }else{
            return val3;
        }
    }

    }
}