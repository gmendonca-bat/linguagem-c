// Fazer um programa para ler um número do usuário e determinar se este número é par ou não par.

#include <stdio.h>

int main() {
    int numero;

    printf("Escreva um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("\n%d é um número par", numero);

    } else{
        printf("\n%d é um número impar", numero);
    }

    return 0; 
}