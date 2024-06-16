#include <stdio.h>

int main()
{

    int num;
    int zero = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num == 0){
    printf(" Encerrando programa\n");
    
    }

    if (num % 2 == 0)
        printf("O numero e par.\n");
    else 
        printf("O numero e impar.\n");
        
        
    return 0;
}
