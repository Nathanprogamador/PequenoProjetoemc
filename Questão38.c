#include <stdio.h>

int main() {
    int cuboTrid[3][3][3]; 
    int sArestas = 0;

    int valor = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cuboTrid[i][j][k] = valor;
                valor++;
            }
        }
    }

    printf("Diagonal do cubo:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", cuboTrid[i][i][i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (i == 0 || i == 2 || j == 0 || j == 2 || k == 0 || k == 2) {
                    sArestas += cuboTrid[i][j][k];
                }
            }
        }
    }
    
    printf("Soma dos Elementos do cubo das arestas: %d\n", sArestas);

    return 0;
}
