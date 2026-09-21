#include <stdio.h>

int main() {
    int matriz[2][3] = {
        {5, 8, 2},
        {1, 9, 4}
    };
    int i, j;

    for (i = 0; i < 2; i++) {         // Percorre as linhas (0 e 1)
        for (j = 0; j < 3; j++) {     // Para cada linha, percorre as colunas (0, 1 e 2)
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");                 // Pula uma linha no terminal ao terminar cada linha da matriz
    }

    return 0;
}