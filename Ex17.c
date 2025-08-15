//Exercicio 17

#include <stdio.h>
int a = 0,Soma = 0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite qual numero quer a Tabuada: ");
    scanf("%i",&a);
    printf("+------+\n");
    for (int i = 1; i <= a; i++)
        if (i % 2 != 0){
            Soma = Soma + i;
            printf("| %3i  |\n", i);
            printf("+------+\n");
        }
    printf("A soma dos nummeros impares de 0 a %i e: %i\n", a, Soma);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}