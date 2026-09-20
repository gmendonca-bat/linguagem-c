// Leia um número inteiro e informe se ele é primo ou não, considerando que 0 e 1 não
// são primos.
// Exemplos:
// Entrada: 17 → Saída: 17 é primo.
// Entrada: 21 → Saída: 21 não é primo.

#include <stdio.h>


int main(){

    int numero, ehprimo = 1, i;

    printf("Digite seu número: ");
    scanf("%d", &numero);

    if (numero > 1) {
        
        for (i=2; i <= numero-1; i++){
            if(numero % i == 0){
                ehprimo = 0;
                break;  
            } 

        }   if (ehprimo == 1){
                printf("%d é primo\n", numero);

            }else{
                printf("%d não é primo\n", numero);
            }

    } else{
        printf("%d não é um número primo\n", numero);
    } 


    return 0;
}