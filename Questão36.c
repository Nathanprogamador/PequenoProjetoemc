#include <stdio.h>

void receberMatriz(int matriz[5][5]) {
    printf("Digite os elementos da matriz:\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}

int calcularSomaDiagonal(int matriz[5][5]) {
    int somaDiagonal = 0;
    for (int i = 0; i < 5; i++) {
        somaDiagonal += matriz[i][i];
    }
    return somaDiagonal;
}

void calcularMultiplicacaoMatrizes(int matrizA[5][5], int matrizB[5][5], int resultado[5][5]) {
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            resultado[linha][coluna] = 0;
            for (int k = 0; k < 5; k++) {
                resultado[linha][coluna] += matrizA[linha][k] * matrizB[k][coluna];
            }
        }
    }
}

void exibirMatriz(int matriz[5][5]) {
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

int main() {
    int A[5][5], B[5][5], Soma[5][5], SomaDiagonalA, SomaDiagonalB, Multiplicacao[5][5];

    receberMatriz(A);

    receberMatriz(B);

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            Soma[linha][coluna] = A[linha][coluna] + B[linha][coluna];
        }
    }

    SomaDiagonalA = calcularSomaDiagonal(A);
    SomaDiagonalB = calcularSomaDiagonal(B);

    calcularMultiplicacaoMatrizes(A, B, Multiplicacao);

    printf("\nSoma das matrizes A e B:\n");
    exibirMatriz(Soma);

    printf("\nSoma das diagonais da matriz A: %d\n", SomaDiagonalA);
    printf("Soma das diagonais da matriz B: %d\n", SomaDiagonalB);

    printf("\nMultiplicação das matrizes A e B:\n");
    exibirMatriz(Multiplicacao);

    return 0;
}
