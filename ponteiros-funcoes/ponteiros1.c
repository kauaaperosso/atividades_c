#include<stdio.h>

void troca(int,int);

int main(){
    int *a,  *b;

    *a=1;
    *b=2;

    troca(&a,&b);

}

void troca(int x, int y) {
    printf( x = &y, y = &x);
}