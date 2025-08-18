//Exercicio 9

#include <stdio.h>

int a = 0,A = 0,B1,B2,X=0,x;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    printf("Digite os valores a serem lidos:");
    scanf("%i",&a);
    int Numeros[a];
    for (int i = 0; i < a; i++) {
        printf("Digite um numero [%i/%i]: ",i,a);
        scanf("%i", &Numeros[i]);
        printf("\033[2J\033[1;1H"); // Limpa a tela
        printf("---------\n");
        x = i;
        while (x >= 0){
            B1 = Numeros[X];
            B2 = Numeros[X] * 2;
            printf("| %i | %i |\n",B1,B2);
            printf("---------\n");
            X++;
            x--;
        }
        X = 0;
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}