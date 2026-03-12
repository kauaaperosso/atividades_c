#include <stdio.h>

int main() {

    int matricula;
    float nota;
    float somaNotas;
    float mediaAluno;

    float somaMedias = 0;
    int totalAlunos = 0;

    printf("Matricula: ");
    scanf("%d", &matricula);

    while (matricula != 0) {

        somaNotas = 0;

        for (int i = 1; i <= 5; i++) {
            printf("Nota %d: ", i);
            scanf("%f", &nota);
            somaNotas += nota;
        }

        mediaAluno = somaNotas / 5;

        printf("Aluno: %d Media: %.1f\n", matricula, mediaAluno);

        somaMedias += mediaAluno;
        totalAlunos++;

        printf("Matricula: ");
        scanf("%d", &matricula);
    }

    if (totalAlunos > 0) {

        float mediaTurma = somaMedias / totalAlunos;

        printf("Media: %.1f\n", mediaTurma);

    }

    return 0;
}