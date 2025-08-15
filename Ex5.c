//Exercicio 5

#include <stdio.h>
int Numeros[15],A = 0;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    for (int i = 0; i < 15; i++) {
        printf("Digite um numero [%i/15]: ",i);
        scanf("%i", &Numeros[i]);
        if (Numeros[i] > 30) 
            A = A + 1;
        printf("\033[2J\033[1;1H"); // Limpa a tela
    }
    printf("Numeros maiores que 30: %i\n", A);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}