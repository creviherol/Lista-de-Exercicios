//Exercicio 53

#include <stdio.h>
#include <math.h>
#define PI  3.141592653589793

int Ang;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite um valor de angulo de 0 a 360: ");
    scanf("%i", &Ang);
    printf("O valor de %i em radianos e de: %.4f\n",Ang,(Ang*PI)/180);
    printf("Pressione Enter para sair...");
    getchar();
}