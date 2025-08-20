//Exercicio 48

#include <stdio.h>

float Numeros[3]={25,41,34},X[3]={0,34,41};

void main() {
    printf("\033[2J\033[H"); // Limpa a tela
    /*
    for (int k = 0;k<3;k++){// Passar os valores uma casa para trás 
        X[k] = X[k+1];
    }
    X[2]=41; 
    */
   if (Numeros[1]>X[1]){
        for (int k = 0;k<1;k++){ // Passar os valores uma casa para trás 
            X[k] = X[k+1];
        }
        X[1] = Numeros[1];           
    }
    for (int i = 0; i < 3; i++) {
        printf("%f\n", X[i]);   
    }        
    printf("Pressione Enter para sair...");
    getchar();      
}