
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *comando;
    int arg1;
    int arg2;
} Comando;


char **dividir(char *str, char *delim) {
    char **res = NULL;
    char *pch = NULL;
    int count = 0;

    pch = strtok(str, delim);
    while (pch != NULL) {
        count++;
        res = realloc(res, sizeof(char *) * count);
        res[count - 1] = pch;
        pch = strtok(NULL, delim);
    }
    res = realloc(res, sizeof(char *) * (count + 1));
    res[count] = NULL;
    return res;
}

void interpretar(char *instrucao) {
    char *delim = " ";
    char **partes = dividir(instrucao, delim);

    if (strcmp(partes[0], "SOMA") == 0) {
        printf("%d\n", atoi(partes[1]) + atoi(partes[2]));
    } else if (strcmp(partes[0], "SUBTRACAO") == 0) {
        printf("%d\n", atoi(partes[1]) - atoi(partes[2]));
    } else if (strcmp(partes[0], "PRODUTO") == 0) {
        printf("%d\n", atoi(partes[1]) * atoi(partes[2]));
    } else if (strcmp(partes[0], "DIVISAO") == 0) {
        if (atoi(partes[2]) == 0) {
            printf("Erro: divisão por zero.\n");
        } else {
            printf("%d\n", atoi(partes[1]) / atoi(partes[2]));
        }
    } else {
        printf("Erro: comando desconhecido.\n");
    }

    free(partes);
}

int main() {
    char instrucao[100];
    
    while (1) {
        printf("Digite uma instrução (ou FIM para encerrar): ");
        fgets(instrucao, sizeof(instrucao), stdin);

        instrucao[strcspn(instrucao, "\n")] = '\0';

        if (strcmp(instrucao, "FIM") == 0) {
            break;
        }

        interpretar(instrucao);
    }

    return 0;
}
