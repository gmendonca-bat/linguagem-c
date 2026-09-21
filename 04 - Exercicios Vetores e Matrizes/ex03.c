// Faça   um   programa   que   leia   uma   matriz   3×3,   multiplique   cada
// elemento por 5 e mostre o resultado.

#include <stdio.h>

int main(){
    float matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor para a posição [%d][%d]: ", i+1,j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\n---Matriz * 5---\n");
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%.2f\t", matriz[i][j]*5);
        }
        printf("\n");
    }

    return 0;
}