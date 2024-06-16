#include <stdio.h>

int main() {
    int numeros[100];  
    int tamanho = 0;   

    
    while (1) {
        int numero;
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;  
        }

        numeros[tamanho] = numero;
        tamanho++;
    }

    if (tamanho == 0) {
        printf("Nenhum número foi inserido.\n");
        return 0;
    }

    printf("Números em ordem crescente:\n");
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Números em ordem decrescente:\n");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}