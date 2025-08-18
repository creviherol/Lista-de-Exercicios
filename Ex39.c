//Exercicio 39

#include <stdio.h>

float t;
int o;

float Temperatura(int o,float t){
    switch (o){
    case 1:
        printf("A temperaura de %.2f celsius fica %.2f Fahrenheit\n",t,(t * (9/5)) + 32); 
        break;
    case 2:
        printf("A temperaura de %.2f Fahrenheit fica %.2f celsius\n",t,(t - 32) / (9/5)); 
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
}

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite a Opcao (1:celsius/fahrenheit ou 2:fahrenheit/celsius): ");
    scanf("%i", &o);
    printf("Digite o valor da temperatura: ");    
    scanf("%f", &t);
    Temperatura(o,t);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}