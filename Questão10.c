#include <stdio.h>

int main() {
    char matricula[5];
    char nome[50];
    float horas_trabalhadas, valor_hora, salario_bruto, salario_liquido;
    float inss, sindical, plano_saude;
    float total_folha = 0, total_contribuicoes = 0, total_encargos = 0;

    printf("Entre com os dados do funcionario (matricula nula para encerrar):\n");

    while (1) {
        printf("Matricula: ");
        scanf("%s", matricula);

        // Verifica se a matricula é nula para encerrar o programa
        if (matricula[0] == '\0') {
            break;
        }

        printf("Nome: ");
        scanf("%s", nome);

        printf("Horas trabalhadas: ");
        scanf("%f", &horas_trabalhadas);

 
        valor_hora = 35.0;


        salario_bruto = horas_trabalhadas * valor_hora;

        inss = 0.085 * salario_bruto;
        sindical = 0.0102 * salario_bruto;
        plano_saude = 0.06 * salario_bruto;

 
        salario_liquido = salario_bruto - inss - sindical - plano_saude;


        total_folha += salario_liquido;
        total_contribuicoes += inss + sindical + plano_saude;
        total_encargos += inss + sindical + plano_saude;


        printf("\nMatricula: %s\n", matricula);
        printf("Nome: %s\n", nome);
        printf("Salario Bruto: R$ %.2f\n", salario_bruto);
        printf("Descontos:\n");
        printf("  INSS: R$ %.2f\n", inss);
        printf("  Contribuicao Sindical: R$ %.2f\n", sindical);
        printf("  Plano de Saude: R$ %.2f\n", plano_saude);
        printf("Salario Liquido: R$ %.2f\n", salario_liquido);
        printf("\n");

        // Limpa o buffer de entrada
        while (getchar() != '\n');


        printf("\n");
    }

    // Imprime os totais da folha de pagamento
    printf("Total da folha de pagamento: R$ %.2f\n", total_folha);
    printf("Total de contribuicoes: R$ %.2f\n", total_contribuicoes);
    printf("Total de encargos: R$ %.2f\n", total_encargos);

    return 0;
}
