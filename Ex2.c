//Exercicio 2

#include <stdio.h>

float a,b;
char operacao;
int a1 = 135 ,a2 = 198, a3=163, a4=160;

void main() {
    printf("\033[2J\033[1;1H"); // Limpa a tela
    printf("Digite um n%cmero inteiro: ",a3);
    scanf("%f", &a);
    printf("Digite o segundo n%cmero inteiro: ",a3);
    scanf("%f", &b);
    printf("Escolha a opera%c%co matem%ctica\n (a) Opera%c%co de Soma\n (b) Opera%c%co de Subtra%c%co\n (c) Opera%c%co de Divis%co\n (d) Opera%c%co de Multiplica%c%co\n Op%c%co: ",a1,a2,a4,a1,a2,a1,a2,a1,a2,a1,a2,a2,a1,a2,a1,a2,a1,a2);
    scanf(" %c", &operacao); 
    if (operacao == 'a') 
        printf("A soma dos numeros e: %.2f\n", a + b);
    else if (operacao == 'b')
        printf("A subtracao dos numeros e: %.2f\n", a - b);
    else if (operacao == 'c') {
        if (b != 0)
            printf("A divisao dos numeros e: %.2f\n", a / b);
        else
            printf("Erro: Divisao por zero!\n");
    } else if (operacao == 'd')
        printf("A multiplicacao dos numeros e: %.2f\n", a * b);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}
