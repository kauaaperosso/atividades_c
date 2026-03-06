#include <stdio.h>

int main(int argc, char const *argv[])
{

    printf("Meu primeiro código em C! \n");

    int num = 18;
    if (num < 20){
        printf("\nO número é menor que 20! \n");
    }

    int i;
    printf("\nDigite sua idade: \n");
    scanf("%d", &i);
    printf("\nVocê tem %d anos!\n", i);
    return 0;
}