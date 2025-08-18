//Exercicio 38

#include <stdio.h>

float a,b;

float Analise(float a,float b){
    if (a > b)
        return printf("O maior numero e: %f\n", a);
    else if (b > a)
        return printf("O maior numero e: %f\n", b);
    else
        return printf("Os numeros sao iguais\n");
}

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");    
    scanf("%f", &b);
    Analise(a,b);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}