//Exercicio 4

#include <stdio.h>
int Soma = 0;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    for (int i = 1; i <= 100; i++) 
        Soma = Soma + i;
    printf("A soma dos nummeros de 1 a 100 e: %i\n", Soma);
    printf("Pressione Enter para sair...");
    getchar();
}