// Faça um fluxograma que calcule o quociente e o resto da divisão inteira de dois 
// números dados (dividendo e divisor) usando apenas operações de soma e/ou 
// subtração (sem usar divisão ou operador %).
// Exemplo:
// Entrada: Dividendo = 17, Divisor = 5 → Saída: Quociente = 3, Resto = 2

#include <stdio.h>

int main(){

    int dividendo, divisor, quociente = 0, resto = 0;

    printf("Escreva aqui o seu dividendo: ");
    scanf("%d", &dividendo);
    printf("Escreva aqui o seu divisor: ");
    scanf("%d", &divisor);

    while (dividendo > divisor){
        quociente = quociente + 1;
        dividendo = dividendo - divisor;

    }
    
    

    printf("quociente: %d", quociente);
    printf("resto: %d\n", dividendo);


    return 0;
}