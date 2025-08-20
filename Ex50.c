//Exercicio 50

#include <stdio.h>
#include <math.h>
#define PI  3.141592653589793

float Valor,Y;
char comp;
int X;

float Reatancia (char A,float B){
    switch (A){
    case 'C':
        for (int i = 1; i > 0; i++){
            if ((1/(2*PI*B*60))*pow(10,i)>1){
                X=i;
                i=-1;
            }
        }
        printf("A reatancia capacitiva e de :%.4f * 10^-%i\n",(1/(2*PI*B*60))*pow(10,X),X);
        break;
    
    default:
        break;
    }
}

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Qual o componente passivo (L: indutor/C: Capacitor): ");
    scanf("%s", &comp);
    printf("Qual o valor do componente: ");
    scanf("%f", &Valor);
    printf("\033[2J\033[H"); // Limpa a tela
    Reatancia(comp,Valor);
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}