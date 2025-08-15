//Exercicio 12

#include <stdio.h>
int Soma = 0;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    for (int i = 1; i <= 100; i++)
        if (i % 2 == 0) 
            Soma = Soma + i;
    printf("A soma dos nummeros pares de 0 a 100 e: %i\n", Soma);
    printf("Pressione Enter para sair...");
    getchar();
}