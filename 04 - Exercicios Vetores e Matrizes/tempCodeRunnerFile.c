// Faça um programa que leia duas matrizes 2×3 de números reais e
// imprima a soma.

#include <stdio.h>

int main(){
    int matrizUm[2][3] = {{2,2,2},{2,2,2}}; int matrizDois[2][3] = {{2,2,2},{2,2,2}}; 
    int soma = 0, i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){

            soma = soma + matrizUm[i][j] + matrizDois[i][j];

        }
    }
    
    printf("\nO valor da soma das duas matrizes é igual a %d", soma);

    return 0;
}