#include <stdio.h>
#include <stdlib.h>

int verificarDigito(float valor) {
   int temp = (int) valor;
   float decimal = valor - temp;
   if (decimal == 0 && temp >= 0 && temp <= 9) {
       return 1;
   }
   return 0;
}


int verificarNumero(float valor) {
   if (valor >= 0) {
       return 1;
   }
   return 0;
}

int verificarInteiro(float valor) {
   if (verificarNumero(valor) && verificarDigito(valor)) {
       return 1;
   }
   return 0;
}

int main() {
   float valor1, valor2, resultado;
   char operador;

   printf("Digite o valor 1: ");
   scanf("%f", &valor1);
   printf("Digite o operador (+, -, *, /): ");
   scanf(" %c", &operador);
   printf("Digite o valor 2: ");
   scanf("%f", &valor2);

   if (!verificarNumero(valor1) || !verificarNumero(valor2)) {
       printf("Erro: O valor 1 ou o valor 2 não é um número válido.\n");
       exit(1);
   }
   switch (operador) {
       case '+':
           resultado = valor1 + valor2;
           printf("Resultado: %.2f + %.2f = %.2f\n", valor1, valor2, resultado);
           break;
       case '-':
           resultado = valor1 - valor2;
           printf("Resultado: %.2f - %.2f = %.2f\n", valor1, valor2, resultado);
           break;
       case '*':
           resultado = valor1 * valor2;
           printf("Resultado: %.2f * %.2f = %.2f\n", valor1, valor2, resultado);
           break;
       case '/':
           if (valor2 == 0) {
               printf("Erro: Divisão por zero.\n");
               exit(1);
           }
           resultado = valor1 / valor2;
           printf("Resultado: %.2f / %.2f = %.2f\n", valor1, valor2, resultado);
           break;
       default:
           printf("Erro: Operador inválido.\n");
           exit(1);
   }

   return 0;
}

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Números em ordem decrescente:\n");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}