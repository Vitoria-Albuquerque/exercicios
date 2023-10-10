#include<stdio.h>


int main(){

    // Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela.

    

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("\n Numeros iguais sao %d e %d", vetor[i], vetor[j]);
            }
        }
    }



    return 0;
}







