#include <stdio.h>
#include <math.h> 

int main() {
   double S3 = 0.0;

   for (int i = 1; i <= 6; i++) {
       for (int k = 3; k <= 7; k++) { 
           double resultado = (pow(2, (3 * i + k)) / ((i * k) + 1)) * k;
           if (isnan(resultado)) {
               printf("Erro ao calcular resultado\n");
               return 1;
           }
           S3 += resultado; 
       }
   }

   printf("O valor de S3 é: %f\n", S3); 
   
   return 0;
}
