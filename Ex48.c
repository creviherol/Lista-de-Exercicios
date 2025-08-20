//Exercicio 48

#include <stdio.h>

float Numeros[3],X[3]={0};

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    for (int i = 0; i < 3; i++) {
        printf("Digite um numero [%i/3]: ",i);
        scanf("%f", &Numeros[i]);
        printf("\033[2J\033[H"); // Limpa a tela
    }
    X[2] = Numeros[2];     
    for (int i = 1; i>=0; i--){
        for (int j = 2; j>=0; j--){
            if (Numeros[i]>X[j]){
                for (int k = 0;k<j;k++){ // Passar os valores uma casa para trás 
                    X[k] = X[k+1];
                }
                X[j] = Numeros[i];
                j=-1; //Filiza o for para não passar o mesmo numero novamente
            }
        }
    }
for (int i = 0; i < 3; i++) {
    printf("%f\n", X[i]);
}          
printf("Pressione Enter para sair...");
getchar();
getchar();
}