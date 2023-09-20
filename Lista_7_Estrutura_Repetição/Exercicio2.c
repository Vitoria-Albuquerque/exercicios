#include<stdio.h>
#include<math.h>

int main(){

    //Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. 

    int x=0, n=0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Informe o ponto de partida: ");
    scanf("%d", &x);

    // decremento
    for(x=n; x>=0; x--){
        printf("%d_", x);
    }



    return 0;
}