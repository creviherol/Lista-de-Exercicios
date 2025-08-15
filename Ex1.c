//Exercicio 1

#include <stdio.h>

int a,b;

void main() {
    printf("\033[2J\033[1;1H"); //Limpa a tela")
    printf("Digite um numeros inteiros: ");
    scanf("%i", &a);
    printf("Digite o segundo numeros inteiros: ");
    scanf("%i", &b);
    printf("A soma de %i com %i resulta em: %i\n", a, b, a+b);
    printf("Pressione Enter para sair...");
    getchar(); // Se já leu algo antes, pode precisar de mais um getchar()
    getchar();
}
