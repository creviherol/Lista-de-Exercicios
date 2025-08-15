//Exercicio 20

#include <stdio.h>

float Divisivel = 0;
int a = 0;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Digite qual numero quer analisar: ");
    scanf("%i",&a);
    printf("Os valores que ele e divisivel sem sobrar resto e:\n");
    for (int i = 1; i <= a; i++){
        if (a % i == 0) {
            printf("%i\n", i);
        } 
}
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}