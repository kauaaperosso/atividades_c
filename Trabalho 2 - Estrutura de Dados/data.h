#ifndef DATA_H
#define DATA_H

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

void setData(data *d, int dia, int mes, int ano);
int getData(data d, char tipo);
void mostraData(data d);
int dataCompara(data d1, data d2);
int pegaDiff(data d1, data d2, data d3);
int diasNoMes(int mes, int ano);
int ehBissexto(data d);
int pegaDiaAno(data d);

#endif