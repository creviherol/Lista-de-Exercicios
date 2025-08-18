//Exercicio 24

#include <stdio.h>
#include <math.h>

int Planeta;
float Peso;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Qual o seu peso em Kg: ");
    scanf("%f", &Peso);
    printf("+---+---------+\n| 1 | Mercurio|\n+---+---------+\n| 2 |  Venus  |\n+---+---------+\n| 3 |  Marte  |\n+---+---------+\n| 4 | Jupiter |\n+---+---------+\n| 5 | Saturno |\n+---+---------+\n| 6 |  Unano  |\n+---+---------+\n");
    printf("Qual o planeta vc escolhe ? (digite o numero a esquesta da tabela): ");
    scanf("%i", &Planeta); 
    switch (Planeta) {
        case 1:
            Peso *= 3.7;  
            printf("Seu peso em Mercurio e: %.2f N\n", Peso);
            break;
        case 2:
            Peso *= 8.8;  
            printf("Seu peso em Venus e: %.2f N\n", Peso);
            break;
        case 3:
            Peso *= 3.8;
            printf("Seu peso em Marte e: %.2f N\n", Peso);
            break;
        case 4: 
            Peso *= 26.4;
            printf("Seu peso em Jupiter e: %.2f N\n", Peso);
            break;
        case 5:
            Peso *= 11.5;
            printf("Seu peso em Saturno e: %.2f N\n", Peso);
            break;
        case 6:
            Peso *= 11.7;
            printf("Seu peso em Unano e: %.2f N\n", Peso);
            break;
        default:
            printf("Planeta invalido!\n");
            return;
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}