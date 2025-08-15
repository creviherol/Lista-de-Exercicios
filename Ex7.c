//Exercicio 7

#include <stdio.h>
#include <math.h>

int Numeros[20],A = 0;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    for (int i = 0; i < 20; i++) {
        printf("Digite um numero [%i/20]: ",i);
        scanf("%i", &Numeros[i]);
        if (pow(Numeros[i],2) < 225) 
            A = A + 1;
            printf("%i",A);
        printf("\033[2J\033[1;1H"); // Limpa a tela
    }
    printf("Numeros com quadrado menor que 225: %i\n", A);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}