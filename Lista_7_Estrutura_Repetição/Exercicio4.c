#include<stdio.h>
#include<math.h>

int main(){

    // Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

    int n, contador=0;

    printf("Informe um numero: ");
    scanf("%d", &n);
   

    
    while (contador < 5) {
        if (n % 3 == 0) { 
            printf("%d ", n);
            contador++;
        }
        n++; // Incrementa o número 
    }
    
    
    return 0;
}


