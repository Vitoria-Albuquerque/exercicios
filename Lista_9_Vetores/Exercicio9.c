#include<stdio.h>

int main(){

    // Crie um programa que lê 6 valores inteiros e , em seguida, mostre na tela os Valores lidos na ordem inversa.

    int vetor[5], num, contador = 0;

    
    do{
        printf("\n Digite um numero par: ");
        scanf("%d", &num);
        if(num % 2 == 0){
            vetor[contador] = num;
            contador++;
        }else{
             printf("\n Numero invalido. Digite novamente:");
        }
    }
    while(contador < 5);

    
    for(int i = 0; i < 5; i++){
        printf("\n %d", vetor[i]);
    }
    
    for(int i = 4; i >= 0; i--){
        printf("\n %d", vetor[i]);
    }





    return 0;
}