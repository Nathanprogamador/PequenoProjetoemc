#include <stdio.h>
#include <math.h>

int ehPrimo(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;  
    }
    return 1;  
}

int ehPar(int num) {
    return num % 2 == 0; 
}


int ehQuadradoPerfeito(int num) {
    int raiz = sqrt(num);
    return raiz * raiz == num; 
}

int ehCuboPerfeito(int num) {
    int raiz = cbrt(num);
    return raiz * raiz * raiz == num; 
}

void todasVerificacoes(int num) {
    printf("Numero primo: %s\n", ehPrimo(num) ? "Sim" : "Nao");
    printf("Numero par: %s\n", ehPar(num) ? "Sim" : "Nao");
    printf("Quadrado perfeito: %s\n", ehQuadradoPerfeito(num) ? "Sim" : "Nao");
    printf("Cubo perfeito: %s\n", ehCuboPerfeito(num) ? "Sim" : "Nao");
}

int main() {
    int escolha, num;

    do {
        printf("\n1 - Numero primo\n2 - Numero par\n3 - Quadrado perfeito\n4 - Cubo perfeito\n5 - Todas as verificacoes\n6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite um numero: ");
                scanf("%d", &num);
                printf("%s\n", ehPrimo(num) ? "Primo" : "Nao primo");
                break;
            case 2:
                printf("Digite um numero: ");
                scanf("%d", &num);
                printf("%s\n", ehPar(num) ? "Par" : "Impar");
                break;
            case 3:
                printf("Digite um numero: ");
                scanf("%d", &num);
                printf("%s\n", ehQuadradoPerfeito(num) ? "Quadrado perfeito" : "Nao quadrado perfeito");
                break;
            case 4:
                printf("Digite um numero: ");
                scanf("%d", &num);
                printf("%s\n", ehCuboPerfeito(num) ? "Cubo perfeito" : "Nao cubo perfeito");
                break;
            case 5:
                printf("Digite um numero: ");
                scanf("%d", &num);
                todasVerificacoes(num);
                break;
            case 6:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (escolha != 6);

    return 0;
}