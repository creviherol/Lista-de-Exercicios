//Exercicio 46

#include <stdio.h>
#include <math.h>

float Numero;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite o valor do numero: ");
    scanf("%f", &Numero);
    if (Numero > 0) {
        printf("A raiz quadrada de %.2f e: %.2f\n", Numero, sqrt(Numero));
    }
    else if (Numero < 0) {
        printf("O quadrado de %.2f e: %.2f\n", Numero,pow(Numero, 2));
    }
    else {
        printf("O numero e zero, nao ha raiz quadrada nem quadrado.\n");
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}