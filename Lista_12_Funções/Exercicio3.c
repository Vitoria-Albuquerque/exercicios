#include<stdio.h>

    // Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:
    // a linha 2 com a linha 8;
    // a coluna 4 com a coluna 10;
    // a diagonal principal com a secundária;
    // a linha 5 com a coluna 10;
    // O procedimento deve retornar a matriz alterada.

void realizarTrocas(int A[10][10]) {
    int i, j, temp;

    for (j = 0; j < 10; j++) {
        temp = A[1][j];
        A[1][j] = A[7][j];
        A[7][j] = temp;
    }

    for (i = 0; i < 10; i++) {
        temp = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = temp;
    }

    for (i = 0; i < 10; i++) {
        temp = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = temp;
    }

    for (j = 0; j < 10; j++) {
        temp = A[4][j];
        A[4][j] = A[j][9];
        A[j][9] = temp;
    }
}

int main() {
    int matriz[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = i * 10 + j;
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    realizarTrocas(matriz);

    printf("\nMatriz apos as trocas:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}







