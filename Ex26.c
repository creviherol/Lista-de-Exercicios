//Exercicio 26

#include <stdio.h>
#include <math.h>

int Numeros[15];

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 15; i++) {
        printf("Digite um numero [%i/15]: ",i);
        scanf("%i", &Numeros[i]);
        printf("\033[2J\033[1;1H"); // Limpa a tela
    }
    printf("+---+-------+-------+\n");
    for (int i = 0; i < 15; i++) { 
        printf("| %2i | %4i | ", i+1, Numeros[i]);
        if (Numeros[i] % 2 == 0) {
            printf("  Par |\n");
        }
        else {
            printf("Impar |\n");

        }
        printf("+---+-------+-------+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}