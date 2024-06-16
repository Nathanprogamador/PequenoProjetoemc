#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, i = 0, count_gt5_lt10 = 0, count_lt2 = 0, count_complex = 0;
    float raiz1, raiz2, sum_gt5_lt10 = 0, prod_lt2 = 1;

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
            count_complex++;
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

            // Contar a quantidade de raizes maiores do que 5 e menores do que 10
            if (raiz1 > 5 && raiz1 < 10) {
                count_gt5_lt10++;
                sum_gt5_lt10 += raiz1;
            }
            if (raiz2 > 5 && raiz2 < 10) {
                count_gt5_lt10++;
                sum_gt5_lt10 += raiz2;
            }

            // Contar a quantidade de raizes menores do que 2 e calcular o produto
            if (raiz1 < 2) {
                count_lt2++;
                prod_lt2 *= raiz1;
            }
            if (raiz2 < 2) {
                count_lt2++;
                prod_lt2 *= raiz2;
            }
        }
    }

    printf("\nResumo:\n");
    printf("Total de termos processados: %d\n", i);
    printf("Quantidade de raizes com soma maior que 5 e menor que 10: %d\n", count_gt5_lt10);
    printf("Soma das raizes com soma maior que 5 e menor que 10: %f\n", sum_gt5_lt10);
    printf("Quantidade de raizes menores que 2: %d\n", count_lt2);
    printf("Produto das raizes menores que 2: %f\n", prod_lt2);
    printf("Quantidade de raizes complexas: %d\n", count_complex);

    return 0;
}
