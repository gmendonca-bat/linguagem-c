// Faça um programa que sorteie um número mágico entre 0 e 500 e pergunte 
// repetidamente ao usuário seu palpite; a cada tentativa informe se o palpite é maior 
// ou menor que o número mágico e conte o total de tentativas; quando acertar, 
// classifique: 1–3 tentativas “muito sortudo”, 4–6 “sortudo”, 7–10 “normal”, >10 
// “tente novamente”.
// Dica: Pode definir um número fixo como o número mágico ou pode pesquisar em 
// usar alguma biblioteca que gere um número aleatório.
// Exemplo:
// Número mágico: — (oculto)
// Entrada: 250 → Saída: Maior que o número mágico.
// Entrada: 120 → Saída: Menor que o número mágico.
// Entrada: 180 → Saída: Acertou em 3 tentativas! 
// Classificação: muito sortudo!!!!!!!!!!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));

    int numero = rand() % 501, chute=0, tentativa = 0;

    
    printf("Número gerado (0 a 500): %d\n", numero);

    do{
        printf("De seu chute de 0 a 500: ");
        scanf("%d", &chute);

            tentativa = tentativa + 1;

        if (chute == numero){
            printf("\n");

        }else if(chute > numero){
            printf("\nChute maior que o número mágico");

        }else{
            printf("\nChute menor que o número mágico");

        }
    
    } while (chute != numero);
    
    if(tentativa <= 3){
        if(tentativa == 1){
            printf("\nMuito sortudo!!! Você acertou com %d tentativa", tentativa);
            
        } else{
            printf("\nMuito sortudo!!! Você acertou com %d tentativas", tentativa);

        }
    }else if(tentativa <= 6){
        printf("\nSortudo!!! Você acertou com %d tentativas", tentativa);

    }else if (tentativa<=10){
        printf("\nNormal. Você acertou com %d tentativas", tentativa);

    }else{
        printf("\n%d Tentativas. Tente Novamente.", tentativa);
        
    }

    return 0;
}