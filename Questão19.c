#include <stdio.h> 
#include <math.h> 

int main() {
    double Somatorio4 = 0; 

    for (int j = 1; j <= 4; j++) { 
        for (int i = 1; i <= 6; i++) { 
            for (int k = 3; k <= 7; k++) { 
                double resultado = (pow(2, j * i + k)) / (i * k + 1) * k * pow(j, i);
                Somatorio4 += resultado; 
            }
        }
    }

    printf("O valor de S4 é: %f\n", Somatorio4); 

    return 0; 
}