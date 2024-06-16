#include <stdio.h>

long long fatorial(int n) { 
 
    if (n < 0) { 
        return -1;    }

    long long resultado = 1; 
    for (int i = 1; i <= n; i++) { 
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero; 
    printf("Digite um número para calcular seu fatorial: ");
    scanf("%d", &numero);  

    long long resultado_fatorial = fatorial(numero); 
    if (resultado_fatorial == -1) {
        printf("Erro: Não é possível calcular o fatorial de um número negativo.\n");
    } else { 
        printf("Fatorial de %d: %lld\n", numero, resultado_fatorial);
    }
    return 0;
}