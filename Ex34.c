//Exercicio 34

#include <stdio.h>

float Numero;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite um numero: ",Numero);
    scanf("%f", &Numero);
    if (Numero == 0)
        printf("O numero e nulo\n");
    else
        printf("O numero %.2f nao e nulo\n", Numero);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}