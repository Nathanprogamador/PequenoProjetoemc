#include <stdio.h>

int main() {
    int numero, somaPares = 0, produtoImpares = 1, somaTotal = 0;

    while (1) { // Loop infinito para ler números até que um número nulo seja inserido.
        printf("Digite um número inteiro positivo (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Sai do loop se o número inserido for zero.
        }

        somaTotal += numero; // Adiciona o número lido à soma total.

        if (numero % 2 == 0) {
            // O número é par
            somaPares += numero; // Adiciona o número par à soma dos números pares.
        } else {
            // O número é ímpar
            produtoImpares *= numero; // Multiplica o número ímpar ao produto dos números ímpares.
        }
    }

    printf("Soma dos números pares: %d\n", somaPares);
    printf("Produto dos números ímpares: %d\n", produtoImpares);
    printf("Soma de todos os números lidos: %d\n", somaTotal);

    return 0;
}