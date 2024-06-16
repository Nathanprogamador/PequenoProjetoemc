#include <stdio.h>

int main() {
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
    float media, mediaTurma = 0.0;
    int totalAlunos = 0;

    while (1) {
        printf("Digite o nome do aluno (ou nulo para encerrar): ");
        scanf("%s", nome);

        if (nome[0] == 'n' && nome[1] == 'u' && nome[2] == 'l' && nome[3] == 'o' && nome[4] == '\0') {
            break;
        }

        printf("Digite a matricula do aluno: ");
        scanf("%d", &matricula);

        printf("Digite a nota 1 do aluno: ");
        scanf("%f", &nota1);

        printf("Digite a nota 2 do aluno: ");
        scanf("%f", &nota2);

        printf("Digite a nota 3 do aluno: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3.0;
        mediaTurma += media;
        totalAlunos++;

        printf("Nome: %s\n", nome);
        printf("Matricula: %d\n", matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
        printf("Média: %.2f\n", media);
        
        if (media >= 7.0) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    if (totalAlunos > 0) {
        float mediaGlobal = mediaTurma / totalAlunos;
        printf("Média da turma: %.2f\n", mediaGlobal);
    } else {
        printf("Nenhum aluno foi inserido.\n");
    }

    return 0;
}