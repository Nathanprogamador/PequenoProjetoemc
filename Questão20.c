#include <stdio.h>
#include <string.h>

int main() {
   long num;
   long inv = 0;
   char nome[100];

   printf("Olá qual seu nome? ");
   scanf("%s", nome);

   printf("Digite uma sequência de números, (EX: 123456789) Sr.%s: ", nome);
   scanf("%lld", &num);

   if(num == 0){
       printf("Encerrando o programa");
   } else {
       while (num > 0) {
           inv = inv * 10 + (num % 10);
           num /= 10;
       }

       printf("Num. Inv: %lld\n", inv);
   }

   return 0;
}
