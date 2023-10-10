#include<stdio.h>


int main(){

    // Escreva um program que leia números inteiros no intervalo [0,50] e os armazene em um vetor com 10 posições.
    // Preencha um segundo vetor apenas com o snúmeros ímpares do primeiro vetor. Imprima os dois vetores, 2 elemnetos por linha.


    int vetor[10], impares[10], i,j = 0;
	
		for(i = 0; i < 10; i++){
			
			do{
				printf("\n Digite os numeros do vetor(0-50):  "  );
				scanf("%d", &vetor[i]);
				if(vetor[i] < 0 || vetor[i] > 50){

					printf("invalido");
				}
			}
            while(vetor[i] < 0 || vetor[i] > 50 );
			
			if(vetor[i] % 2 != 0){
				impares[j] = vetor[i];	
			j++;
		}
	}
		for(i = 0; i < 10; i+=2){
			printf("\n %d, %d", vetor[i], vetor[i+1] );
	
	}
		for(i = 0; i < j; i+=2){
			printf("\n %d", impares[i]);

			if (i + 1 < j) {
            	printf("%d", impares[i + 1]);
        }

	}





    return 0; 
}