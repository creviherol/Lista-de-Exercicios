//Exercicio 27

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char Dados[15][50],*token; // 15 alunos, cada um com até 49 caracteres + '\0'
float dado[2],media;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 2; i++) {
        printf("Digite a matricula, N1 e N2 do aluno separado por , (Ex:45781,6.5,8.1) [%i/15]: ",i);
        scanf("%s", &Dados[i]);
        printf("\033[2J\033[1;1H"); // Limpa a tela
    }
    printf("+-----------+-----+-----+-------+------------+\n| Matricula |  N1 |  N2 | Media | Resultado  |\n+-----------+-----+-----+-------+------------+\n");
    for (int i = 0; i < 15; i++) {
        token = strtok(Dados[i], ",");
        printf("| %9s |", token);
        for (int j = 0; j < 15; j++) {
            token = strtok(NULL, ",");
            dado[j] = atof(token);
            printf(" %2.1f |", dado[j]); 
        }
        media = (dado[0] + dado[1]) / 2.0;
        printf("  %2.1f  |", media);
        if (media >= 6.0)
            printf("  Aprovado  |\n");
        else
            printf("  Reprovado |\n");
        printf("+-----------+-----+-----+-------+------------+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}