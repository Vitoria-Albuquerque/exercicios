#include<stdio.h>
#include<math.h>

    // Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e
    // retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da
    //seguinte fórmula:

    // V = π * raio² * altura

    // em que π = 3.1414592 

int main(){

    float altura, raio, volume;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volume = 3.1414592 *(pow(raio, 2)) * altura;

    printf("\n O volume do cilindro e: %.2f", volume);







    return 0;
}