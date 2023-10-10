#include<stdio.h>
#define VET 10


int main(){

    // Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que são primos e 
    // suas respectivas posições no vetor.

    int numero[VET],i;
    int divisor; 
    int verifica; 

    divisor=2;
    verifica=1;

    for(i=0; i < 10 ;i++){

        printf("\n Digite um numero: ");
        scanf("%d",&numero[i]);
        printf("\n O numero digitado foi: %d \n",numero[i]);

        if (numero[i] <= 1){
            verifica = 0;
        }
            while(verifica == 1 && divisor <= numero[i] / 2) 
             {
                if (numero[i] % divisor  == 0)
                verifica = 0;
                divisor = divisor + 1;
             }

        printf("\n ----------------------------------------------- \n");

        if (verifica == 1){
            printf("%d eh primo.Sua posicao eh %d. \n", numero[i],i);
        }
        else{
        }
    }





    return 0; 
}