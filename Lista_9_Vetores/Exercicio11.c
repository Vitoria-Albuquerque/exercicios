#include<stdio.h>
#include<stdlib.h>

int main(){

    // Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e 
    // a soma dos números positivos desse vetor.

    int num[10], contador = 0, soma = 0;

    printf("Informe 10 numeros reais:\n");

    for(int i = 0; i < 10; i++){
        printf("[%i]: ", i+1);
        scanf("%d", &num[i]);

        if(num[i] < 0){
            contador++;
        }

        if(num[i] > 0){
            soma = soma + num[i];
        }

    }

    printf("\n\n %d numeros negativos.\n Soma dos numeros positivos = %d.\n", contador, soma);





    return 0;
}