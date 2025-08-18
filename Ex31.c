//Exercicio 31

#include <stdio.h>

int Numeros[10];
float resut;


void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro [%i/10]: ",i);
        scanf("%i", &Numeros[i]);
        printf("\033[2J\033[H"); // Limpa a tela
    }
    printf("+-------+--------+\n");
    for (int i = 0; i < 10; i++) { 
        printf("| %5i |",Numeros[i]);
        if (i % 2 == 0)
            resut = (float)Numeros[i] / 2;
        else
            resut = Numeros[i] * 3;  
        printf(" %7.2f |\n", resut);
        printf("+-------+---------+\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}