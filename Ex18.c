//Exercicio 18

#include <stdio.h>

int a = 0,Fatorial = 1;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite qual numero quer fatorar: ");
    scanf("%i",&a);
    for (int i = 1; i <= a; i++){
        Fatorial = Fatorial*i;
}
    printf("O fatorial de %i e: %i\n", a, Fatorial);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}