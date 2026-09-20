// Faça um fluxograma que leia sucessivamente valores positivos informados pelo 
// usuário; ao ler um valor negativo, pare e calcule a média (aritmética) dos valores 
// válidos já fornecidos. Se nenhum valor positivo for informado, comunique que não há média.
// Exemplos:
// Entradas: 10 20 30 -1 → Saída: Média = 20.0
// Entradas: -5 → Saída: Nenhum valor válido.

#include <stdio.h>

int main(){
    int quantidade = 0;
    float numero, media, soma = 0;


    do{
        printf("Digite o %dº número: ", quantidade + 1);
        scanf("%f", &numero);
        if (numero>0){
            soma = soma + numero;
            quantidade = quantidade + 1;
        }
        
    } while (numero >= 0);
    
    
    if (quantidade>0){
        media = soma/quantidade;
        printf("\nMédia = %.2f", media);
    }else{
        printf("Nenhuma valor válido.");
    }

    return 0;
}