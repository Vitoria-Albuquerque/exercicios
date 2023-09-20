#include<stdio.h>
#include<math.h>

int main(){

    //  Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando
    // condicional). 

    int N;
    
    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);
    
    printf("Os %d primeiros numeros naturais impares sao:\n", N);
    
    
    for (int i = 1; N > 0; i += 2) {
        printf("%d ", i);
        N--; //incremento
    }
    
    


    return 0;
}