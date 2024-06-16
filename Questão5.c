#include <stdio.h>

int main() {
    int numero, soma = 0, produto = 1;

    printf("Digite os números (0 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop quando 0 é digitado
        }

        // Verifica as condições especificadas
        if (numero > 2 && numero < 100 && numero != 10 && numero != 20 && numero != 32) {
            soma += numero;
            produto *= numero;
        }
    }

    printf("Soma dos números válidos: %d\n", soma);
    printf("Produto de todos os números lidos: %d\n", produto);

    return 0;
}