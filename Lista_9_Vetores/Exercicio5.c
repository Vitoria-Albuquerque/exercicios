#include<stdio.h>

int main(){

    // Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

     int vetor[10],pares = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]); 
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }
    printf("\n A quantidade de pares existentes no vertor e: %d", pares);




    return 0;
}