//Exercicio 28

#include <stdio.h>

int a;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o numero de elementos do Vetor:");
    scanf("%i",&a);
    printf("\033[2J\033[H"); // Limpa a tela
    int Vetor[a];
    for (int i = 0; i < a; i++) {
        printf("Digite o valor do elemento [%i/%i]: ",i,a);
        scanf("%i", &Vetor[i]);
        printf("\033[2J\033[H"); // Limpa a tela
    }
    printf("+-------+\n");
    for (int i = a; i > 0; i--) {
        printf("| %5i |\n", Vetor[i-1]);
        printf("+-------+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}