// Faça um programa que leia duas matrizes 2×3 de números reais e
// imprima a soma.

#include <stdio.h>

int main(){
    float matrizUm[2][3], matrizDois[2][3], matrizSoma[2][3];
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor para [%d][%d] (1º matriz): ", i+1, j+1);
            scanf("%f", &matrizUm[i][j]);
            
        }

        
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor para [%d][%d] (2º matriz): ", i+1, j+1);
            scanf("%f", &matrizDois[i][j]);
            
        }
    }
    printf("\n---Matriz Soma---\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            matrizSoma[i][j] = matrizUm[i][j] + matrizDois[i][j];
            printf("%.2f\t", matrizSoma[i][j]);
        }
        printf("\n");

    }
    return 0;
}



