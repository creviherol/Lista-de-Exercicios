//Exercicio 59

#include <stdio.h>

float Numeros[10];
int X;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa [%i/10]: ",i);
        scanf("%f", &Numeros[i]);
        printf("\033[2J\033[H"); // Limpa a tela
    }
    printf("Digite um valor inteiro: ");
    scanf("%i", &X);
    switch (X){
    case 1:
        for (int i = 0; i < 10; i++) {
            printf("/ %.2f ", Numeros[i]);
        }
        printf("/\n");
        break;
    case 2:
        for (int i = 9; i >= 0; i--) {
            printf("/ %.2f ", Numeros[i]);
        }
        printf("/\n");
        break;
    default:
        printf("Numero digitado invalido, digite 1 ou 2\n");
        break;
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}