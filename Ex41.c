//Exercicio 41

#include <stdio.h>


int Numero;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite um numero inteiro: ");
    scanf("%i", &Numero);
    printf("\033[2J\033[H"); // Limpa a tela
    printf("O quadrado de %i e : %i\n",Numero, Numero*Numero);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}