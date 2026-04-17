#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct _lista
{
   int id;
   char nome [MAX+1];

   struct _lista *next;

}; typedef struct _lista Lista;


Lista *newElement (int id, char *nome){
    Lista *new = (Lista *) malloc (sizeof(Lista));

    new -> id = id;
    snprintf(new->nome, sizeof(new->nome), "%s", nome);
    new ->next = NULL;

    return new;
}

void printElementos (Lista *first){
    Lista *aux;

    for (aux = first; aux != NULL; aux = aux->next){

        printf("%d - %s\n", aux->id,aux->nome);
    }
}

Lista *addElemento(Lista *first, Lista *new, int tipoincert){
    Lista *aux;



    if (tipoincert == 1){

    }

    
    if (first == NULL){
        return new;
    }
    aux = first;
    while (aux -> next != NULL)
    {
        aux = aux->next;
    }
    
    aux->next = new;
    return first;
}

int main(){
    Lista *first = NULL, *new;

    new = newElement(1, "Kauã");
    first = addElemento(first,new);


    printElementos(first);


    return 0;
}