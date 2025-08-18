//Exercicio 42

#include <stdio.h>

float Gasto,preco;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o quanto gastou de energia em Kwh: ");
    scanf("%f", &Gasto);
    printf("Digite o valor do preco do Kwh da concecionaria: ");
    scanf("%f", &preco);
    printf("\033[2J\033[H"); // Limpa a tela
    printf("O valor da energia e de R$: %.2f e com 7 porcento de desconto ele ficara com R$: %.2f\n",Gasto * preco, (Gasto * preco)/1.07);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}