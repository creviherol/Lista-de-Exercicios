//Exercicio 32

#include <stdio.h>

int Numeros[10],m,M;

void main() {
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro [%i/10]: ",i);
        scanf("%i", &Numeros[i]);
        printf("\033[2J\033[H"); // Limpa a tela
    }
    M = Numeros[0];
    m = Numeros[0];
    for (int i = 1; i < 10; i++) {
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