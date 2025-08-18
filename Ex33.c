//Exercicio 33

#include <stdio.h>

float Numero;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite um numero: ",Numero);
    scanf("%f", &Numero);
    if (Numero > 0)
        printf("O numero %.2f e positivo\n", Numero);
    else if (Numero < 0)
        printf("O numero %.2f e negativo\n", Numero);
    else
        printf("O numero e zero\n");
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}