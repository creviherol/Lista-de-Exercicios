//Exercicio 13

#include <stdio.h>

int Numeros[12],P = 0,I = 0;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    for (int i = 0; i < 12; i++) {
        printf("Digite um numero [%i/12]: ",i);
        scanf("%i", &Numeros[i]);
        if (Numeros[i] % 2 == 0) 
            P++;
        else
            I++;
        printf("\033[2J\033[1;1H"); // Limpa a tela
    }
    printf("Quantidade de numeos Impares: %i e Pares: %i\n", I,P);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}