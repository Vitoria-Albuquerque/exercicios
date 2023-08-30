#include<stdio.h>
#include<math.h>

int main(){

    // Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo
    // entre 500 e 1000, ou se ela está fora dos escopos anteriores. 

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero==5 || numero== 200 || numero==400){
        printf("Seu numero e valido. O numero digitado e: %d", numero);
    }
    else if(numero>=500 && numero<=1000){
        printf("Seu numero esta no intervalo 500-1000");
    }
    else{
        printf("Seu numero esta fora do  escopo");
    }





    return 0;
}