#include <stdio.h>
#include <math.h>

int main() {
    double Si = 0.0;

    for (int i = 1; i <= 6; i++) {
        double term1 = pow(i, 2 * i);
        double term2 = exp(i) * i * sin(2 * i);
        Si += term1 + term2;
    }

    printf("S_i = %lf\n", Si);
    return 0;
}