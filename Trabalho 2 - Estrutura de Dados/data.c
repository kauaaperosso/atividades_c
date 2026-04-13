#include <stdio.h>
#include "data.h"

void setData(data *d, int dia, int mes, int ano) {
    d->dia = dia;
    d->mes = mes;
    d->ano = ano;
}

int getData(data d, char tipo) {
    if (tipo == 'D') {
        return d.dia;
    }
    if (tipo == 'M') {
        return d.mes;
    }
    if (tipo == 'Y') {
        return d.ano;
    }
    return 0;
}

void mostraData(data d) {
    printf("%d/%d/%d\n", d.dia, d.mes, d.ano);
}

int dataCompara(data d1, data d2) {
    if (d1.ano > d2.ano) {
        return 1;
    }
    if (d1.ano < d2.ano) {
        return -1;
    }

    if (d1.mes > d2.mes) {
        return 1;
    }
    if (d1.mes < d2.mes) {
        return -1;
    }

    if (d1.dia > d2.dia) {
        return 1;
    }
    if (d1.dia < d2.dia) {
        return -1;
    }

    return 0;
}

int ehBissexto(data d) {
    if (d.ano % 4 == 0) {
        return 1;
    }
    return 0;
}

int diasNoMes(int mes, int ano) {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || 
        mes == 8 || mes == 10 || mes == 12) {
        return 31;
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }

    if (mes == 2) {
        if (ano % 4 == 0) {
            return 29;
        }
        return 28;
    }

    return 0;
}

int pegaDiaAno(data d) {
    int dias = 0;

    for (int i = 1; i < d.mes; i++) {
        dias += diasNoMes(i, d.ano);
    }

    dias += d.dia;

    return dias;
}

int pegaDiff(data d1, data d2) {
    int total1 = pegaDiaAno(d1);
    int total2 = pegaDiaAno(d2);

    if (total1 > total2) {
        return total1 - total2;
    } else {
        return total2 - total1;
    }
}