#include <string.h>
#include <stdio.h>
int main(int argc, char const *argv[]){
    char vet[5]="teste";
    int i = 0;

    strncpy(vet, "aa"); //fazer funcionar!!!!

    while (i)
        printf("%c", vet[i++]);
    printf("\n\n\n\n");

    return 0;
}