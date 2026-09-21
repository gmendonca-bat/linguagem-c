// Faça um programa em C que simule um sistema de
// conversão de unidades de dados. O programa deve 
// exibir um menu com as seguintes opções:
//   1-Converter bit para byte (÷ por 8)
//   2-Converter byte para bit (x por 8)
//   3-Converter megabyte para kilobyte (x 1024)
//   4-Converter megabyte para gigabyte (÷1024)
//   5-Sair
// O usuário deve escolher uma opção e informar o 
// valor a ser convertido. O programa realiza a 
// conversão e exibe o resultado. O menu deve ser 
// exibido novamente até que a opção "Sair" seja 
// escolhida

#include <stdio.h>

int main(){
    int conversao, escolha, numero;


    do{
        printf("\n---Escolha---\n1-Converter bit para byte (÷ por 8)\n2-Converter byte para bit (x por 8)\n3-Converter megabyte para kilobyte (x 1024)\n4-Converter megabyte para gigabyte (÷1024)\n5-Sair");
        printf("\nEscolha: ");
        scanf("%d", &escolha);
        
        switch(escolha){
            case 1:
            printf("Converter bit para byte: ");
            scanf("%d", &numero);

            conversao = numero / 8;
            printf("\n%d bit(s) equivalem a %d byte", numero, conversao);
            break;
            
            case 2:
            printf("Converter byte para bit: ");
            scanf("%d", &numero);

            conversao = numero * 8;
            printf("\n%d byte(s) equivalem a %d bit(s)", numero, conversao);
            break;

            case 3:
            printf("Converter megabyte para kilobyte: ");
            scanf("\n%d", &numero);

            conversao = numero * 1024;
            printf("\n%d megabyte(s) equivalem a %d kilobyte(s)", numero, conversao);
            break;

            case 4:
            printf("Converter megabyte para kilobyte: ");
            scanf("%d", &numero);

            conversao = numero / 1024;
            printf("\n%d megabyte(s) equivalem a %d gigabyte(s)", numero, conversao);
            break;
        }

    }while(escolha != 5);

    return 0;
}