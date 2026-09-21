// Se declararmos um vetor com int numeros[6] = {5, 12, 8, 20, 33, 14};, 
// qual seria a estrutura de um laço for com uma condicional interna para percorrer esse vetor e contar apenas quantos elementos são números pares?

#include <stdio.h>

int main(){
    int numeros[6] = {5, 12, 8, 20, 33, 14}, i, qntdPares = 0;

    for(i = 0; i<6; i++){

        if (numeros[i] % 2 == 0){
            qntdPares = qntdPares + 1;
        }
    }

    printf("Desta lista, %d elementos são pares", qntdPares);

    return 0;
}