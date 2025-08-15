//Exercicio 15

#include <stdio.h>
#include <math.h>

int a = 0,b;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite ate que numero sera Elevado ao cubo: ");
    scanf("%i",&a);
    printf("+-------+\n");
    for (int i = 1; i < a; i++) {
        b = pow(i,3);
        printf("| %5i |\n", b);
        printf("+-------+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}