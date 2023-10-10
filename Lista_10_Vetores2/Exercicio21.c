#include<stdio.h>


int main(){

    // Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada. Crie um novo vetor denominado C 
    // calculando C = A- B. Mostre na tela dos dados do vetor C.


    int vetA[10];
    int vetB[10];
    int vetC[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("\n Digite um valor inteiro (Vetor A): ");
        scanf("%d", &vetA[i]);
    }


    for (i = 0; i < 10; i++) {
        printf("\n Digite um valor inteiro (Vetor B): ");
        scanf("%d", &vetB[i]);
    }


    for (i = 0; i < 10; i++) {
        vetC[i] = vetA[i] - vetB[i];
        printf("\n Vetor A - Vetor B e igual a: %d \n", vetC[i]);
    }






    return 0; 
}