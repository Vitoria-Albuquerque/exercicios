#include<stdio.h>
#include<math.h>

int main(){

    // Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero 
    //e o quadrado do número caso ele seja negativo.

    float numero, raiz, quadrado;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if(numero>=0){
        raiz = sqrt(numero);

    printf("A raiz deste numero e: %.2f", raiz);
    }
    else if(numero<0){
        quadrado = numero*numero;

        printf("O quadrado do numero e: %.2f", quadrado);
    }





    return 0;
}