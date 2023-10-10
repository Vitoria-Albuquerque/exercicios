#include<stdio.h>
#include<math.h>


int main(){

    // Faça um programa que calcule o desvio padrão de um vetor V contendo N=10 números, onde M é a media do vetor.

    float m, media, sigma, p;
    int vetor[10];
    media = 0;
    m = 0;
    sigma = 0;
    p = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        m = m + vetor[i];
    }

    media = m / 10.0;

    for(int i = 0; i < 10; i++){
        p = p + pow(vetor[i] - media,2); 
    }

    sigma = sqrt(p/(9)); 

    printf("\n --------------------------------- \n");

    printf("\n Resultado desvio padrao = %.2f \n", sigma);






    return 0; 
}