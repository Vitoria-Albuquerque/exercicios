#include<stdio.h>
#include<math.h>

int main(){

    // Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

    float numero1, numero2, numero3, numero4, maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    fflush(stdin);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    fflush(stdin);

    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);
    fflush(stdin);

    printf("Digite o quarto numero: ");
    scanf("%f", &numero4);
    fflush(stdin);

    printf("---------------------------------------");

    if(numero1>numero2 && numero1>numero3 && numero1>numero4){
        maior = numero1;
        printf("\n O maior numero e: %.2f", maior);
    }
    else if(numero2>numero1 && numero2>numero3 && numero2>numero4){

        maior=numero2;
        printf("\n O maior numero e: %.2f", maior);
    }
    else if( numero3>numero1 && numero3>numero2 && numero3>numero4){

        maior=numero3;
        printf("\n O maior numero e: %.2f", maior);
    }
    else if(numero4>numero1 && numero4>numero2 && numero4>numero3){

        maior=numero4;
        printf("\n O maior numero e: %.2f", maior);
    }
    else{

    }
    if(numero1 < numero2 && numero1 < numero3 && numero1 < numero4) {
    menor = numero1;
    printf("\n O menor numero e: %.2f", menor);
    }
    else if(numero2 < numero1 && numero2 < numero3 && numero2 < numero4) {
    menor = numero2;
    printf("\n O menor numero e: %.2f", menor);
    }
    else if(numero3 < numero1 && numero3 < numero2 && numero3 < numero4) {
    menor = numero3;
    printf("\n O menor numero e: %.2f", menor);
    }
    else if(numero4 < numero1 && numero4 < numero2 && numero4 < numero3) {
    menor = numero4;
    printf("\n O menor numero e: %.2f", menor);
    }

    else{

    }




    return 0;
}