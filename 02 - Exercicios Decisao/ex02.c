// Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se formam um triângulo 
// equilátero, isósceles, escaleno ou nenhum desses. Classificação quanto ao lado 
//  Triângulo escaleno: quando as medidas dos lados são todas diferentes. 
//  Triângulo é isósceles: quando possui pelo menos dois lados congruentes, ou seja, com a mesma medida. 
//  Triângulo é equilátero: quando possui os três lados com as mesmas medidas. // 

#include <stdio.h>

int main (){
    int x, y, z;

    printf("Escreva o valor x do triângulo: ");
    scanf("%d", &x);
    printf("Escreva o valor y do triângulo: ");
    scanf("%d", &y);
    printf("Escreva o valor z do triângulo: ");
    scanf("%d", &z);
    if (x > 0 && y > 0 && z > 0 && (x + y > z) && (x + z > y) && (y + z > x)){
        
        if (x != y && y != z && x != z){
            printf("É um triângulo Escaleno\n");

        } else if (x == y && y == z){
            printf("É um triângulo Equilatero\n");

        } else {
            printf("É um triângulo Isoceles\n");

        }
    } else{
        printf("Nenhum desses (não forma um triângulo)\n");
    }

    return 0;
}

