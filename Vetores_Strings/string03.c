#include <string.h>
#include <stdio.h>
int main(int argc, char const *argv[]){
    char st[5]="NINHO";

    snprintf(st,8,"NINHO %d",1); //estudar como fazer!

    if (strcmp(st, "NINHO") == 0){
        printf("Igual!\n");
    }else
        printf("Diferente\n");

    return 0;
}