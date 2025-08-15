//Exercicio 22

#include <stdio.h>
#include <math.h>

int meses;
float rendimento = 0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Quantos meses pretende deixar investindo: ");
    scanf("%i", &meses);
    printf("Em um ano o investimento rendera: %.2f\n", pow(1.0759, 12) * 1000);
    printf("+------+---------+\n");
    for (int i = 1; i <= meses; i++) {
        rendimento = pow(1.0759, i) * 1000;
        printf("| %3i  | %.2f |\n", i, rendimento);
        printf("+------+---------+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}