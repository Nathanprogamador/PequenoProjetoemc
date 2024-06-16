#include <stdio.h>

    int projeto;
    double valor;
    char tipo;
};

int main() {

    double saldos[10] = {0.0};
    struct Transacao transacao;
    
    printf("Insira os dados solicitados (projeto, valor, tipo) e para encerrar digite -1 :\n");


    while (1) {
        
        printf("Projeto (0 a 9): ");
        scanf("%d", &transacao.projeto);

        if (transacao.projeto == -1) {
            break;
        }
        
        printf("Valor: ");
        scanf("%lf", &transacao.valor);

        printf("Digite (R para Receita, e, D para Despesa): ");
        scanf(" %c", &transacao.tipo); 

        if (transacao.tipo == 'R') {
            saldos[transacao.projeto] += transacao.valor;
        } else if (transacao.tipo == 'D') {
            saldos[transacao.projeto] -= transacao.valor;
        }
    }

    printf("Resumo Financeiro do Projetos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Projeto %d: %.2lf\n", i, saldos[i]);
    }

    return 0;
}
