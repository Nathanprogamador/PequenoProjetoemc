#include <stdio.h>

int main() {
   int num, i = 0, soma = 0, somaQuadrados = 0, produtoCubos = 1; 
   float media = 0;
   printf("Digite um numero (0 para terminar): ");
   scanf("%d", &num);
   
   while(num != 0) { 
       soma += num; 
       somaQuadrados += num * num; 
       produtoCubos *= num * num * num;
       i++;

       if(num > 200) { 
           printf("Numero maior que 200: %d\n", num);
       }

       printf("Digite um numero (0 para terminar): ");
       scanf("%d", &num); 
   }

   if(i != 0) {
       media = (float)soma / i;
   } 

   printf("Media: %.2f\n", media); 
   printf("Soma dos quadrados: %d\n", somaQuadrados); 
   printf("Produto dos cubos: %d\n", produtoCubos); 

return 0;
}