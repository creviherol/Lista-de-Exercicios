//Exercicio 45

#include <stdio.h>

float H;
int Sexo;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Qual o seu sexo (1:Masculo ou 2:Feminino): ");
    scanf("%i", &Sexo);
    printf("Qual a sua altura (Ex: 1.70): ");
    scanf("%f", &H);
    switch (Sexo)
    {
    case 1:
        printf("Seu peso ideal e: %.2f kg\n",(72.7*H)-58); 
        break;
    case 2:
        printf("Seu peso ideal e: %.2f kg\n",(62.1*H)-44.7);
        break;
    default:
        printf("Sexo invalido! Digite 1 para Masculino ou 2 para Feminino.\n");
        break;
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}