#include<stdio.h>



    // Faça um procedimento que receba, por parâmetro, uma matriz 61x10. O procedimento deve somar individualmente as 
    //colunas da matriz e armazenar o resultado na 61a linha da matriz. O procedimento deve retornar a matriz alterada.

void somarColunas(int matriz[61][10]) {
    for (int j = 0; j < 10; j++) {
        int soma = 0;
        for (int i = 0; i < 61; i++) {
            soma += matriz[i][j];
        }
        matriz[60][j] = soma;
    }
}

int main() {
    int matriz[61][10];

    for (int i = 0; i < 61; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < 61; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    somarColunas(matriz);

    printf("\nMatriz apos somar as colunas:\n");
    for (int i = 0; i < 61; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}







