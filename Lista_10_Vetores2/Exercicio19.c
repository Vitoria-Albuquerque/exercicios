#include<stdio.h>


int main(){

    // Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5*i) % (i + 1), sendo i a posição do elemento no vetor. 
    //Em seguida imprima o vetor na tela.

   int vetor[10], i;
	
	for(i = 0; i < 10; i++){

		vetor[i] = (i + 5 * i) % (i + 1);

		printf("\n %d", vetor[i]);
	}






    return 0; 
}