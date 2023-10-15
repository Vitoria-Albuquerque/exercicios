#include<stdio.h>

// definição e implementação da função

    // Escreva uma função que receba por parâmetro dois números e retorne o maior deles

int maior(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }

}

main(){

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);


    int resultado = maior(num1, num2);

    printf("Resultado do maior valor e: %d", resultado);    





}