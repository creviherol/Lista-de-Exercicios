//Exercicio 42

#include <stdio.h>

float N1,N2,N;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o primeiro valor: ");
    scanf("%f", &N1);
    printf("Digite o segundo valor: ");
    scanf("%f", &N2);
    printf("\033[2J\033[H"); // Limpa a tela
    N = N1 + N2;
    if (N > 20) 
        printf("A o valor e: %.2f\n", N+8);
    else 
        printf("A o valor e: %.2f\n", N-5);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}