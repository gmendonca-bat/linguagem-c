// Faça um programa que receba do usuário o número de lados e o tamanho dos lados de um polígono regular e 
// imprima o valor da área do polígono. O programa deve decidir que fórmula de cálculo utilizar, de acordo com o 
// número de lados do polígono. Se o número de lados for diferente de 3, 4 ou 6 o programa deve informar: “não sei 
// calcular a área”. Áreas:  a. Triângulo: A = L*L*1.73/4 b. Quadrado: A = L*L c. Hexágono: A = 6*L*L*1.73/4 

#include <stdio.h>

int main(){

    int n_lados;
    float lado,area;

    printf("Quantos lados tem o seu polígono? ");
    scanf("%d", &n_lados);
    printf("Qual o valor do lado do seu polígono em cm? ");
    scanf("%f", &lado);

    switch(n_lados){
        case 3:
            area = (lado * lado * 1.73)/4;
            printf("O seu polígono é um triângulo com área de: %f", area,"cm²");
        break;
        case 4:
            area = lado * lado;
            printf("O seu polígono é um quadrado com área de: %f", area, "cm²");
        break;
        case 6:
            area = (6 * lado * lado * 1.73)/4;
            printf("O seu polígono é um hexágono com área de: %f", area, "cm²");
        break;
        default:
            printf("Não sei calcular a área.");
    }   

    return 0;
}