//Exercicio 23

#include <stdio.h>
#include <math.h>

int classe,x = 1,n = 0;
float comprimento, largura, area;

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    printf("Qual a classe do comodo(1/2/3): ");
    scanf("%i", &classe);
    printf("Qual o comprimento do comodo em m: ");
    scanf("%f", &comprimento);
    printf("Qual a largura do comodo em m: ");
    scanf("%f", &largura);
    area = comprimento * largura;
    if (classe == 1) {
        while (x > 0)
        {
            if(((60.0 * x)/area) >= 15)
            {
                n = x;
                x = -1;    
            }
            x++;
        }
    }  
    else if (classe == 2) {
        while (x > 0)
        {
            if(((60.0 * x)/area) >= 18)
            {
                n = x;
                x = -1;    
            }
            x++;
        }
    }
    else {
        while (x > 0)
        {
            if(((60.0 * x)/area) >= 20)
            {
                n = x;
                x = -1;    
            }
            x++;
        }
    }
    printf("O comodo tem uma area de %.2f m^2 e precisara de %i lampadas\n", area,n);  
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
}