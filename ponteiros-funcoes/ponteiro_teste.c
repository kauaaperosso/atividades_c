#include<stdio.h>
int main(){
    int a =5, *b, vet[] = {1,2,3};

    b=vet;
    b[2]=30;
    printf("Valor de a = %d\n",b[2]);
}
