//Exercicio 51

#include <stdio.h>
#include <math.h>

float S=0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 1; i <=50; i++){
        S+=(pow(2,i)/(51-i));
    }
    printf("A soma dos termos da serie e: %.2f\n", S);
    printf("Pressione Enter para sair...");
    getchar();
}