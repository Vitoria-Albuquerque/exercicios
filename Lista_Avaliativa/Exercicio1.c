#include<stdio.h>
#include<math.h>


int main(){

    // Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). 
    // F(x)= 5x+3/(√x² - 16)


    float x, resultado;

    printf("Informe um valor para x: ");
    scanf("%f", &x);


    resultado = (5*x + 3) / (sqrt(pow(x,2)) - 16);

    printf("\n -------------------------------");

    printf("\n O valor de F(x) e: %f", resultado);

    return 0;
}