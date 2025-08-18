//Exercicio 25

#include <stdio.h>

int Numeros[10];

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero [%i/10]: ",i);
        scanf("%i", &Numeros[i]);
        printf("\033[2J\033[1;1H"); // Limpa a tela
    }
    printf("+---+-----+\n");
    for (int i = 0; i < 10; i++) { 
        printf("| %i | %3i |\n", i+1, Numeros[i]);
        printf("+---+-----+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}