// Um cinema vende ingressos numerados de 1 a 100. Faça um programa que calcule 
// a soma de todos os números de poltronas múltiplos de 7 (ou seja, 7, 14, 21, … até 
// 98). Mostre também quantos múltiplos foram encontrados.
// Exemplo de saída:
// Poltronas múltiplas de 7: 7   14   21   28 ... 98
// Soma = 735
// Quantidade = 14

#include <stdio.h>

int main(){
    
    int i, soma = 0, qtd=0;

    printf("Poltronas múltiplas de 7: ");
    for (i = 1; i<=100; i++){
        
        if(i % 7 == 0){
            printf("%d   ", i);
            soma = soma + i;
            qtd++;

        }
    }
    
    printf("\nsoma: %d\n", soma);
    printf("quantidade: %d\n", qtd);

    return 0;
    
}
