//Exercicio 11

#include <stdio.h>

int F;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    printf("+------+------+\n");
    for (int i = 0; i <= 100; i++) {          
        F = (i * 9/5) + 32; // Converte Celsius para Fahrenheit
        printf("| %3i | %3i |\n", i, F);
        printf("+-----+-----+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
}