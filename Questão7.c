#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, i = 0, sum, raiz_negativa;
    float raiz1, raiz2;

    printf("Insira a sequencia de ternos de numeros, um de cada vez. Digite '0 0 0' para encerrar.\n");

    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;

        i++;

        // Calcular o delta
        int delta = b * b - 4 * a * c;

        // Se o delta for negativo, não há raízes reais
        if (delta < 0) {
            printf("O terno %d não possui raizes reais.\n", i);
            continue;
        }

        // Calcular as raízes
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);

        // Se as raízes forem iguais, a soma delas será 0
        if (raiz1 == raiz2) {
            printf("O terno %d possui raizes iguais, e a soma delas e 0.\n", i);
        } else {
            printf("O terno %d possui raizes reais: %f e %f. A soma das duas raizes e: %f.\n", i, raiz1, raiz2, raiz1 + raiz2);
        }
    }

    printf("Foram processados %d ternos.\n", i);

    return 0;
}

