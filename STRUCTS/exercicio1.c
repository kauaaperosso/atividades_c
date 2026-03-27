#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

int extraiDia(Data data){
    return data.dia;
}

int comparaDatas(Data data1, Data data2){
    if(data1.ano < data2.ano){
        return -1;
    }else{
        if(data1.ano > data2.ano){
            return 1;
        } else{
            if(data1.mes > data2.mes){
                return 1;
            }else{
                if(data1.mes < data2.mes){
                    return -1;
                }else{
                    if(data1.dia < data2.dia){
                        return -1;
                    }else{
                        if(data1.dia > data2.dia){
                            return 1;
                        }else{
                            return 0;
                        }
                    }
                }
            }
        }
    }
}

int main() {
    int resultado;

    Data d1 = {3,5,2007};
    Data d2 = {3,5,2007};

    resultado = comparaDatas(d1,d2);
    printf("Dia: %d \n",extraiDia(d1));
    printf("Resultado: %d\n", resultado);

    return 0;
}