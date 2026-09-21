// Exemplo de Matriz:
// [  2   5   8 ]
// [  3   7   1 ]
// [  4   9   6 ]
// 
// Elementos da diagonal principal: matriz[0][0] (2), matriz[1][1] (7) e matriz[2][2] (6).
// Saída esperada:
// Soma da diagonal principal = 15

#include <stdio.h>

int main(){

    int matriz[3][3] ={
        {2,5,8},
        {3,7,1},
        {4,9,6}
    }; 
    int soma = 0, i, j=0;


    for (i = 0; i<3; i++){
  
        soma = soma + matriz[i][j];
        j = j+1; // o indice da diagonal de uma matriz sempre vao ser iguais, entao nao preciso interar o indice da coluna, basta começar sempre seguir o indice da linha
    }

    printf("\nSoma: %d", soma);

    return 0;
}