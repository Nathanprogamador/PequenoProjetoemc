#include <stdio.h>
#include <stdlib.h>

// Função para calcular a média dos números lidos
float calcularMedia(int quantidade, float soma) {
    return soma / quantidade;
}

int main() {
    int num, quantidade = 0;
    float soma = 0, media;

    // Leitura de sequência de números
    printf("Digite uma sequência de números, digite '0' para finalizar:\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;
        soma += num;
        quantidade++;
    }

    // Cálculo da média e exibição da soma de cada número
    media = calcularMedia(quantidade, soma);
    printf("Soma de cada número com a média de todos eles:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%.0f + %.2f = %.2f\n", soma, media, soma + media);
    }
    return 0;
}