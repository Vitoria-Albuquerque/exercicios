#include<stdio.h>
#include<math.h>

int main(){

    // Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 

  
    int soma = 0; 

    for (int i = 2; i <= 100; i += 2) {
        soma += i; 
    }
    printf("---------------------------------------------\n ");

    printf("A soma dos 50 primeiros numeros pares e: %d \n", soma);

    return 0;
}



