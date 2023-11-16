#include<stdio.h>
#include <stdlib.h>

#define NUM_MORADORES 50


    // Em um prédio, com 50 moradores, há três elevadores denominados A, B e C. Para otimizar o sistema de controle dos elevadores,
    // foi realizado um levantamento no qual cada usuário respondia: 

    //o elevador que utilizava com mais frequência; 
    //o período que utilizava o elevador, entre:
    //“M” = matutino; 
    //“V” = vespertino; 
    //“N” = noturno. 
    //Construa um algoritmo que calcule e imprima:

    //qual o período mais usado de todos e a que elevador pertence;
    // qual é o elevador mais frequentado e em que período se concentra o maior fluxo;
    //qual a diferença percentual entre o mais usado dos horários e o menos usado;
    //qual a percentagem sobre o total de serviços prestados do elevador de média utilização. 

 

typedef struct {
    char elevador;
    char periodo;
} RespostaMorador;


void lerRespostas(RespostaMorador respostas[], int numMoradores) {
    printf("Respostas dos moradores:\n");

    for (int i = 0; i < numMoradores; i++) {
        printf("\n Morador %d:\n", i + 1);
        printf("Elevador mais utilizado (A/B/C): ");
        scanf(" %c", &respostas[i].elevador);

        printf("Periodo mais utilizado (M/V/N): ");
        scanf(" %c", &respostas[i].periodo);
    }
}


void calcularPeriodoMaisUtilizado(RespostaMorador respostas[], int numMoradores) {
    int periodoM = 0, periodoV = 0, periodoN = 0;

    for (int i = 0; i < numMoradores; i++) {
        switch (respostas[i].periodo) {
            case 'M':
                periodoM++;
                break;
            case 'V':
                periodoV++;
                break;
            case 'N':
                periodoN++;
                break;
        }
    }

    char periodoMaisUtilizado;
    if (periodoM >= periodoV && periodoM >= periodoN) {
        periodoMaisUtilizado = 'M';
    } else if (periodoV >= periodoM && periodoV >= periodoN) {
        periodoMaisUtilizado = 'V';
    } else {
        periodoMaisUtilizado = 'N';
    }

    printf("O periodo mais usado de todos e %c e pertence a: ", periodoMaisUtilizado);
    for (int i = 0; i < numMoradores; i++) {
        if (respostas[i].periodo == periodoMaisUtilizado) {
            printf("Elevador %c (Morador %d) ", respostas[i].elevador, i + 1);
        }
    }
    printf("\n");
}


