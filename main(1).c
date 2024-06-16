#include <stdio.h>
#include <string.h>

#define MAX_MERCADORIAS 40

typedef struct {
    char nome[50];
    int quantidade;
    float precoUnitario;
} Mercadoria;

Mercadoria estoque[MAX_MERCADORIAS];

void cadastrarMercadoria() {
    int i;
    for (i = 0; i < MAX_MERCADORIAS; i++) {
        if (strlen(estoque[i].nome) == 0) { // Verifica se a posição está vazia
            printf("Digite o nome da mercadoria: ");
            scanf("%s", estoque[i].nome);
            printf("Digite a quantidade em estoque: ");
            scanf("%d", &estoque[i].quantidade);
            printf("Digite o preço unitário: ");
            scanf("%f", &estoque[i].precoUnitario);
            break; // Sai do loop após cadastrar uma mercadoria
        }
    }
}

void exibirValorTotal() {
    float total = 0;
    int i;
    for (i = 0; i < MAX_MERCADORIAS; i++) {
        if (strlen(estoque[i].nome) > 0) { // Verifica se a posição não está vazia
            total += estoque[i].quantidade * estoque[i].precoUnitario;
        }
    }
    printf("Valor total em mercadorias: R$ %.2f\n", total);
}

int main() {
    int opcao;
    do {
        printf("\nMENU\n");
        printf("1- Cadastrar mercadorias\n");
        printf("2- Exibir valor total em mercadorias\n");
        printf("3- Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            cadastrarMercadoria();
        } else if (opcao == 2) {
            exibirValorTotal();
        } else if (opcao == 3) {
            printf("Saindo do programa...\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
