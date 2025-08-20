//Exercicio 560

#include <stdio.h>

int a,b;

int f ( int a , int b ){
        while (a >0 && b >0){
            if (a > b )
                a = a - b;
            else
                b = b - a ;
        }
        return a + b ;      
}

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o primeiro numero: ");
    scanf("%i", &a);
    printf("Digite o segundo numero: ");
    scanf("%i", &b);
    printf("\033[2J\033[H"); // Limpa a tela
    printf("O resultado: %i\n",f(a,b));
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}