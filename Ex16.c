//Exercicio 16

#include <stdio.h>

int a = 0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite qual numero quer a Tabuada: ");
    scanf("%i",&a);
    printf("+---------------+\n");
    for (int i = 0; i <= 10; i++) {
        printf("| %2i x %i = %4i |\n", i,a,i * a);
        printf("+---------------+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}