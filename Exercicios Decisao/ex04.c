// Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. O 
// programa deve retornar o resultado da operação recebida sobre estes dois números.

#include <stdio.h>

int main (){
    char operador;
    float n1, n2;

    printf("Escreva sua expressão no formato: numero operador numero: ");
    scanf("%f %c %f", &n1, &operador, &n2);

    switch(operador){
        case '+':
            printf(" = %f", n1+n2);
        break;
        case '-':
            printf(" = %f", n1-n2);
        break;
        case '*':
            printf(" = %f", n1*n2);
        break;
        case '/':
            printf(" = %f", n1/n2);
        break;
        default:
            printf("\nOperador Desconhecido");
    }   

    return 0;
}
