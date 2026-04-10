#include <stdio.h>
#include <stdlib.h>

struct _data {
  int dia;
  int mes;
  int ano;
  struct _data *prox;

};
typedef struct _data Data;

int main(){
    Data *dt, *dt_nova;

    dt = (Data *)malloc (sizeof(Data));
    dt -> dia = 26;
    dt -> mes = 1;
    dt -> ano = 2000;
    dt -> prox = NULL;

    dt_nova -> prox = (Data *)malloc (sizeof(Data));
    dt_nova -> prox -> dia = 3;
    dt_nova -> prox -> mes = 5;
    dt_nova -> prox -> ano = 2007;
    dt -> prox -> prox = NULL;
                                       

    Data *aux;
    int i=1;
    aux = dt;
    while (aux != NULL){
      printf("%d ->", aux->dia);

      if  (i == 5){
        break;

        aux = aux -> prox;
        i++;
      }
    }


    //n funciona - mas tem a logica!
    return 0;
}