#include<stdio.h>


int main(){

    // Faça um programa que leia um vetor de 10 números. Leia um número X. COnte os múltiplos de um número inteiro X num vetor
    // e mostre-os na tela.


    int vetor[5] = {-1, 2, 4, -5, 9}, i, j;
	
	for(i = 0; i < 5; i++){

		if(vetor[i] < 0){
			vetor[i] = 0;
		}
	}
	
	for(j = 0; j < 5; j++){
		printf("\n vetor[%d] = %d", j, vetor[j]);
	}




    return 0; 
}