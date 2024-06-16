#include <stdio.h>
#include <math.h>

float calcularSerie(int n) {
    float soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += pow(-1, i + 1) / (2 * i - 1);
    }

    return soma;
}

int main() {
    int max_termos = 1000000;
    float resultado = 0;

    for (int n = 10; n <= max_termos; n += 10) {
        float termo = pow(1 + 1 / (float)n, n);
        resultado += termo;

        if (n % 100 == 0) {
            printf("Soma parcial da série até n = %d: %.10f\n", n, resultado);
        }
    }

    printf("Soma final da série até n = %d: %.10f\n", max_termos, resultado);
    return 0;
}