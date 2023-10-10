#include<stdio.h>


int main(){

    // Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições pares os valores 
    // do primeiro e nas posições impares os valores do segundo.

    int vetA[3];
    int vetB[3];
    int vetC[6];
    int a = 0, b = 0;

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor %d de 3 do vetor 1: ", i + 1);
        scanf("%d", &vetA[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor %d de 3 do vetor 2: ", i + 1);
        scanf("%d", &vetB[i]);
    }

    for (int i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            vetC[i] = vetA[a];
            a++;
        } 
        else {
            vetC[i] = vetB[b];
            b++;
        }
    }

    printf("Vetor C: ");

    for (int i = 0; i < 6; i++) {
        printf("%d", vetC[i]);

        if (i < 5) {
            printf(", ");
        }
    }






    return 0; 
}