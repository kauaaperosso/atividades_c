#include <stdio.h>
#include <stdlib.h>

typedef char Caractere;

typedef struct TEQueue{
    Caractere caractere;
    struct TEQueue *next;
} EQueue;

typedef struct TQueue{
    EQueue *head;
    EQueue *tail;
} Queue;

void initQueue(Queue *queue){
    queue->head = NULL;
    queue->tail = NULL;
}

int isEmpty(Queue *queue){
    return (queue->head == NULL);
}

int deQueue(Queue *queue){
    if (isEmpty(queue)) return -1;

    int i = queue->head->caractere;
    EQueue *aux = queue->head;

    if (queue->head == queue->tail){
        queue->head = queue->tail = NULL;
    } else {
        queue->head = queue->head->next;
    }

    free(aux);
    return i;
}

void enQueue(Queue *queue, Caractere caractere) {
    EQueue *aux;

    aux = (EQueue *) malloc(sizeof(EQueue));
    if (aux == NULL) {
        printf("Erro - alocacao de memoria\n");
        exit(1);
    }
    aux->caractere = caractere;
    aux->next = NULL;

    if (queue->head == NULL) { 
        queue->head = aux;
        queue->tail = aux;
    }
    else { 
        queue->tail->next = aux;
        queue->tail = aux;
    }
}

int main() {
    char str[100];
    int i = 0;
    Queue queue;
    char caractere;

    initQueue(&queue);

    printf("Digite uma palavra: \n");

 
    while (i < 99 && (caractere = getchar()) != '\n' && caractere != EOF) {
        str[i] = caractere;
        i++;

        printf("Inserindo na fila a letra: %c\n", caractere); 
        enQueue(&queue, caractere);
    }
    
    str[i] = '\0';

    printf("\nVoce digitou: ");
    for (int j = 0; str[j] != '\0'; j++) {
        putchar(str[j]);
    } 
    printf("\n\n");


    while (isEmpty(&queue) == 0) { 
        caractere = deQueue(&queue); 
        printf("Letra %c removida da fila.\n", caractere);
    }

    return 0;
}