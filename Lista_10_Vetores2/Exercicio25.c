#include<stdio.h>


int main(){

    // Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que não são múltiplos de 7 ou que 
    // terminam com 7.

    int vetor[100], i, j = 1;

    for(i = 0; i < 100; i++){

        while(j % 7 == 0 || j % 10 == 7){
        j = j + 1;
        }

        vetor[i] = j;
        j = j + 1;
    }

    printf("Vetor gerado: ");

    for(i = 0; i < 100; i++){

    printf("%d  ", vetor[i]);

    }





    return 0; 
}