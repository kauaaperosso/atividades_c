#include <stdio.h>

struct tdata {
  int dia;
  int mes;
  int ano;
};

struct tfunc {
  int id;
  char nome;
  double salario;
};


int main() {
    struct tdata data1, data2;
    struct tfunc func1, func2;

    float media;

    data1.dia = 3;

    func2.salario = 6500;


    scanf("%d", &data2.mes);
    scanf("%lf", &func1.salario);

    media = (func1.salario + func2.salario) / 2;
    
    printf("%f\n", media);


    return 0;
}


