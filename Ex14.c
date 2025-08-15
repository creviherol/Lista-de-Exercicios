//Exercicio 14

#include <stdio.h>

int a = 0,M,m;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o numero valores a serem lidos:");
    scanf("%i",&a);
    int Numeros[a];
    for (int i = 0; i < a; i++) {
        printf("Digite um numero [%i/%i]: ",i,a);
        scanf("%i", &Numeros[i]);
        printf("\033[2J\033[H"); // Limpa a tela
    }
    M = Numeros[0];
    m = Numeros[0];
    for (int i = 1; i < a; i++) {
        if (Numeros[i] > M)
            M = Numeros[i];
        if (Numeros[i] < m)
            m = Numeros[i];
    } 
    printf("O maior numero e: %i e o menor: %i\n", M,m);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}