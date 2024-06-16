#include <stdio.h>

int main() {
    int array[] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5, 14, 2, 3, 4, 1, 2, 5, 6, 8, 9};
    int tmnh = 20; 

    
    int maiorNumero = array[0]; 
    for (int i = 1; i < tmnh; i++) {
        if (array[i] > maiorNumero) {
            maiorNumero = array[i];
        }
    }
    printf("O Maior numero e: %d\n", maiorNumero);

    double Calculemedia = 0.0;
    for (int i = 0; i < tmnh; i++) {
        Calculemedia += array[i];
    }
    Calculemedia /= tmnh;
    printf(" A média é de: %.2lf\n", Calculemedia);

    printf("Os numeros primos são: ");
    for (int i = 0; i < tmnh; i++) {
        int numeroNormal = array[i];
        int Numprimo = 1;

        if (numeroNormal <= 1) {
            Numprimo = 0;
        } else {
            for (int p = 2; p * p <= numeroNormal; p++) {
                if (numeroNormal % p == 0) {
                    Numprimo = 0;
                    break;
                }
            }
        }
        if (Numprimo) {
            printf("%d ", numeroNormal); 
        }
    }
    return 0;
}