#include <stdio.h>
#include <stdlib.h>

struct Data {
    int dia, mes, ano;
};

int main() {
    
    struct Data Calendario[64];
    int entradaDia, entradaMes, entradaAno, contadorDatas = 0;

    printf(" ** Registro de Datas **\n");

    for (int i = 0; i < 64; i++) {
        printf("\nDigite o Dia %d (ou 0 para encerrar): ", i + 1);
        scanf("%d", &entradaDia);


        if (entradaDia == 0) {
            printf("\n ** Datas Registradas **\n");
            break;
        }

        printf("Digite o Mês %d: ", i + 1);
        scanf("%d", &entradaMes);

        printf("Digite o Ano %d: ", i + 1);
        scanf("%d", &entradaAno);

        Calendario[contadorDatas].dia = entradaDia;
        Calendario[contadorDatas].mes = entradaMes;
        Calendario[contadorDatas].ano = entradaAno;

        contadorDatas++;
    }

    printf("\n ** Datas Armazenadas **\n");
    for (int i = 0; i < contadorDatas; i++) {
        printf("\nData %d: %d/%d/%d", i + 1, Calendario[i].dia, Calendario[i].mes, Calendario[i].ano);
    }

    return 0;
}
