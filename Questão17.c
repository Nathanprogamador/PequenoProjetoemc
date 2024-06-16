#include <stdio.h>
#include <math.h>

int main() {
    double S3 = 0.0;

    for (int i = 1; i <= 6; i++) {
        for (int k = 1; k <= 7; k++) {
            double term = pow(2, (3 * i + k)) / ((i * k) + 1) * k;
            S3 += term;
        }
    }

    printf("S3 = %lf\n", S3);
    
    return 0;
}