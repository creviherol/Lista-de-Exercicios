//Exercicio 54

#include <stdio.h>
#include <math.h>

float N[4],X=0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 3; i++) {
        printf("Quanto o amigo %i apostou[%i/3]:",i+1,i+1);
        scanf("%f", &N[i]);
        X += N[i];
        printf("\033[2J\033[H"); // Limpa a tela
    }
    printf("Qual o valor do premio: ");
    scanf("%f", &N[3]);
    printf("Do premido de R$:%.2f primeiro amigo tera %.2f%% R$: %.2f ,o segundo amigo tera %.2f%% R$: %.2f e o terceiro amigo tera %.2f%% R$: %.2f, \n",N[3],(N[0]*100)/X,(N[3]*(N[0]*100)/X)/100,(N[1]*100)/X,(N[3]*(N[1]*100)/X)/100,(N[2]*100)/X,(N[3]*(N[2]*100)/X)/100);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}