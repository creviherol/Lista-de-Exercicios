//Exercicio 40

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float g,vm,Temp,cust;
int km;
char t[10],*temp;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite a distancia percorrida na viajem em Km(Ex:152): ");
    scanf("%i", &km);

    printf("Digite o  tempo gasto na viagem (Ex: 2:30 ): ");    
    scanf("%s", t);

    printf("Digite o  preco do combustivel usado (Ex:3.60): ");    
    scanf("%f", &g);

    temp = strtok(t, ":");
    Temp = atof(temp);
    temp = strtok(NULL, ":");
    Temp = Temp + atof(temp)/60.0;
    vm = km/Temp;
    cust = (km/10.0)*g; 
    printf("\033[2J\033[H"); // Limpa a tela
    printf("A velocidade media da viagem foi de %.2f Km/h e o custo de R$:%.2f\n", vm,cust);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}