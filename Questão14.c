#include<stdio.h>
int main() {
    int numero, menor, soma = 0, produto = 1;
    int primeiroNumero = 1; 

    printf("Digite um numero (ou 0 para sair): ");  
    scanf("%d", &numero); 

    menor = numero; 

    while(numero != 0) { 
        if (numero < menor) {
            menor = numero; 
        } 

        if(numero > 10) {
            soma += numero; 
        }

        if(numero > 200) {
            produto *= numero;
        }

        printf("Digite um numero (ou 0 para sair): ");
        scanf("%d", &numero);
    }
    printf("Menor número lido: %d\n", menor); 
    printf("Soma dos números maiores que 10: %d\n", soma); 
    printf("Produto dos números maiores que 200: %d\n", produto); 
    
return 0;
}