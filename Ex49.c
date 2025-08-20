//Exercicio 49

#include <stdio.h>

float Numeros[5];
int X=0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero [%i/5]: ",i);
        scanf("%f", &Numeros[i]);
        printf("\033[2J\033[H"); // Limpa a tela
    }

    for (int i = 0;i<5;i++){
        if (Numeros[i] < 0){
            X++;
        }
    }
    printf("A quatidade de numero negativos e: %i\n",X);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}