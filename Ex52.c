//Exercicio 52

#include <stdio.h>
#include <math.h>

int S;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite um numero inteiro: ");
    scanf("%i", &S);
    printf("A cubo por multiplicacao direta da: %i e pela biblioteca matematica: %.0f\n", S*S*S, pow(S,3));
    printf("Pressione Enter para sair...");
    getchar();
}