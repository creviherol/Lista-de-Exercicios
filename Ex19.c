//Exercicio 19

#include <stdio.h>

float Soma = 0;
int a = 0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite qual numero quer que seja o termo n: ");
    scanf("%i",&a);
    for (int i = 1; i <= a; i++){
        Soma = Soma + (1.0/i);
}
    printf("O valor da serie para n valendo %i e: %f\n", a, Soma);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}