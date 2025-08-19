//Exercicio 46

#include <stdio.h>
#include <math.h>

int Numero;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o valor do numero inteiro: ");
    scanf("%i", &Numero);
    if (Numero % 10 != 0 && Numero % 5 != 0 && Numero % 2 != 0) 
        printf("O valor nao e divisivel por 10, 5 ou 2.\n");
    if (Numero % 10 == 0) 
        printf("O valor e divisivel por 10.\n");
    if (Numero % 5 == 0) 
        printf("O valor e divisivel por 5.\n");
    if (Numero % 2 == 0) 
        printf("O valor e divisivel por 2.\n");
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}