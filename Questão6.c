#include<stdio.h>
int main(){
   double primeiroNumero;
   double segundoNumero;
   double resultadoProduto;
   double somasDosQuadrados;
   
   printf("Escreva aqui seu primeiroNumero: ");
   scanf("%lf", &primeiroNumero);
   
   printf("Escreva aqui seu segundoNumero: ");
   scanf("%lf", &segundoNumero);
   
   resultadoProduto = primeiroNumero * segundoNumero;
   somasDosQuadrados = (primeiroNumero * primeiroNumero) + (segundoNumero * segundoNumero);
   
   printf("O resultado é %.2lf\n", resultadoProduto);
   
   printf("A soma dos quadrados é %.2lf\n", somasDosQuadrados);
   
   return 0;
}
