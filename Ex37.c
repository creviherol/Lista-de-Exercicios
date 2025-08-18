//Exercicio 37

#include <stdio.h>

int a,b,c,Delta;

int Calculo(a,b,c){
    return (b*b) - (4*a*c);
}

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o valor de a: ");
    scanf("%i", &a);
    printf("Digite o valor de b: ");    
    scanf("%i", &b);
    printf("Digite o valor de c: ");
    scanf("%i", &c);
    Delta = Calculo(a,b,c);
    printf("O valor de Delta e: %i\n", Delta);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}