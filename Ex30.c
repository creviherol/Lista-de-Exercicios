//Exercicio 30

#include <stdio.h>

char elemento[20][50];

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 20; i++) {
        printf("Digite o elemento [%i/20]: ",i);
        scanf("%s", &elemento[i]);
        printf("\033[2J\033[H"); // Limpa a tela
    }
    printf("+------------+------------+\n");
    for (int i = 0; i < 20; i++) { 
        printf("| %10s | %10s |\n",elemento[i],elemento[20-i]);
        printf("+------------+------------+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}