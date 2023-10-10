#include<stdio.h>


int main(){

    // Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.

    int vetor[5] = {1, 2, 4, 5, 9}, codigo, i;
	
	printf("Digite o codigo: ");
	scanf("%d", &codigo);
	
	if(codigo == 0){
		exit(0);	
	}
    else if(codigo == 1){
		for(i = 0; i < 5; i++){
			printf("\n Vetor[%d] = %d",i,vetor[i]);
		}
	}
    else if(codigo == 2){
		for(i = 4; i >= 0; i--){
		printf("\n Vetor[%d] = %d",i,vetor[i]);
		}
	}
    else{
		printf("\n Invalido");
	}





    return 0; 
}