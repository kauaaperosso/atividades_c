#include<stdio.h>
int main(){
    int a =5, *b;
    b = &a;
    *b=2;
    printf("Valor de a = %d\n",a);
}
