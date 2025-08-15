//Exercicio 3

#include <stdio.h>


void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    for (int i = 120; i <= 300; i++) 
        printf("%i\n",i);
    printf("Pressione Enter para sair...");
    getchar();
}