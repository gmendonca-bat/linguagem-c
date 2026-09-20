// Vinicius tem R$ 1.000,00 guardados em uma poupança que rende 2% ao mês. Virgínia 
// tem R$ 500,00 guardados em uma conta digital que rende 4% ao mês. Faça um 
// programa que calcule em quantos meses o saldo de Virgínia será maior que o de 
// Vinicius e mostre o número de meses e os valores finais de cada um.
// Exemplo:
// Saída: Meses = 36 | Saldo Vinicius = R$ 2.039,89 | Saldo Virgínia = R$ 2.051,96

#include <stdio.h>

int main(){
    float valorVinicius = 1000.00, valorVirginia = 500.00, rendimentoVini = 1.02, rendimentoVir = 1.04;
    int meses = 0;

    while (valorVinicius > valorVirginia){
        valorVinicius = valorVinicius * rendimentoVini;
        valorVirginia = valorVirginia * rendimentoVir;
        meses = meses + 1;

    }

    printf("Meses = %d | Saldo Vinicius = R$ %.2f | Saldo Virgínia = R$ %.2f\n", meses, valorVinicius, valorVirginia);

    return 0;
}

