#include<stdio.h>

int main(){

    // Leia a altura e imprima se é maior que 1.8m

    float altura;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    if(altura>1.8){
        printf("Sua altura e maior que 1.8m");
    }
    else{
        printf("Sua altura e menor que 1.8m");
    }


    
    
    
    return 0;
}