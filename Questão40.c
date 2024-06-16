#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_diagonal_secundaria = 0;

    printf("Digite os elementos da matriz 3x3:\n");

    // Leitura dos elementos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            // Adiciona à soma se estiver na diagonal secundária
            if (i + j == 2) {
                soma_diagonal_secundaria += matriz[i][j];
            }
        }
    }

    // Impressão dos elementos (exceto diagonal principal)
    printf("\nElementos da matriz (exceto diagonal principal):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // Impressão da soma dos elementos da diagonal secundária
    printf("\nSoma dos elementos da diagonal secundaria: %d\n", soma_diagonal_secundaria);

    return 0;
}