#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int nArrays[10], resul;

    for (int i = 0; i < 10; i++) {
        printf("Qual o %d numero:\n", i + 1);
        scanf("%d", &nArrays[i]);
    }

    printf("Nº Par:");
    for (int i = 0; i < 10; i++) { 
        resul = nArrays[i] % 2; 
        if (resul == 0) {
            printf("%d ", nArrays[i]); 
        }
    }

    
    printf("\nNº Impar:");
    for (int i = 0; i < 10; i++) { 
        resul = nArrays[i] % 2;
        if (resul == 1) {
            printf("%d ", nArrays[i]); 
        }
    }

    return 0;
}

