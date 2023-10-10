#include<stdio.h>
#include <stdlib.h>


int main(){

    // Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos repetidos.


    int vet[20], i, j, repetido;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

  
    for (i = 0; i < 5; i++) {
        repetido = 0; 

        for (j = i + 1; j < 5; j++) {
            if (vet[i] == vet[j]) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            printf("%d ", vet[i]);
        }
    }






    return 0; 
}