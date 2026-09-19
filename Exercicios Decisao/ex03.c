// Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles, o menor deles e o valor 
// intermediário.

#include <stdio.h>

int main (){
    float n1, n2, n3;

    printf("escreva o primeiro número: ");
    scanf("%f", &n1);
    printf("escreva o segundo número: ");
    scanf("%f", &n2);
    printf("escreva o terceiro número: ");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3){
        printf("O primeiro número é o maior");
    } else if (n2 > n1 && n2 > n3){
        printf("O segundo número é o maior");
    } else if (n3 > n1 && n3 > n2){
        printf("O terceiro número é o maior");
    } else{
        printf("Os três número são iguais");
    }

    return 0;
}