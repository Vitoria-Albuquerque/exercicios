#include<stdio.h>

int main(){

    // Leia o salário e imprima se ganha mais que o mínimo

    float salario;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    fflush(stdin);

    if(salario > 1320){
        printf("O salario e maior");
    }
    else{
        printf("O salario e menor que o minimo");
    }



    return 0;
}