void calcularElevadorMaisFrequentado(RespostaMorador respostas[], int numMoradores) {
    int elevadorA = 0, elevadorB = 0, elevadorC = 0;
    int periodoM_A = 0, periodoV_A = 0, periodoN_A = 0;
    int periodoM_B = 0, periodoV_B = 0, periodoN_B = 0;
    int periodoM_C = 0, periodoV_C = 0, periodoN_C = 0;

    for (int i = 0; i < numMoradores; i++) {
        switch (respostas[i].elevador) {
            case 'A':
                elevadorA++;
                switch (respostas[i].periodo) {
                    case 'M':
                        periodoM_A++;
                        break;
                    case 'V':
                        periodoV_A++;
                        break;
                    case 'N':
                        periodoN_A++;
                        break;
                }
                break;
            case 'B':
                elevadorB++;
                switch (respostas[i].periodo) {
                    case 'M':
                        periodoM_B++;
                        break;
                    case 'V':
                        periodoV_B++;
                        break;
                    case 'N':
                        periodoN_B++;
                        break;
                }
                break;
            case 'C':
                elevadorC++;
                switch (respostas[i].periodo) {
                    case 'M':
                        periodoM_C++;
                        break;
                    case 'V':
                        periodoV_C++;
                        break;
                    case 'N':
                        periodoN_C++;
                        break;
                }
                break;
        }
    }

    char elevadorMaisFrequentado;
    if (elevadorA >= elevadorB && elevadorA >= elevadorC) {
        elevadorMaisFrequentado = 'A';
    } else if (elevadorB >= elevadorA && elevadorB >= elevadorC) {
        elevadorMaisFrequentado = 'B';
    } else {
        elevadorMaisFrequentado = 'C';
    }

    char periodoMaisFluxo;
    int fluxoMaisAlto = 0;

    switch (elevadorMaisFrequentado) {
        case 'A':
            if (periodoM_A >= fluxoMaisAlto) {
                fluxoMaisAlto = periodoM_A;
                periodoMaisFluxo = 'M';
            }
            if (periodoV_A >= fluxoMaisAlto) {
                fluxoMaisAlto = periodoV_A;
                periodoMaisFluxo = 'V';
            }
            if (periodoN_A >= fluxoMaisAlto) {
                fluxoMaisAlto = periodoN_A;
                periodoMaisFluxo = 'N';
            }
            break;
        case 'B':
            if (periodoM_B >= fluxoMaisAlto) {
                fluxoMaisAlto = periodoM_B;
                periodoMaisFluxo = 'M';
            }
            if (periodoV_B >= fluxoMaisAlto) {
                fluxoMaisAlto = periodoV_B;
                periodoMaisFluxo = 'V';
            }
            if (periodoN_B >= fluxoMaisAlto) {
                fluxoMaisAlto = periodoN_B;
                periodoMaisFluxo = 'N';
            }
            break;
        case 'C':
            if (periodoM_C >= fluxoMaisAlto) {
                fluxoMaisAlto = periodoM_C;
                periodoMaisFluxo = 'M';
            }
            if (periodoV_C >= fluxoMaisAlto) {
                fluxoMaisAlto = periodoV_C;
                periodoMaisFluxo = 'V';
            }
            if (periodoN_C >= fluxoMaisAlto) {
                fluxoMaisAlto = periodoN_C;
                periodoMaisFluxo = 'N';
            }
            break;
    }

    printf("O elevador mais frequentado e %c e concentra o maior fluxo no periodo %c.\n", elevadorMaisFrequentado, periodoMaisFluxo);
}


void calcularDiferencaPercentual(RespostaMorador respostas[], int numMoradores) {
    int periodoM = 0, periodoV = 0, periodoN = 0;

    for (int i = 0; i < numMoradores; i++) {
        switch (respostas[i].periodo) {
            case 'M':
                periodoM++;
                break;
            case 'V':
                periodoV++;
                break;
            case 'N':
                periodoN++;
                break;
        }
    }

    int max = (periodoM > periodoV) ? ((periodoM > periodoN) ? periodoM : periodoN) : ((periodoV > periodoN) ? periodoV : periodoN);
    int min = (periodoM < periodoV) ? ((periodoM < periodoN) ? periodoM : periodoN) : ((periodoV < periodoN) ? periodoV : periodoN);

    float diferencaPercentual = ((max - min) / (float)max) * 100.0;

    printf("A diferenca percentual entre o periodo mais usado e o menos usado e de %.2f%%.\n", diferencaPercentual);
}

// Função para calcular a percentagem sobre o total de serviços prestados do elevador de média utilização
void calcularPercentagemElevadorMedio(RespostaMorador respostas[], int numMoradores) {
    int elevadorA = 0, elevadorB = 0, elevadorC = 0;

    for (int i = 0; i < numMoradores; i++) {
        switch (respostas[i].elevador) {
            case 'A':
                elevadorA++;
                break;
            case 'B':
                elevadorB++;
                break;
            case 'C':
                elevadorC++;
                break;
        }
    }

    int totalServicos = elevadorA + elevadorB + elevadorC;
    float mediaUtilizacao = totalServicos / 3.0;

    float percentagemElevadorMedio = (elevadorB / mediaUtilizacao) * 100.0;

    printf("A percentagem sobre o total de servicos prestados do elevador de media utilização (B) e de %.2f%%.\n", percentagemElevadorMedio);
}

int main() {
    RespostaMorador respostas[NUM_MORADORES];

    lerRespostas(respostas, NUM_MORADORES);

    calcularPeriodoMaisUtilizado(respostas, NUM_MORADORES);
    calcularElevadorMaisFrequentado(respostas, NUM_MORADORES);
    calcularDiferencaPercentual(respostas, NUM_MORADORES);
    calcularPercentagemElevadorMedio(respostas, NUM_MORADORES);

    return 0;
}



