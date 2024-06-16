#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Velocidades {
    int segundo;
    float valor;
};

int main() {
    int i;
    struct Velocidades velocidades[60];
    int periodoSemDiminuirMaximo = 0;
    int instanteInicialFrenagem = 0;
    float maiorAceleracao = 0;
    int instanteInicialAceleracao = 0;
    int periodoConstanteMaximo = 0;
    int numeroMaximoSegundos = 60;
    srand(time(NULL));

    for (i = 0; i < 60; i++) {

        int numeroAleatorio = rand() % (numeroMaximoSegundos + 1);
        printf("%d, ", numeroAleatorio);
        velocidades[i].valor = numeroAleatorio;
        velocidades[i].segundo = i + 1;
    }

    for (i = 0; i < 60; i++) {
    
        int periodoSemDiminuir = 1;
        while (i + periodoSemDiminuir < 60 && velocidades[i + periodoSemDiminuir].valor >= velocidades[i + periodoSemDiminuir - 1].valor) {
            periodoSemDiminuir++;
        }
        if (periodoSemDiminuir > periodoSemDiminuirMaximo) {
            periodoSemDiminuirMaximo = periodoSemDiminuir;
        }

        if (i + 1 < 60 && velocidades[i].valor - velocidades[i + 1].valor > maiorAceleracao) {
            maiorAceleracao = velocidades[i].valor - velocidades[i + 1].valor;
            instanteInicialFrenagem = i + 1;
        }

        if (i + 1 < 60 && velocidades[i + 1].valor - velocidades[i].valor > maiorAceleracao) {
            maiorAceleracao = velocidades[i + 1].valor - velocidades[i].valor;
            instanteInicialAceleracao = i;
        }

        int periodoConstante = 1;
        while (i + periodoConstante < 60 && velocidades[i + periodoConstante].valor == velocidades[i].valor) {
            periodoConstante++;
        }
        if (periodoConstante > periodoConstanteMaximo) {
            periodoConstanteMaximo = periodoConstante;
        }
    }

    printf("\na) Maior período sem diminuir a velocidade: %d segundos\n", periodoSemDiminuirMaximo);
    printf("b) Instante de tempo que iniciou a frenagem mais abrupta: segundo %d\n", instanteInicialFrenagem + 1);
    printf("c) Maior aceleração positiva: %.2f m/s^2 (iniciada no segundo %d)\n", maiorAceleracao, instanteInicialAceleracao + 1);
    printf("d) Maior período de tempo com velocidade constante: %d segundos\n", periodoConstanteMaximo);

    return 0;
}
