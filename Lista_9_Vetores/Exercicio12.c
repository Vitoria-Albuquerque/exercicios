#include<stdio.h>
#include<stdlib.h>

int main(){

    // Fazer um programa para ler 5 vetores e, em seguida, mostrar todos os valores lidos juntamente com o maior,
    // o menor e a média dos valores.

    int valor[5],i,maior,menor,maiorPosicao,menorPosicao;

    for(i=0; i<5; i++){

        printf(" Entre com um numero: ");
        scanf("%d",&valor);

        if(i == 0){
        maior = valor; 
        menor = valor;
        maiorPosicao = i;
        menorPosicao = i;
        }

        if(valor > maior){ 
        maior = valor;
        maiorPosicao = i;
        }

        if(valor < menor){
        menor = valor;
        menorPosicao = i;
        }

  }
  
   printf("\n Maior valor: %d  Posicao %d",maior,maiorPosicao);
   printf("\n Menor valor: %d  Posicao %d",menor,menorPosicao);






    return 0;
}