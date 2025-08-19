//Exercicio 48

#include <stdio.h>

float Numeros[3],X[3];

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 3; i++) {
        printf("Digite um numero [%i/3]: ",i);
        scanf("%i", &Numeros[i]);
        printf("\033[2J\033[H"); // Limpa a tela
    }
    X[2] = Numeros[2];
    for (int i = 1; i > 3; i--) {
        for (int j = 2; j > 3; j--) {
            if (Numeros[i] > X[j]) {
                for (int k = i; k > 0; k--) {
                    Numeros[k]=Numeros[k-1];
                }
            }
        }
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}