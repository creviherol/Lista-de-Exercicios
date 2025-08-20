//Exercicio 55

#include <stdio.h>
#include <math.h>

int Dia;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Quantos dias o funcionario trabalhou: ");
    scanf("%i", &Dia);
    printf("O funcionario recebera R$: %.2f\n",(Dia*30)*1.08);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}