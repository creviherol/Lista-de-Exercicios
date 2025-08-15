//Exercicio 8

#include <stdio.h>

float A= 1.5 ,B = 1.1 ,C = 0.02 ,D = 0.03;
int X = 1, Dia = 0;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    while (X==1)
    {
        Dia++;
        A = A + C;
        B = B + D;
        if (B > A)
            X = 0;
    }
    printf("Vai precisar de %i Dias para o segundo reservatorio passar o Primeiro\n", Dia);
    printf("Pressione Enter para sair...");
    getchar();
}