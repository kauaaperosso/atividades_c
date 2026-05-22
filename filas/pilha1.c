#include <stdio.h>
#include <stdlib.h>

typedef char Caractere;

typedef struct elemStack {
    Caractere caractere;
    struct elemStack *next;
} ElemStack;

typedef struct {		
    ElemStack *top;	
} Stack;

Stack *stack;

void push(Stack *s, Caractere caractere) {
    ElemStack *aux;

    aux = (ElemStack *)malloc(sizeof(ElemStack));
    aux->caractere = caractere;

    aux->next = s->top;
    s->top = aux;
}

void pop(Stack *s, Caractere *caractere) {
    ElemStack *aux;

    *caractere = s->top->caractere; 

    aux = s->top;
    s->top = s->top->next;

    free(aux);
}

void initStack(Stack *s) {
    s->top = NULL;
}

int isEmptyStack(Stack *s) {
    if (s->top == NULL) return 1;
    else return 0;
}




int main() {
    char str[100];
    int i = 0;
    Stack stack;
    char caractere;

    initStack(&stack);

    printf("Digite uma palavra: \n");

 
    while (i < 99 && (caractere = getchar()) != '\n' && caractere != EOF) {
        str[i] = caractere;
        i++;

        printf("Inserindo na pilha a letra: %c\n", caractere); 
        push(&stack, caractere);
    }
    
    str[i] = '\0';

    printf("\nVoce digitou: ");
    for (int j = 0; str[j] != '\0'; j++) {
        putchar(str[j]);
    } 
    printf("\n\n");


    while (isEmptyStack(&stack) == 0) { 
        pop(&stack, &caractere);
        printf("Letra %c removida da pilha.\n", caractere);
    }

    return 0;
}