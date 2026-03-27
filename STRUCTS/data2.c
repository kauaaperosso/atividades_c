#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

void printData (Data d2){
    printf("%d/%d/%d\n",d2.dia,d2.mes,d2.ano);
}

void alteraData (Data *d, int dia, int mes, int ano){
    d -> dia = dia;
    d -> mes = mes;
    d -> ano = ano;
}

int main() {

    Data d1 = {3,5,2007}, d2;

    alteraData(&d2,01,02,2027);
    printf(alteraData);

    printData(d2);
    return 0;

}
