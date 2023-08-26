#include<stdio.h>

int main(){

    // Leia o peso e imprima se é menor que 60kg

    float peso;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if( peso<60){
        printf("O peso e  menor que 60kg");
    }
    else{
        printf("O peso e maior que 60kg");
    }


    return 0;
}