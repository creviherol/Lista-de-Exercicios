//Exercicio 5

#include <stdio.h>

int Idade[10],M=0,mv=0,mn=0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("+----+--------+\n");
    for (int i = 1; i <= 20; i++) {
        printf("| %2i | %.4f |\n",i,i/25.4);
        printf("+----+--------+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
}