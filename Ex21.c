//Exercicio 21

#include <stdio.h>

char Sexo;
int Idade;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &Sexo);
    printf("Digite a idade: ");
    scanf("%d", &Idade);
    if (Sexo == 'F' && Idade < 25) 
        printf("Voce esta apto para o cargo.\n");
    else
        printf("Voce nao esta apto para o cargo.\n");
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}