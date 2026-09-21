// 3. Faça um programa em C que leia um número 
// inteiro positivo e calcule a soma de todos os 
// números ímpares menores ou iguais a ele. O 
// programa deve exibir o resultado da soma.

#include <stdio.h>

int main(){
    int numero, soma = 0, i;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    for(i = 1; i<=numero; i++){
        
        if(i % 2 != 0){
            soma = soma + i;

        }
    }
    
    printf("A soma dos números ímpares menores ou igual a %d é %d", numero, soma);
    return 0;

}