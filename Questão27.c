#include <stdio.h>

int opcoesPagamento() {
   printf("Escolha uma opção de pagamento:\n");
   printf("1) À vista com 10%% de desconto\n");
   printf("2) Em duas vezes (preço da etiqueta)\n");
   printf("3) De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");
   printf("Digite a opção desejada: ");
   int opcao;
   scanf("%d", &opcao);
   return opcao;
}

void calcularPrestacoes(int opcao, float totalGasto) {
   switch (opcao) {
       case 1:
           printf("Você escolheu pagar à vista com 10%% de desconto.\n");
           printf("O valor total das prestações é de R$ %.2f.\n", totalGasto * 0.9);
           break;
       case 2:
           printf("Você escolheu pagar em duas vezes (preço da etiqueta).\n");
           printf("O valor total das prestações é de R$ %.2f.\n", totalGasto);
           break;
       case 3:
           printf("Você escolheu pagar de 3 até 10 vezes com 3%% de juros ao mês.\n");
           printf("O valor total das prestações é de R$ %.2f.\n", totalGasto * 1.03);
           break;
       default:
           printf("Opção inválida.\n");
   }
}

int main() {
   float totalGasto;
   printf("Digite o total gasto pelo cliente: ");
   scanf("%f", &totalGasto);

   int opcao = opcoesPagamento();
   calcularPrestacoes(opcao, totalGasto);

   return 0;
}
