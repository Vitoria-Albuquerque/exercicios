#include<stdio.h>
#include<math.h>

int main(){

    // Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. 

    int n = 0, x= 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Digite o ponto de partida: ");
    scanf("%d", &x);

    //incremento
    for(x=0 ; x<=n; x++){
        printf("%d_", x);
    }


    return 0;
}
