//Exercicio 44

#include <stdio.h>

float Salario,C1,C2,Saldo;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Qual o valor do salario depositado: ");
    scanf("%f", &Salario);
    printf("Qual o valor do primeiro cheque: ");
    scanf("%f", &C1);
    printf("Qual o valor do segundo cheque: ");
    scanf("%f", &C2);
    printf("\033[2J\033[H"); // Limpa a tela
    Saldo = 100 + Salario - (C1*1.038 + C2*1.038);
    printf("O saldo atual e: %.2f\n", Saldo);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}