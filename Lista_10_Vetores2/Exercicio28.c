#include<stdio.h>


int main(){

    //  Leia 10 números inteiros e armazene em um vetor V. Crie dois novos vetores V1 e V2. Copie os valores ímpares de V para V1,
    //  e os valores pares de V para V2. Note que cada um dos vetores V1 e V2 tem no maximo 10 elementos, mas nem todos os elementos 
    //  são utilizados. no final escreva os elementos UTILIZADOS de V1 e V2.


    int vetor[10];
	int vetor1[10];
	int vetor2[10];
	int contador1 = 0;		  
	int contador2 = 0; 		 
	char ordinal = 176;     //Tabela ASCII

	for (int i = 0; i < 10; i ++){
		printf("\n Digite o %d %c Numero Inteiro: ", i + 1, ordinal);
		fflush(stdin);
		scanf("%d", &vetor[i]);
	}

	
	for (int i = 0; i < 10; i ++){

		if (vetor[i] % 2 == 0){
			vetor2[contador2] = vetor[i];
			contador2 ++;
		}
        else{
			vetor1[contador1] = vetor[i];
			contador1 ++;
		}
	}

    printf("\n ------------------------------------------------- \n");

	
	printf("\n Elementos de V1 (Impares):\n");
	for (int i = 0; i < contador1; i ++){
		printf("%d \n", vetor1[i]);
	}

	
	printf("\n Elementos de V2 (Pares): \n");
	for (int i = 0; i < contador2; i ++){
		printf("%d\n", vetor2[i]);
	}





    return 0; 
}