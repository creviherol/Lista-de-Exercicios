//Exercicio 36

#include <stdio.h>

float D1,D2;

void Calculo(){
    printf("Digite um numero: ");
    scanf("%f", &D1);
    printf("Digite o segundo numero: ");
    scanf("%f", &D2);
    printf("A soma da: %.2f \n", D1 + D2);
}

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    Calculo();
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}