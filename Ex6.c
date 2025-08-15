//Exercicio 6

#include <stdio.h>
int Numeros[5],A = 0;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero [%i/5]: ",i);
        scanf("%i", &Numeros[i]);
        if (Numeros[i] < 0) 
            A = A + 1;
        printf("\033[2J\033[1;1H"); // Limpa a tela
    }
    printf("Numeros negativos: %i\n", A);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}