#include<stdio.h>

int main(){

    // Crie um programa que lê 6 valores inteiros e , em seguida, mostre na tela os Valores lidos na ordem inversa.

    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]); 
    }
    for(int i = 5; i >= 0; i--){
        printf("\n %d", vetor[i]);
    }




    return 0;
}