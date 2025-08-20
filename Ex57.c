//Exercicio 57

#include <stdio.h>

int Idade[10],M=0,mv=0,mn=0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa [%i/10]: ",i);
        scanf("%i", &Idade[i]);
        printf("\033[2J\033[H"); // Limpa a tela
        M+= Idade[i];
        if (Idade[i] >= 18)
            mv++;
        else
            mn++;
    }
    printf("A media das idades e: %i\n%i: sao maiores de Idade \n%i: sao menores de idade\n", M/10, mv, mn);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}