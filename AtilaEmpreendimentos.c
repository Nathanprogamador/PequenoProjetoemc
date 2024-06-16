#include <stdio.h>
#include <string.h>

#define MAX_MERCADORIAS 40

typedef struct {
    char nome[50];
    int quantidade;
    float precoUnitario;
} Mercadoria;

Mercadoria estoque[MAX_MERCADORIAS] = {{"Atila Empreendimentos", 0, 0.0}};

void cadastrarMercadoria() {
    int i;
    for (i = 0; i < MAX_MERCADORIAS; i++) {
        if (strlen(estoque[i].nome) == 0) {
            printf("Digite o nome da mercadoria: ");
            scanf("%s", estoque[i].nome);
            fflush(stdin);

            printf("Digite a quantidade em estoque: ");
            scanf("%d", &estoque[i].quantidade);
            fflush(stdin);

            printf("Digite o preço unitário: ");
            scanf("%f", &estoque[i].precoUnitario);
            fflush(stdin);

            if (estoque[i].quantidade < 0 || estoque[i].precoUnitario < 0) {
                printf("Quantidade e preço unitário devem ser não negativos.\n");
                i--;
            }

            break;
        }
    }
}

void exibirValorTotal() {
    float total = 0;
    int i;
    for (i = 0; i < MAX_MERCADORIAS; i++) {
        if (strlen(estoque[i].nome) > 0) {
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

        switch (opcao) {
            case 1:
                cadastrarMercadoria();
                break;
            case 2:
                exibirValorTotal();
                break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
